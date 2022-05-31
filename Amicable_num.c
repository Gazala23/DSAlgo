#include<stdio.h>

void Amicable_num(int p,int q,int a, int b);

int main()
{
    int p,q,a,b;
    printf("Enter any four numbers: ");
    scanf("%d %d %d %d",&p,&q,&a,&b);

    Amicable_num(p,q,a,b);
    
    printf("\n");
    return 0;
}

void Amicable_num(int p,int q,int a, int b)
{
    int k, i,j,sum1=0,sum2=0;
    for(k=a;k<=b;k++)
    {
        for(i=0;i<p;i++)
        {
            if(p%i==0)
            {
                printf("%d",i);
            }
        }
        sum2=sum2+i;
        for(j=0;j<q;j++)
        {
            if(q%j==0)
            { 
                printf("%d",j);
            }
        }
        sum2=sum2+j;
    }

    if(p==sum1 && q==sum2)
    {
        printf("Given numbers are amicable numbers! ");
    }
    else
    {
        printf("Given numbers are not amicable numbers! ");
    }
}
    