#include<stdio.h>
void integer_in_words(int n);

int main()
{
    int n;
    printf("Enter any number : ");
    scanf("%d",&n);
    integer_in_words(n);
    printf("\n");
    return 0;
}

void integer_in_words(int n)
{
    if(n==0)
        return;

    integer_in_words(n/10);

    switch (n%10)
    {

        /* constant-expression */
        case 0: printf("zero "); break; 
        case 1: printf("one "); break;
        case 2: printf("two "); break;
        case 3: printf("three "); break;
        case 4: printf("four "); break;
        case 5: printf("five "); break;
        case 6: printf("six "); break;
        case 7: printf("seven "); break;
        case 8: printf("eight "); break;
        case 9: printf("nine "); break;
    }
}