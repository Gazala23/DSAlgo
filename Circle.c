#include<stdio.h>
int main (void)
{
    int r;
    printf("Enter the radius of a circle: ");
    scanf("%d", &r);
    float A = 3.14*r*r;
    float P = 2*3.14*r;
    printf("A = %f,P=%f\n", A, P);
    return 0;
}
