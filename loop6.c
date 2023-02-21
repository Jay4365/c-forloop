#include <stdio.h>
void main()
{
    int count = 0, flash = 0;
    for (count = 0; count < 7; count++)
    {
        printf("* ");
    }
    for (count = 10; count > 0; count--)
    {
        printf("\n");
        printf("*");
        for (flash =1 ; flash < count; flash++)
        {
            printf(" ");
        }
        printf("*");
    }   
    printf("\n");
    for (count = 1; count == 1; count++)
    {
        printf("*");
        printf("\n");
    }
}