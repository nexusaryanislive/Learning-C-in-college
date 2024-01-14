#include<stdio.h>

int main()
{
    int a=60, b=13;
    int c=0;

    printf("The value of a in binary is = 0b%d\n", a);
    printf("The value of b in binary is = 0b%d\n", b);

    c=a & b;
    printf("Line 1 -> Value of c is %d\n", c);

    c = a|b;
    printf("Line 2 -> Value of c is %d\n", c);

    c = a^b;
    printf("Line 3 -> Value of c is %d\n", c);

    return 0;


}
