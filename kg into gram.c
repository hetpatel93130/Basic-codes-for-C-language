#include <stdio.h>

int main() {
    float kg, gram;

    printf("Enter the weight in kg: ");
    scanf("%f", &kg);

    gram= kg * 1000;


    printf("%f kg is equal to %f gram.\n", kg, gram);

    return 0;
}
