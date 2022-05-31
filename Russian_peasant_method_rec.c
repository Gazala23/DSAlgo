#include<stdio.h>
int rus(int n,int m){
    int r,sum;
    if(n==0){
        return 0;
    }
    if(n%2==0){
        printf("%d\t%d\n",n,m);
        return rus(n/2,m*2);
    }
    else{
        printf("%d\t%d\n",n,m);
        sum=m+rus(n/2,m*2);
        return sum;
    }
}
int main(){
    int n, m;
    printf("Enter two numbers : ");
    scanf("%d%d",&n,&m);
    printf("product by russian peasant method is %d",rus(n,m));
    printf("\n");
    return 0;
}
