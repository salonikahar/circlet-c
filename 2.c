#include <stdio.h>
int main()
{

    int i, j;
    int a = 11;

    for (i = 0; i < 5; i++)
    {
        for (j = 1; j <= i; j++)
        {
            printf(" %d", a++);
        }
        printf("\n");
    }

    return 0;
}