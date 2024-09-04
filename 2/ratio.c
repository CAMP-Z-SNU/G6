#include<stdio.h>
int main()
{ 
    double num1,num2,ratio;
    printf("Enter two numbers:");
    scanf("%lf %lf",&num1,&num2);
    ratio=num1/num2;
    printf("The ratio of the two numbers is %lf",ratio);
    return 0;

}
