#include<stdio.h>
int  Addnums(int n);
int main()
{
    int n;
    printf("Enter value of n : ");
    scanf("%d",&n);
    printf("%d",Addnums(n));
    printf("\n");
    return 0;
}

int  Addnums(int n)
{
    if(n==0)
        return 0;
    return (n + Addnums(n-1));
}