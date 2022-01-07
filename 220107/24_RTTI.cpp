// 24_RTTI.cpp

#include <iostream>
using namespace std;

// RTTI(Run-Time Type Information)
// 개념 : 실행 시간에 타입을 조사하는 기술

class Car {
    int color;
};

class Sedan : public Car {
public:
    int speed = 100;
};

void Go(Car*p) 
{
    // p가 Sedan이면 speed를 출력하고 싶다.
    // 체크 없이 사용할 경우
    // Sedan* s = static_cast<Sedan*>(p);
    //cout << "Speed: " << s->speed << endl;

    //RTTI 사용방법
    // - 모든 타입은 자신의 타입의 정보를 가지고 있는 type_info 구조체가 있습니다.
    // : typeid 연산자를 통해 얻어올 수 있습니다.
    const type_info& t = typeid(*p);
    cout << t.name() << endl;
}

int main()
{
    Car c;
    Sedan s;

    Go(&c);
    Go(&s);
}