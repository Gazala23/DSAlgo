#include<stdio.h>
int main (void)
{
    int i, j, n,p;
    printf("Enter number of lines:");
    scanf("%d", &n);
    for(i=1; i<=n; i++)
    {   
        for(j=1; j<=n-i; j++)
            printf(" ");
        p=n;
        for(j=1; j<=i; j++)
            printf("%d",p--);
        p=p+2;
        for(j=1; j<=i-1; j++)
            printf("%d",p++);
        printf("\n");     
    }
    i--;
    for(i=1; i<=n; i++)
    {   
        for(j=1; j<=i-1; j++)
            printf(" ");
        p=n;
        for(j=1; j<=n-i+1; j++)
            printf("%d",p--);
        p=p+2;
        for(j=1; j<=n-i; j++)
            printf("%d",p++);
        printf("\n");
    }
    return 0;
}