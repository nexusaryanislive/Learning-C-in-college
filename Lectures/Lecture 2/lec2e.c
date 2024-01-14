#include<stdio.h>

int main()
{
    char firstname[]="Virat";
    char surname[]= "Kohli";
    char firstname2[]= "Rohit";
    char surname2[]= "Sharma";

    printf("\n %s %s", firstname, surname);
    printf("\n %s %s", firstname2, surname2);

    printf("\n %50s %50s", firstname, surname);
    printf("\n %50s %50s", firstname2, surname2);

    return 0;
}
