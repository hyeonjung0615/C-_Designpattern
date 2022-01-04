#include <iostream>
using namespace std;
// 1) call by value
void inc1(int x)
{
    ++x;
}

// 2) call by reference(pointer)

void inc2(int *x)
{
    ++(*x);
}

void inc3(int &x)
{
    ++x;
}

/*
int main()
{
    int n = 10;
    //inc1(n);
    //inc2(&n);
    inc3(n);


    cout << n << endl;
}*/


void foo(int x[5])
{
    printf("foo: sizeof(%ld)\n", sizeof(x));
}

void goo(int (&x)[5])
{
    printf("goo : sizeof(%ld\n", sizeof(x));
}


int main()
{
    int x[5];
    printf("sizeof(%ld)\n", sizeof(x));

    foo(x);
    goo(x);
}