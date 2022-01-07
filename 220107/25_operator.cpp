#include <iostream>
using namespace std;

// operator(연산자)
// +, -, =, <<, >>, *, / ...

class Point {
private:
    int x;
    int y;

public:
    Point(int a, int b)
        : x(a)
        , y(b)
    {
    }

    // Point Add(const Point& rhs) const
    Point operator+(const Point& rhs) const
    {
        return Point(x + rhs.x, y + rhs.y);
    }

    void Print() const
    {
        cout << x << ", " << y << endl;
    }
};

// 연산자 오버로딩
//  : 연산자를 객체에 대해서 사용할 때,
//    약속된 함수가 호출됩니다.
int main()
{
    Point p1(1, 1);
    Point p2(1, 10);

    Point p3 = p1 + p2;
    // Point p3 = p1.operator+(p2);
    // Point p3 = operator+(p1, p2);
    // : 위의 형태로 번역합니다.

    // Point p3 = p1.Add(p2);
    p3.Print();
}