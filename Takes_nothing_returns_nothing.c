#include<stdio.h>

void add(void);
void main()
{
     add();
}
void add()
{
    int a,b,c;
    printf("Enter two numbers: ");
    scanf("%d,%d",&a,&b);
    c=a+b;
    printf("sum is %d\n",c);
}