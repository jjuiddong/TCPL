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


// dynamic_cast<> 는 클래스 계통에서 위아래로 움직일 수 있지만, virtual 함수가 
// 있어야 작동한다. dynamic_cast<> 매커니즘은 가상함수 테이블을 훑어가며 찾기때문이다.

// static_cast<> 는 가상함수가 없더라도 클래스 계통대로 캐스팅할 수 있다. 그러나, 가상함수가
// 없이 캐스팅하는 것 자체가 잘 못된 설계고, 문제가 생길 수 있는 코드다.

// 왠만해선 dynamic_cast<> 를 쓰자.

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
