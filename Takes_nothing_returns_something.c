#include<stdio.h>
int add();
void main()
{
    int s;
    s=add();
}
int add()
{ 
    int a,b,c;
    printf("Enter two numbers:");
    scanf("%d, %d",&a,&b);
    c=a+b;
    printf("sum is %d\n",c);
    return c;
}