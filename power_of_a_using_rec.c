#include<stdio.h>
int power_of_a(int a,int b){
    if(b==1)
        return a;
    return (a*power_of_a(a,b-1));
}
int main(){
    int a,b;
    printf("Enter two numbers : ");
    scanf("%d%d",&a,&b);
    printf("%d to the power %d is %d",a, b ,power_of_a(a,b));
    printf("\n");
    return 0;
}