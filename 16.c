#include <stdio.h>
int main() {
    int num, max, min;
    scanf("%d",&num);
    max=min=num;
    for(int i=2;i<=100;i++) {
        scanf("%d",&num);
        if(num>max) max=num;
        if(num<min) min=num;
    }
    printf("Max=%d Min=%d",max,min);
    return 0;
}