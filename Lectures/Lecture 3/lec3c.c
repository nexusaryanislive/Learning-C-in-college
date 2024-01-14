#include<stdio.h>

int main()
{
    int a=4;
    --a;
    ++a;
    int b=6;

    printf("The value of a is: %d\n", a);
    printf("The value of a++ is = %d\n", ++a);
    printf("%d\n", a);
    printf("%d\n", a>b);
    printf("%d\n", a<b);
    printf("%d\n", a=!b);
    printf("%d\n", a==b);

    return 0;

}
