#include <iostream>
using namespace std;

class A {
    int a;
public:
    void foo() { cout << "foo" << endl;}
};

// 상속 관계가 아닙니다.
class B{
    int b;
public:
    void goo() { cout << "goo" << endl;}
};

int main()
{
    A aaa;
    B * p = reinterpret_cast<B*>(&aaa);

    p->goo();
}