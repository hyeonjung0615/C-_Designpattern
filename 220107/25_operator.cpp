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

    // 2. friend
    // > frined 선언된 함수나 클래스는 private 접근이 가능합니다.
    friend Point operator+(const Point& lhs, const Point& rhs);

    // 1. 값을 읽는 함수를 제공합니다.
    int GetX() const { return x; }
    int GetY() const { return y; }

    // Point Add(const Point& rhs) const
    #if 0
    Point operator+(const Point& rhs) const
    {
        return Point(x + rhs.x, y + rhs.y);
    }
    #endif

    void Print() const
    {
        cout << x << ", " << y << endl;
    }
};

Point operator+(const Point& lhs, const Point& rhs)
{
    //return Point(lhs.x + rhs.x, lhs.y + rhs.y);
    return Point(lhs.GetX() + rhs.GetX(), lhs.GetY() + rhs.GetY());
}

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