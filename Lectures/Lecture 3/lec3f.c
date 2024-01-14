#include<stdio.h>

int main()
{
    int a=4;
    short b;
    double c;

    a =10;
    b = (a == 1)?20:30;
    printf("Value of b is %d\n", b);

    b = (a == 10)?20:30;
    printf("Value of b is %d\n", b);

    return 0;
}
