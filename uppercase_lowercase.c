#include<stdio.h>

void uppercase_lowercase(char ch);

int main()
{
    char ch;
    printf("Enter any alphabet character : ");
    scanf("%c",&ch);

    uppercase_lowercase(ch);
    printf("\n");    
    return 0;
}

void uppercase_lowercase(char ch)
{
    if(ch>=97 && ch<=122)
    {
        ch=ch-32;
        printf(" lowercase to uppercase %c",ch);
    }
    else
    {
        printf("%c uppercase  as before",ch);
    }
}