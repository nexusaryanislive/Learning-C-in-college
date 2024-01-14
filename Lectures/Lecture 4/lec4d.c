#include<stdio.h>

int main()
{
    int a=25, b=13;
    float result;

    result = a/b;

    //display only 2 digits after decimal point
    printf("(Without typecasting)25/13 = %.2f \n", result);

    result = (float)a/b; //display only 2 digits after decimal point
    printf("(With typecasting) 25/13 = %.2f \n", result);

    return 0;

}
