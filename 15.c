#include <stdio.h>
int main() {
    int n,num,sum=0;
    scanf("%d",&n);
    for(int i=1;i<=n;i++) {
        scanf("%d",&num);
        sum+=num;
    }
    printf("Sum=%d Mean=%.2f",sum,(float)sum/n);
    return 0;
}