#include <stdio.h>

int main() {
    int a,b,c;

    // Input two integers
    printf("Enter first integer=");
    scanf("%d",&a);

    // Calculate the sum
    printf("enter second integer=");
    scanf("%d",&b);
    c=a/b;

    // Display the result
    printf("The division of %d and %d is %d.\n",a,b,c);

    return 0;
}
