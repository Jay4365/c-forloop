#include<stdio.h>
void main()
{
    int num, ans, tamp;
    printf("enter the number:- ");
    scanf("%d",&num);

    ans=num*(num-1);

    tamp=num-2;
    
    do
    {
        ans=ans*tamp;
        tamp--;
    } while (tamp>0);
    printf("the value of ans:- %d",ans);
    
}