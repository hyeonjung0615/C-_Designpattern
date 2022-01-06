#include <iostream>
using namespace std;

class Animal {
 public:
  void Cry() { cout << "Animal cry" << endl;}
};

class Dog : public Animal {
    public:
    // 기반 클래스의 멤버 함수를 자식 클래스에서 다시 재정의 할 수 있습니다.
    // => 함수 오버라이딩
    void Cry() { cout << "Dog cry" << endl;} 
};

int main() {
    Animal a;
    Dog d;

    a.Cry();
    d.Cry();
}