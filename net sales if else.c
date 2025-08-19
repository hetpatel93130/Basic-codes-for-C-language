#include <stdio.h>

int main()
{
    float gross,discount,netsales;
    printf("enter amount of gross = ");
    scanf("%f",&gross);
    if (gross>=20000)
    {
        discount=0.15*gross;
    }
    else if(gross>=15000)
            {
                discount=0.10*gross;
            }
            else
                {
                    discount=0.05*gross;
                }
                netsales = gross - discount;
                printf("amount of net sales = %f.\n",netsales);
                return 0;
}
