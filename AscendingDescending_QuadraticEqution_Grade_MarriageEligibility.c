#include<stdio.h>

void Ascending_Descending(int,int,int);
void quadratic_equation(int,int,int);
void grade(int,int,int,int);
void marriage_eligibility(int,int);

void swap(int *a,int *b)
{
   int temp;
   temp=*a;
   *a=*b;
   *b=temp;
}

int main()
{
    /* code */
    int a,b,c;
    printf("Enter three numbers: ");
    scanf("%d %d %d",&a,&b,&c);
    Ascending_Descending(a, b, c);

    quadratic_equation(a,b,c);

    int m1,m2,m3,m4,r;
    printf("\nEnter roll number: ");
    scanf("%d",&r);
    printf("Enter marks in four subjects: ");
    scanf("%d %d %d %d",&m1, &m2, &m3, &m4);
    grade(m1,m2,m3,m4);
     
    int male_age,female_age;
    printf("Enter age for female and male: ");
    scanf("%d %d",&female_age,&male_age);
    marriage_eligibility(female_age,male_age);

    printf("\nBefore swapping %d %d",a,b);
    swap(&a,&b);
    printf("\nAfter swapping %d %d",a,b);

    printf("\n");
    return 0;
}

void Ascending_Descending(int a,int b,int c)
{
    if(a>b && a>c)
    {
        if (b>c)
        {
            printf("Ascending order is %d %d %d\n",c,b,a);
            printf("Descending order is %d %d %d",a,b,c);
        }
        else
        {
            printf("Ascending order is %d %d %d\n",b,c,a);
            printf("Descending order is %d %d %d",a,c,b);
        }
    }
    else if(b>a && b>c )
    {
        if(a>c)
        {
            printf("Ascending order is %d %d %d\n",c,a,b);
            printf("Descending order is %d %d %d",b,a,c);
        }
        else
        {
            printf("Ascending order is %d %d %d\n",a,c,b);
            printf("Descending order is %d %d %d",b,c,a);
        }    
    }
    else if(c>a && c>b)
    {
        if (a>b)
        {
            /* code */
            printf("Ascending order is %d %d %d\n",b,a,c);
            printf("Descending order is %d %d %d",c,a,b);
        }
         else
        {
            printf("Ascending order is %d %d %d\n",a,b,c);
            printf("Descending order is %d %d %d",c,b,a);
        }
    }
}

void quadratic_equation(int a,int b,int c)
{
    int x=b*b-4*a*c;
    int r1=(-b+x)/2*a;
    int r2=(-b-x)/2*a;

    printf("\nr1=%d r2=%d",r1,r2);

    if(x>0)
    {
        printf("\nroots are unequal ");
    }
    else if(x<0)
    {
        printf("\nroots are imaginary ");
    }
    else 
    {  
        printf("\nroots are same ");
    }
    
}

void grade(int m1,int m2,int m3,int m4)
{
    int total;
    float avrg;
    total=m1 + m2 + m3 + m4;
    avrg=total/4.0;

    if (avrg>=60)
    {
        printf("Grade A\n");
    }
    else if(avrg<=60 && avrg>=50)
    {
        printf("Grade B\n");
    }
    else if(avrg>=40 && avrg<=50)
    {
        printf("Grade C\n");
    }
    else
    {
        printf("Grade F\n");
    }
    
}

void marriage_eligibility(int female_age,int male_age)
{

    if(female_age > 18 && male_age > 21)
    {
        printf("Lady and man are eligible for marriage");
    }
    else if(female_age < 18  && male_age > 21)
    {
        printf("man is elisible for marriage but Lady is not eligible for marriage ");
    }
    else if(female_age > 18  && male_age < 21)
    {
        printf("lady is elisible for marriage but man is not eligible for marriage ");
    }
    else
    {
        printf("Both are not eligible for marriage");
    }
}

