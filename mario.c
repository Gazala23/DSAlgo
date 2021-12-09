#include  <cs50.h>
#include <stdio.h>

int main(void)
{
    // Get positive integer from user
    int h, m ;
    do
    {
        h = get_int("hight:");
    }
    while (h < 1 || h > 8);

      // Print out that many hashes and spaces
      for (int i = 1; i <= h; i++)
      {
        for (int j = 1; j <= h - i; j++)
        {
            printf(" ");
        }

        for (m = 1; m <= i; m++)
        {
            printf("#");

        }
        printf("\n");

    }
}
