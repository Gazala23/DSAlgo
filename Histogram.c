#include<stdio.h>
int main()
{
    int i,j,n;
    printf("Enter five numbers:");
    for(i=1;i<=n;i++)
    {
        scanf("%d",&n);
        printf("\n%d",n);
        for(j=1;j<=n;j++)
            printf("*");
    }
    printf("\n");
    return 0;
}