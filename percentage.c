#include<stdio.h>
int main (void)
{
    float p, marks; 
    int totle_marks;
    printf("Sum of marks of five subjects: ");
    scanf("%f", &marks);
    totle_marks = 500;
    p = marks/500 * 100;
    printf("%f\n", p);
    return 0;
}