#include<stdio.h>
int main(){

    int i,j,n,k;
    n=5;

    for(i=1; i<=n; i++)
    {
        for(j=1; j<=i; j++)
        {
            printf("%d ",j);
        }
        for (k=i; k<=4; k++)
        {
            printf("  ");
        }
        for (k=i; k<=4; k++)
        {
            printf("  ");
        }
        for (j = i; j>=1 ; j--)
        {
            printf("%d ", j);
        }
        printf("\n");
    }
    return 0;
}