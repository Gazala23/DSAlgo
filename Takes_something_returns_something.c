#include<stdio.h>
int add(int,int);
void main()
{
    int x,y;
    printf("Enter two numbers:");
    scanf("%d,%d",&x,&y);
    add(x,y);
}
int add(int a,int b)
{
    printf("sum is %d\n",a+b);
    return(a+b);
}
