#include<stdio.h>
int main (void)
{
    int x, y;
    printf("Enter a number: ");
    scanf("%d", &x);
    y = x%3;
    printf("y = %d/n", y);
    return 0;
}