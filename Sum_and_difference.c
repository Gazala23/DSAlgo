#include<stdio.h>
int main (void)
{
    int x, y, p, q;
    printf(" print two numbers: ");
    scanf("%i,%i", &x, &y);
    p = x - y;
    q = x + y;
    if(x>y)
    {
        printf("Deffirence = %i\n", p);  
    }
    else(x<y);
    {
        printf("Sum = %i\n", q);  
    }
    return 0;
}