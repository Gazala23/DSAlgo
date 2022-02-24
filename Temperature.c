#include<stdio.h>
int main (void)
{
    /*to convert the celsius in fahrenheit*/
    int celsius;
    printf("Enter temprature in celsius: ");
    scanf("%d", &celsius);
    float F = (9/5.0 * celsius) + 32;
    printf("Temprature in fahrenheit = %f\n", F);
    return 0;
}