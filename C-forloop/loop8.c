#include <stdio.h>
#include <stdlib.h>
void main()
{
    int num1, num2;
    float answer;
    char choice = 'c';

    while (choice == 'c')
    {
        printf("\n enter the value of num1:- ");
        scanf("%d", &num1);
        printf("\n enter the value of num2:- ");
        scanf("%d", &num2);
        printf("\n enter the value 1 add");
        printf("\n enter the value 2 sub");
        printf("\n enter the value 3 mul");
        printf("\n enter the value 4 div");
        printf("\n select your way:- ");
        fflush(stdin);
        scanf("%c", &choice);
        if (choice == '1')
        {
            answer = num1 + num2;
            printf("answer is %2.f", answer);
        }
        else if (choice == '2')
        {
            answer = num1 - num2;
            printf("answer is %2.f", answer);
        }
        else if (choice == '3')
        {
            answer = num1 * num2;
            printf("answer is %2.f", answer);
        }
        else if (choice == '4')
        {
            answer = num1 / num2;
            printf("answer is %2.f", answer);
        }
        else
        {
            printf("invalid");
            fflush(stdin);
            printf("\npress c for continue");
            scanf("%c", &choice);
        }
        printf("\nGood Bye......");
    }
}