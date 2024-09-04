
#include <stdio.h>
//to find the sum,difference,product and ratio of two numbers`
int main()
{
    float num1, num2;
    scanf("%f", &num1);
    scanf("%f", &num2);
    float sum=0;
    sum=num1+num2;
    printf("Sum is %f\n", sum);
    float diff=0;
    diff=num1-num2;
    printf("Difference is %f\n", diff);
    float prod=0;
    prod=num1*num2;
    printf("Product is %f\n",prod);
    float ratio;
    ratio=num1 / num2;
    printf("Ratio is %f\n", ratio);
}