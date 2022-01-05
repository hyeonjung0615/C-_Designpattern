// 11_STL.cpp

#include <iostream>
using namespace std;

//Standard Template Library
// => C++에서 제공하는 템플릿 기반의 라이브러리
// => 자료구조(컨테이너, 컬렉션)


// 연속된 메모리 형태의 선형적인 자료 구조 - <vector>
// => 임의 정급이 빠르다.                  - O(1)
// => 중간 삽입, 삭제가 비용이 발상한다.    - O(N)

// 연결 리스트 기반의 선형적인 자료 구조
// => 중간 삽입, 삭제가 빠르다.            - O(1)
// => 탐색이 상대적으로 느리다.            - O(N)

// 우선순위 큐
// => stack - <stack>
//    queue - <queue>

#include <stack>
#include <vector>
#include <list>
int main()
{

    //std::vector<int> v;  //연속된 메모리 공간이 필요해! 할 때 사용
    std::list<int> v; 
    v.push_back(10);
    v.push_back(20);
    v.push_back(30);
    std:: stack<int> s;
    s.push(10);
    s.push(20);

    for (int e : v)
    {
        std::cout << e << std::endl;
    }
    // C++은 pop() 연산이 분리되어 있습니다.
    // - 가장 마지막 요소를 체크하느 함수 : top()
    // - 스택에서 요소를 제거하는 함수    : pop()
    std::cout << s.top() << std::endl;
    s.pop();
    std::cout << s.top() << std::endl;
}

// 탐색
// 1. Tree
//  - 탐색 - O(logN)
//  - 정렬 - O(N)

// 2. Hastable
// - 탐색: O(1)
//   데이터 저장되는 순서가 다릅니다.
//  => 퀵소트 : O(NlogN)

// map => 키 - 값 쌍으로 이루어진 데이터
//  C++ / java
//   c## /Swift - Dictionary 라고도 부릅니다.

#include <map>

int mian()
{
    std::map<std::string, std::string> data;
    data["홍길동"] = "010-1234-5678";
    data["이순신"] = "010-2222-3333";

    std:cout << data["홍길동"] << std::endl;
    std:cout << data["이순신"] << std::endl;
}