#include<stdio.h>

int leap_year(int y);

int main()
{
    int y,p;
    printf("Enter year in four digits : ");
    scanf("%d",&y);
   
    p = leap_year(y);
    printf("\n");
    return 0;
}

int leap_year(int y)
{
    if( (y%4==0 && y%100!=0) || y%400==0)
    {
        printf("Given year is leap year !");
        return 1;
    }
    printf("Given year is not leap year !");
    return 0;
    
}
    