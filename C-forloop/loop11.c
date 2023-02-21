#include<stdio.h>
void main()
{
    int count=0, space=0;

    for(count=7;count>0;count--)
    {
        printf("%d",count);
    }
    for (space = 2; space < 7; space++)
    {
        printf(" ");

        for (count = 2; space < count; count++)
        {
            printf(" ");
        }
        printf("1");
        printf("\n");
        for (count = 1; count > space; count++)
        {
            printf(" ");
        
        }
        printf("%d", count);
    }
    printf("      1");
    
}