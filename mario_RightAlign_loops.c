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
    for (int i = 0; i < n; i++) // This line builds the columns along with the printf("\n") below
    {
        // Loop starts at n and reduces each time till 0
        for (int j = n - 1; j > i; j--) // This line starts building a row along with the susequent for statements

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
        printf("\n");
    }
} 
