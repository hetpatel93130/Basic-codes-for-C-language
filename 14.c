#include <stdio.h>
int main() {
    int sum=0,num;
    for(int i=1; i<=10; i++) {
        scanf("%d",&num);
        sum+=num;
    }
    printf("Sum=%d Mean=%.2f",sum,sum/10.0);
    return 0;
}