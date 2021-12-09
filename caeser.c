#include <stdio.h>
#include <cs50.h>
#include <ctype.h>
#include <stdlib.h>

void caesarcode(char *, int);
int main(int argc, string *argv[])
{
    // if and for used to validate key prompted by the user
    if (argc != 2)
    {
        printf("usage: ./ceasar key\n");
        return 1;
    }

    for (int i = 0; argv[1][i] != '\0'; i++)
    {
        if (isalpha(argv[1][i] != 0)
        {
            printf("usage; ./ceasar key\n");
            return 1;
        }
    }

    int key = atoi(argv[1]);

    char *plaintext = get_string("Enter text to encryprt: ");
    caesarcode (plaintext, key);
}
void caesarcode(char* c, int k)
{
    printf("ciphartext: ");
    for (int i = 0; c[i] != '\0'; i++)
    {
        // check if it's alphabetical
        if (isalpha(c[i]) != 0)
        {
           // check if it's uppercase
           if (isupper(c[i]) != 0)
           {
               printf("%c",((c[i] - 'A' + k) % 26) + 'A');
           }
           else
           {
                 printf("%c",((c[i] - 'a' + k) % 26) + 'a');
           }
       }
       else
       {
           printf("%C", c[i]);
       }
       printf("\n");
    }
}
