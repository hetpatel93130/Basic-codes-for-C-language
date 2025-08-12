#include <stdio.h>

int main() {
    int a,b,c;

    // Input two integers
    printf("Enter first integer=");
    scanf("%d",&a);

    printf("enter second integer=");
    scanf("%d",&b);
    c=a+b;
    printf("sum of %d and %d is %d.\n",a,b,c);
    c=a-b;
    printf("subtraction of %d and %d is %d.\n",a,b,c);
    c=a*b;
    printf("product of %d and %d is %d.\n",a,b,c);
    c=a/b;
    printf("division of %d and %d is %d.\n",a,b,c);



    return 0;
}
