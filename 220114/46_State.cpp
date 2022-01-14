#include <iostream>
using namespace std;

// 아이템 상태에 따른 동작의 변화
// 방법 1. 아이템의 종류에 따른 조건 분기
// 2

class Character {
    int gold;
    int item;
public:
    void SetItem(int i) { item = i; }

    void Run()
    {
        if (item == 1)
            cout << "Run" << endl;
        else if (item == 2)
            cout << "Fast Run" << endl;
        else if (item == 3)
            cout << "Slow Run " << endl;
    }

    void Attack() {cout << "Attacl" << endl;}
};

int main()
{
    Chararctor c;
    c.Run();Z
    c.Attack();
}


#include <iostream>
using namespace std;

// 아이템 상태에 따른 동작의 변화
// 방법 1. 아이템의 종류에 따른 조건 분기


class Character {
    int gold;
    int item;
public:
    void SetItem(int i) { item = i; }

    void Run()
    {
        if (item == 1)
            cout << "Run" << endl;
        else if (item == 2)
            cout << "Fast Run" << endl;
        else if (item == 3)
            cout << "Slow Run " << endl;
    }

    void Attack() {cout << "Attacl" << endl;}
};

int main()
{
    Chararctor c;
    c.Run();
    c.Attack();
}