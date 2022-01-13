#include <iostream>
using namespace std;

// 2. Template 기반 컨테이너

template <typename T>
struct Node {
    T data;
    Node* next;

    Node(const T& a, Node* n)
        : data(a)
        , next(n)
    {
    }
};

template <typename T>
class Slist {
    Node<T>* head;

public:
    Slist()
        : head(nullptr)
    {
    }

    void push_front(const T& a) { head = new Node<T>(a, head); }

    const T& front() { return head->data; }
};

int main()
{
    Slist<int> s;
    s.push_front(10);
    s.push_front(20);
    s.push_front(30);

    int n = s.front();
    cout << n << endl;
}