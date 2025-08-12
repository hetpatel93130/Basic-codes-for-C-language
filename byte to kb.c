#include <stdio.h>


int main()


{

    int byte,kb,mb,gb,remaining_byte;
    printf("enter data in byte for kb = ");
    scanf("%d",&byte);
    kb=byte/1000;
    remaining_byte=kb % 1000;
    printf("%d byte is equal to %d kb and %d byte.\n",byte,kb,remaining_byte);



    printf("enter data in byte for mb = ");
    scanf("%d",&byte);
    mb=byte/1000000;
    remaining_byte=kb % 1000000;
    printf("%d byte is equal to %d mb and %d byte.\n",byte,mb,remaining_byte);



    printf("enter data in byte for gb = ");
    scanf("%d",&byte);
    gb=byte/1000000000;
    remaining_byte=gb % 1000000000;
    printf("%d byte is equal to %d gb and %d byte.\n",byte,gb,remaining_byte);





    return 0;


}
