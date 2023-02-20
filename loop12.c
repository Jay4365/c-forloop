#include<stdio.h>
void main()
{
    long long int num1, fact=1, num;
    printf("Enter the number :- ");
    scanf("%lld",&num);
    for(num1=1; num1<=num; num1++)
    {
        fact=fact*num1;
    }
    printf("the factorial of %lld is:- %lld",num,fact);
}