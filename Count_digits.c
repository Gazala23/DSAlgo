#include<stdio.h>
int main()
{
    long int n;
    int d,count=0;
    printf("Enter any number:");
    scanf("%d",&n);
    while (n>0)
    {
        count++;
        n=n/10;
    }
    printf("Digits in number are %d\n",count);
return 0;
}
