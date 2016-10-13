#include <iostream>

class CA { };
class CB : public CA { };
class CC : public CA { };
class CD : public CC { };

namespace space {
	class CA { virtual void func() {} };

	namespace space2 {
		class CB : public CA { };
		class CC : public CA { };
		class CD : public CC { };

}}


// dynamic_cast<> �� Ŭ���� ���뿡�� ���Ʒ��� ������ �� ������, virtual �Լ��� 
// �־�� �۵��Ѵ�. dynamic_cast<> ��Ŀ������ �����Լ� ���̺��� �Ⱦ�� ã�⶧���̴�.

// static_cast<> �� �����Լ��� ������ Ŭ���� ������ ĳ������ �� �ִ�. �׷���, �����Լ���
// ���� ĳ�����ϴ� �� ��ü�� �� ���� �����, ������ ���� �� �ִ� �ڵ��.

// �ظ��ؼ� dynamic_cast<> �� ����.

int main()
{
	CD *p1 = new CD();
	CC *p2 = new CC();
	CC *p3 = new CD();

	//CB *c1 = static_cast<CB*>(p1);
	//CB *c3 = reinterpret_cast<CB*>(p2);
	CA *p4 = dynamic_cast<CA*>(p3);

	space::space2::CD *pp1 = new space::space2::CD();
	space::CA *pp2 = dynamic_cast<space::CA*>(pp1);
	space::CA *pp3 = static_cast<space::CA*>(pp1);

	space::space2::CD *pp4 = static_cast<space::space2::CD*>(pp2);
	space::space2::CD *pp5 = dynamic_cast<space::space2::CD*>(pp2);

	//CA *pp6 = static_cast<CA*>(pp1);

	return 0;
}
