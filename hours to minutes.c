#include <stdio.h>

int main() {
    float hours, minutes;

    printf("Enter the number of hours: ");
    scanf("%f", &hours);

    minutes = hours * 60;


    printf("%f hours is equal to %f minutes.\n", hours, minutes);

    return 0;
}
