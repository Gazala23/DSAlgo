#include<stdio.h>

int main()
{
    int n,i,count;
    printf("Enter prime numbers from 1 to 99:");
    for(n=1;n<=99;n++)
    { 
        count=0;
        for( i=1;i<=n;i++)
        {     
            if(n%i==0)
            { 
                count++;
            }
        }
        if(count==2)
        { 
            printf("%3d",n);
        }
    }
    printf("\n");
    return 0;
}