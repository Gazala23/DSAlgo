#include<stdio.h>
int main()
{
    int f1,f2,f3,n;
    printf("Enter a number:");
    scanf("%d",&n);
    f1=0;
    f2=1;
    if(n==0)
    {
        printf("n is a fibonacci number");
    }
    f3=f1+f2;
    while(f3<n)
    {
        f1=f2;
        f2=f3;
        f3=f1+f2;
    }
    if(f3==n)
    {
        printf("n is a fibonacci number\n");
    }
    else
    {
        printf("not a fibonacci number\n");
    }
    return 0;
}