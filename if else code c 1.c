#include <stdio.h>

int main() {
    int a,b,c;
    printf("enter first number");
    scanf("%d",&a);

    printf("enter second number");
    scanf("%d",&b);

    printf("enter third number");
    scanf("%d",&c);


if(a>b && a>c){
printf("biggest number is: %d\n",a);
if(b>c){
printf("smallest number is: %d\n",c);
}
else{
   printf("smallest number is: %d\n",b);
}

}


if(b>a && b>c){
printf("biggest number is: %d\n",b);
if(c>a){
printf("smallest number is: %d\n",a);
}
else{
   printf("smallest number is: %d\n",c);
}

}

if(c>b && c>a){
printf("biggest number is: %d\n",c);
if(a>b){
printf("smallest number is: %d\n",b);
}
else{
   printf("smallest number is: %d\n",a);
}

}




    return 0;
}
