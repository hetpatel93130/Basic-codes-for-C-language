#include <stdio.h>
int main()
{
    float rupees,dollar;
    float conversionrate=85.23;
    printf("enter currency in rupees");
    scanf("%f",&rupees);

    dollar=rupees/conversionrate;
    printf("equivalent amount of dollar: %.2f\n",dollar);
    return 0;

}


