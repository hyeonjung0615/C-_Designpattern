// 18_thread3.cpp
// C++11 부터 스레드를 표준 라이브러리를 통해 지원합니다.
#include <iostream>
#include <thread>


void foo() {
    std::cout << "foo" << std:: endl;
}

int main() {
    std:: cout << "main thread" << std::endl;
    std::thread t1(&foo);

    t1.join();
}
