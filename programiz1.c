#include<stdio.h>

void print_statement(void);
int num(int);
int add(int,int);
float mult(float,float);
char ASCII(char);
int remender(int, int);
int quotient(int,int);
double swap_numbers(double ,double ,double);

int main()
{
    int c,d,i;
    long int j;
    long long int k;
    float a, b,l;
    char ch,m;
    double n,first,second,temp;
    long double p;
    
    printf("Enter a character :");
    scanf("%c",&ch);
    printf("\nASCII value of %c is %d\n",ASCII(ch),ch);

    print_statement();

    printf("\nEnter number1 :");
    scanf("%f",&a);

    printf("\nEnter number2 :");
    scanf("%f",&b);
    printf("a*b=%f\n",mult(a,b));

    printf("\nEnter number3 :");
    scanf("%d",&c);

    printf("\nEnter number4 :");
    scanf("%d",&d);
    printf("printed integer=%d\n",num(c));
    printf("c+d=%d\n",add(c,d));
    
    printf("remender=%d\n",remender(c,d));
    printf("quotient=%d\n",quotient(c,d));

    printf("size of int = %zu bytes\n",sizeof(i));
    printf("size of long int = %zu bytes\n",sizeof(j));
    printf("size of long long int = %zu bytes\n",sizeof(k));
    printf("size of float = %zu bytes\n",sizeof(l));
    printf("size of char = %zu bytes\n",sizeof(m));
    printf("size of double = %zu bytes\n",sizeof(n));
    printf("size of long double = %zu bytes\n",sizeof(p));
    
    swap_numbers(first,second,temp);
    return 0;
}
void print_statement(void)
{
    printf("Good morning everyone!\n");
}    

int num(int c)
{
    return c;
}

int add(int c,int d)
{
    return (c+d);
}

float mult(float a,float b)
{
    return (a*b);
}

char ASCII(char ch)
{
    return ch;
}

int remender(int c,int d)
{
    return (c%d);
}

int quotient(int c,int d)
{
    return (c/d);
}

double swap_numbers(double first,double second,double temp)
{

    printf("Enter first number:");
    scanf("%lf",&first);
    printf("Enter second number:");
    scanf("%lf",&second);

    temp=first;
    first=second;
    second=temp;
    
    printf("After swapping, first number=%lf\n",first);
    printf("After swapping, second numer=%lf\n",second);
    return temp;
}
