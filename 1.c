#include<stdio.h>
int main(){

    int i,j,n,v;
    n=45;

    for(i=41; i<=n; i++)
    {
        for(j=41; j<=i; j++)
        {
            printf("%d ",j);
        }
        printf("\n");
    }
    return 0;
}