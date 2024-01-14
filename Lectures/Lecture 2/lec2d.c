#include<stdio.h>

int main()
{
    int num1, num2, sum;
    printf("Enter the value of num1: ");
    scanf("%d", &num1);

    printf("Enter the value of num2: ");
    scanf("%d", &num2);

    sum = num1 + num2;
    printf("The sum of the digits is: %d \n", sum);

    float ft1, ft2;
    printf("Enter the first float: ");
    scanf("%f", &ft1);

    printf("Enter the second float: ");
    scanf("%f", &ft2);

    float sum2 = ft1 + ft2;
    printf("The sum of the float digits is: %f \n", sum2);

    char a;
    char b;

    printf("Enter the first & second char:");
    scanf("%c %c", &a, &b);

    char joint = a + b;
    printf("The joint of the two characters is: %c \n", joint);
    return 0;


}
