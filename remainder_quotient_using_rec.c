#include<stdio.h>
int  rem(int n ,int divisor){
    if(n==0)
        return 0;
    return (n-divisor*(n/divisor));
}
int Division(long int n, long int divisor){
   if(n<divisor)
    return 0;
   return 1 + Division(n-divisor, divisor);
}
int main(){
    long int n,divisor;
    printf("Enter th reet Numbers:");
    scanf("%ld%ld",&n,&divisor);
    printf("Division of Two Number Using Recursion is:%d\n",Division(n,divisor));
    printf("remender of Two Number Using Recursion is:%d",rem(n,divisor));
    printf("\n");
    return 0;
}