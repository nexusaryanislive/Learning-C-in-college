#include<stdio.h>

int main()
{
    //Arithmetic operators
    int a=5, b=3, c=2, result;

    result = a+b*c; //Multiplication has higher precedence over addition
    printf("a+b*c = %d\n", result);

    result = (a+b)*c; //Parentheses can be used to change the order of evaluation
    printf("(a+b)*c = %d\n", result);

    //Relational Operators
    int x=10,y=5,z=10;

    //Relational operators have a lower precedence over arithmetic operators
    result = x + y > z;
    printf("x + y > z = %d\n", result);

    // Logical operators
    int p = 1, q = 0, r = 1;

    result = p&&q||r; //Logical AND has higher precedence than logical OR
    printf("p&&q||r = %d\n", result);

    return 0;
}
