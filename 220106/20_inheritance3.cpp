#include <iostream>
using namespace std;

class Base {
 public:
  Base() { cout << "Base()" << endl; }
  Base(int a) { cout << "Base(int)" << endl; }

  ~Base() { cout << "~Base()" << endl; }
};

class Derived : public Base {
 public:
 // 원리 : 컴파일러는 자식 클래스의 생성자에서는 초기화 리스트를 통해 부모의 기본
 // 생성자를 호출하는 코드르르 삽입합니다.
 // > 부모가 기본 생서앚를 제공하지 않을 경우,
 //     명시적으로 부모의 생성자를 호출해야 합니다.
 // Derived() { cout << "Derived()" << endl; }

  Derived() : Base(42) { cout << "Derived()" << endl; }

  ~Derived() { cout << "~Derived()" << endl; } 
};

int main() {
    Derived d;
}