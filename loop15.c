#include <stdio.h>
void main()
{
    int space =0, inspace=0, star=0, count = 0, size = 0;
    printf("Enter the size:- ");
    scanf("%d", &size);
    for (space = 0; space < size + 1; space++)
    {
        printf("_");
    }
    printf("*");
    printf("\n");
    for (star = size; star > 0; star--)
    {
        for (space = 0; space < star; space++)
        {
            printf("_");
        }
        printf("*");
        for (inspace = 0; inspace <= count; inspace++)
        {
            printf("_");
        }
        count = count + 2;
        printf("*");
        printf("\n");
    }
    for (star = 0; star < size; star++)
    {
        for (space = 0; space <= star; space++)
        {
            printf("_");
        }
        printf("*");
        for (inspace = count - 1; inspace > 0; inspace--)
        {
            printf("_");
        }
        count = count - 2;
        printf("*");
        printf("\n");
    }
    for (space = 0; space < size + 1; space++)
    {
        printf("_");
    }
    printf("*");
    printf("\n");
}