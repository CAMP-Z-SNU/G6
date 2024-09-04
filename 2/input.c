#include <stdio.h>
int main()
{ 
    int num1, num2,sum, subtraction,multiplication;
    printf("Enter num 1:");
    scanf("%d",&num1);
    printf("Enter num2:");
    scanf("%d",&num2);
    sum=num1+num2;
    printf("The sum of the numbers %d and %d is %d\n",num1,num2,sum);
    subtraction=num1-num2;
    printf("The difference of the numbers is %d\n",subtraction);
    multiplication=num1*num2;
    printf("The multiplication of the two numbers is %d\n",multiplication);
    return 0;

    
}