#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int n;
    string space = " ";
    do
    {
        n = get_int("Height: ");
    }
    while (n < 1 || n > 8);
    for (int i = 0; i < n; i++)
    {
        // Loop starts at n and reduces each time till 0
        for (int j = n - 1; j > i; j--)
        {
            // Prints space reducing each time by 1
            printf(" ");
        }
        // Loop starts at 0 and moves out for the diration
        for (int k = 0; k <= i; k++)
        {
            // Prints # at each point, increasing each turn
            printf("#");
        }
        // Adds two spaces after the right aligned pyramid
        printf("  ");
        // Adds # in increasing by 1 each time through the loop 
        for (int l = 0; l <= i; l++)
        {
            printf("#");
        }
        // Finishes the line
        printf("\n");
    }
} 
