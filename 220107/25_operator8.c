
// ++ 연산자는 C/C++의 동작이 다릅니다.
#include <stdio.h>

int main()
{
    int n = 0;

    //++ ++ ++ ++n; 에러
    printf("%d\n", n);
}