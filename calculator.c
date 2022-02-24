#include<stdio.h>
int add(int,int);
int mult(int,int);
int sub(int,int);
float division(float,float);
int main()
{
    int a,b,x,z,y;
    float s;
    printf("Enter two numbers:");
    scanf("%i,%i",&a,&b);
    x=add(a,b);
    y=mult(a,b);
    z=sub(a,b);
    s=division(a,b);
    printf("%d\n%d\n%d\n%f\n",x,y,z,s);
    return 0;
}
int add(int a,int b)
{
    return (a+b);
}

int mult(int a,int b)
{
    return (a*b);
}

int sub(int a,int b)
{
    return (a-b);
}

float division(float a,float b)
{
    return (a/b);
}