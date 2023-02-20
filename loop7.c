#include<stdio.h>
void main()
{
    int i=0,j=0;
    for(i=0; i<10; i++)
    {
        printf("* ");

    }
        for(i=16; i>0; i--)
        {
            printf("\n");
            printf("*");

            for(j=1; j<i; j++)
            {
                printf(" ");
            }
            printf("*");
        }
        printf("\n");
        for (i=1; i==1; i++)
        {
        printf("*");
        //printf("\n");
        }
}
// #include <stdio.h>
// void main()
// {
//         int count = 0, flash = 0;
//         for (count = 0; count < 7; count++)
//         {
//         printf("* ");
//         }
//         for (count = 10; count > 0; count--)
//         {
//         printf("\n");
//         printf("*");
//         for (flash = 1; flash < count; flash++)
//         {
//                 printf(" ");
//         }
//         printf("*");
//         }
//         printf("\n");
//         for (count = 1; count == 1; count++)
//         {
//         printf("*");
//         printf("\n");
//         }
// }