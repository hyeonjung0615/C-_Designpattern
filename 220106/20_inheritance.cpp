// 상속

#include <iostream>
#include <string>
using namespace std;

class Student {
 private:
  string names;
  int age;
};

class Professor {
 private:
  string names;
  int age;
  int major;
};
// 상속 문법을 이용하면  공통의 속성을 관리하는 것이 편리합ㄴ디ㅏ.
// > 공통의 속성을 가진 타입을 설계합니다.

// Base / Super 클래스라고 부릅니다.
class User {
 private:
    string namee;
    int age;
};

// Derived / Sub 클래스라고 부릅ㄴ디ㅏ.
class Student : public User {
 private:
    int id;
};

class Professor : public User {
 private:
    int major;
};


