#include <stdio.h>
int main()
{
   int gram,kilogram,remaining_gram;
    printf("enter weight in gram");
    scanf("%d",&gram);
   kilogram=gram/1000;
   remaining_gram=kilogram % 1000;

    printf("%d gram is equal to %d kilogram and %d gram.\n",gram,kilogram,remaining_gram);
    return 0;

}
