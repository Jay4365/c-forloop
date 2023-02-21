//write a program to print following pattern
//1,5,12,22,35,51,70,92,117,145,176,...3000
//3  3  3  3

#include <stdio.h>
void main()
{
    int number = 1, tamp = 4;
    printf("%d", number);
    for (tamp = 4; number < 2882; tamp=tamp+3)
    {
        number = number + tamp;
        printf(" %d", number);
    }
}