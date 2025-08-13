#include <stdio.h>

int main() {
    int a,b;
    printf("enter first number");
    scanf("%d",&a);

    printf("enter second number");
    scanf("%d",&b);

    if(a>b)

    {
printf("biggest number is: %d\n",a);
printf("smallest number is: %d\n",b);
    }
    else if(b>a)
    {
        printf("biggest number is: %d\n",b);
        printf("smallest number is: %d\n",a);
    }
else
    {
    printf("both numbers are equal :%d\n",a);
}
    return 0;
}
