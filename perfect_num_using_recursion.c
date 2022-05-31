// perfect or not using recursion in c.

#include<stdio.h>
int perfect_num(int n, int i);

int main(){
        int n;
        printf("Enter a number :");
        scanf("%d",&n);
        if(perfect_num(n, n/2) == n)
            printf("Given number is a perfect number.");
        else
            printf("Given number is not a perfect number.");
        printf("\n");
        return 0;
}
int perfect_num(int n, int i)
{
    if(i==1)     
        return 1;
    if(n%i==0)
        return i + perfect_num(n,i-1);
    else
        return perfect_num(n,i-1);
}