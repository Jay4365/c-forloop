//write a programe to print following pattern
//0,1,3,6,10,15,21,28,36,45,55,...1000
//0 1 2 3 4 5

#include<stdio.h>
void main()
{
    int number=0, tamp=1;
    printf("%d",number);
    for (tamp=1; number<990; tamp++)
    {
        number=number+tamp;
        printf(" %d",number);
    }
    // printf("%d",number);    //0
    
    // number=number+tamp; //0+1=1
    // printf("%d",number);
    
    // tamp=tamp+1;    //1+1=2
    // number=number+tamp; //1+2=3
    // printf("%d",number);
    
    // tamp=tamp+1;    //2+1=3
    // number=number+tamp; //3+3=6
    // printf("%d",number);

    // tamp = tamp + 1;        // 3+1=4
    // number = number + tamp; // 6+4=10
    // printf("%d", number);
}