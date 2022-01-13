#include <iostream>
using namespace std;

class Car {
public:
 ~Car() { cout << "Car 객체 파괴" << endl; }
 void Go() { cout << "Car go" << endl;}
}

// 스마트 포인터 : 임의의 객체가 다른 클래스의 포인터의 역할을 하는 것
// 객체
// 생성자, 소멸자, 멤버 함수


class Ptr {
    Car* obj;
public:
    Ptr(Car*p = nullptr)
        : obj(p)
        {
        }
    ~Ptr() { delete obj;}
};

int main()
{
    Ptr p = new Car;
}
#if 0
int main() 
{
    Car *p = new Car;
    p->Go();
    
    delete p;
}
#endif