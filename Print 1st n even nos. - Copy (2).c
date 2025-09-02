#include <stdio.h>

int main() {
    int n, i;
    printf("Enter the value of n: ");
    scanf("%d", &n);

    for (i = 2; i <= n; i++) {
        printf("%d ", i);
        i=i+1;
    }

    return 0;
}

