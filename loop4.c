#include <stdio.h>

void main()
{
    int n = 3220;
    int n1 = 2, n2 = 1, n3;

    printf("%d %d ", n1, n2);
    for (n1 = 2; n3 < n; n3++)
    {
        n3 = n2;
        n2 += n1;
        n1 = n3;
        printf("%d ", n1);
    }
}