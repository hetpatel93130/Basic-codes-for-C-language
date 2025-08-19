#include <stdio.h>
int main()
{
    float marks1,marks2,marks3,averagemarks;
    printf("enter marks in first subject = ");
    scanf("%f",&marks1);
     printf("enter marks in second subject = ");
    scanf("%f",&marks2);
    printf("enter marks in third subject = ");
    scanf("%f",&marks3);

    averagemarks = (marks1 + marks2 + marks3)/3.0;
    printf("average score = %.2f\n",averagemarks);

if(averagemarks>=70)
{
    printf("student has passed with distinction\n");

}
 else if(averagemarks>=60)
{
    printf("student has passed with first class\n");

}
else if(averagemarks>=50)
{
    printf("student has passed with second class\n");

}
else if(averagemarks>=35)
{
    printf("student has passed with third class\n");

}
else
{
    printf("student has failed in exam\n");

}
return 0;
}
