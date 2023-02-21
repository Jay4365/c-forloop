// write a program to print number pattern
// 7654321
//  6    1
//   5   1
//    4  1
//     3 1
//      21
//       1

#include <stdio.h>
void main()
{
    int count = 0, space = 0;
    printf("      1");
    printf("\n");

    for (space = 2; space < 7; space++)
    {
        printf(" ");

        for (count = 6; count > space; count--)
        {
            printf(" ");
        }
        printf("%d", count);
        for (count = 2; space > count; count++)
        {
            printf("1");
        }
        printf("1");
        printf("\n");
    }
    for (count = 7; count > 0; count--)
    {
        printf("%d", count);
    }
}