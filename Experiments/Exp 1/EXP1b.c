#include<stdio.h>

//EMI

int main()
{
    float principal, roi, time;

printf("Enter the principal amount: ");
scanf("%f", &principal);

printf("\n Enter the Rate of Interest: ");
scanf("%f", &roi);

printf("\n Enter the Time in years: ");
scanf("%f", &time);

float A = (principal*roi*pow(1+roi,time));
float B = (pow(1+roi,time) - 1);

float EMI = A/B;

printf("\n The EMI for the loan is: %f \n", EMI);

return 0;
}

