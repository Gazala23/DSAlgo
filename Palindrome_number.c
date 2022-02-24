#include<stdio.h>
int main()
{
    int n,r,sum=0, temp;
    printf("Enter a number:");
    scanf("%d",&n);
    temp=n;
    while(n>0)
    {
        r=n%10;
        sum=sum*10+r;
        n=n/10;
    }
    n=temp;
    if(n==sum)
    {
        printf("%d is palindrome number\n",n);
    }
    else
    {
        printf("%d is not a palindrome number\n",n);
    }
    return 0;
}