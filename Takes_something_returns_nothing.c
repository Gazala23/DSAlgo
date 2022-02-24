#include<stdio.h>
void add(int,int);
void main()
{
    int x,y;
    printf("Enter a number:");
    scanf("%d,%d",&x,&y);
    add(x,y);
}
void add(int a,int b)
{
    printf("sum is %d\n",a+b);
}