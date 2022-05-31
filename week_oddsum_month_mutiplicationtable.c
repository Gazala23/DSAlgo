#include<stdio.h>

int odd_sum(int);
void integer(double);
int multiplication_table(int);
void month_print(int );
void week(int);
void negative_odd();

int main()
{
    printf("Enter a number:");
    scanf("%d",&n);
    int p = odd_sum(n);
    printf("sum of odd numbers=%d\n",sum);

    double k;
    printf("Enter a number:");
    scanf("%lf",&k);
    integer(double);

    int count, product, n;
    printf("Enter a number: ");
    scanf("%d",&n);
    int q = multiplication_table(n);
    printf("%d*%d=%d\n",n,count,product);


    int n;
    printf("Enter a number from 1 to 12: ");
    scanf("%d",&n);
    month_print(n);

    int n;
    printf("Enter a number:");
    scanf("%d",&n);
    week(n);
   
    return 0;
}

// print the sum of odd numbers from i to n.
int odd_sum(int n)
{

    int sum=0;

    for(int i=1;i<=n;i+=2)
    {
        sum+=i;
    }
    return sum;
}

// print a given number is positive ,negative or zero.
void integer(double k)
{
    if(k>0)
    {
        printf("Given number is positive!\n");
    }
    else if(k<0)
    {
        printf("Given number is negetive!\n");
    }
    else
    {
        printf("Given number is zero!\n");
    }
}

// print multiplication table of a given number.
int multiplication_table(int n)
{
    for(int count=1;count<=10;count++)
    {
        int product=n*count;
       
    }
    return product;
}

// print a given number is positive, negative odd or negative even.  
}
 // print name of months.
void month_print(int n)
{  
    switch(n)
    {
        case 1:
        printf("January\n");
        break;

        case 2:
        printf("February\n");
        break;

        case 3:
        printf("March\n");
        break;

        case 4:
        printf("April\n");
        break;

        case 5:
        printf("May\n");
        break;

        case 6:
        printf("June\n");
        break;

        case 7:
        printf("July\n");
        break;

        case 8:
        printf("August\n");
        break;

        case 9:
        printf("September\n");
        break;

        case 10:
        printf("October\n");
        break;

        case 11:
        printf("November\n");
        break;

        case 12:
        printf("December\n");
        break;

        default:
        printf("invalid number\n");
    }
}

// print name of weeks.
void week(int n)
{
    switch(n)
    {
        case 2:
        case 3:
        case 4:
        case 5:
        case 6:
            printf("weekday.\n");
            break;

        case 1:
        case 7:
            printf("day is weekend.\n");
            break;
       
        default:
            printf("invalid number.\n");
    }
}












