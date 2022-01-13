// 힙에 생성하는 싱글톤
#include <iostream>
using namespace std;

class Cursor {
private:
    Cursor() { }
    Cursor(const Cursor&) = delete;
    Cursor& operator=(const Cursor&) = delete;

    static Cursor* sInstance;

public:
    static Cursor& GetInstance()
    {
        if (sInstance == nullptr)
            sInstance = new Cursor;

        return *sInstance;
    }
};

// 정적 멤버 변수는 반드시 외부 선언이 필요합니다.
Cursor* Cursor::sInstance = nullptr;

int main()
{
    Cursor& c1 = Cursor::GetInstance();
    Cursor& c2 = Cursor::GetInstance();

    cout << &c1 << endl;
    cout << &c2 << endl;
}