#include <cs50.h>
#include <stdio.h>
#include <math.h>

int main(void)
{
    // prompt the user for an amount of change
    float dollars;
    do
    {
        // use the largest coins possible keeping track
        dollars = get_float("changed owed:");
    }
    while (dollars < 0);
    int cents = round(dollars * 100);

    int coins = 0;

    while (cents >= 25)
    {
        // quarter*25
        int quarters = cents / 25;

        cents = cents - 25;
        coins++;

    }

    while (cents >= 10)
    {
        // dime*10
        int dimes = cents / 10;

        cents = cents - 10;
        coins++;

    }

    while (cents >= 5)
    {
        // nickel*5
        int nickels = cents / 5;

        cents = cents - 5;
        coins++;

    }

    while (cents >= 1)
    {
        // penny*1
        int pennies = cents / 1;

        cents = cents - 1;
        coins++;

    }
    // print the number of coins
    printf("%i\n", coins);

}
