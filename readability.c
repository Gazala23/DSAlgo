#include <ctype.h>
#include <cs50.h>
#include <stdio.h>
#include <math.h>
#include <string.h>

int main(void)
{
    string t = get_string("text: ");

    // declaration of variables
    int letter = 0;
    int sentence = 0;
    int word = 1;

    for (int i = 0, n = strlen(t);  i < n; i++)
    {

        // count letter
        if (isalpha(t[i]))
        {
            letter++;
        }
        // count sentence
        if (t[i] == '!' || t[i] == '.' || t[i] == '?')
        {
            sentence++;
        }
        // count word
        if (isspace(t[i]))
        {
            word++;
        }
    }

    float L = ((float)letter / word) * 100;
    float S = ((float)sentence / word) * 100;

    int index = round(0.0588 * L - 0.296 * S - 15.8);
    if (index < 16 && index >= 0)
    {
        printf("Grade %d\n", index);
    }
    else if (index >= 16)
    {
        printf("Grade 16+\n");
    }
    else
    {
        printf("Before Grade 1\n");
    }
}
