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
    for (int i = 0; i < n; i++) // line build the columns
    {
        for (int j = 0; j <= i; j++) // Line builds the rows
        {
            printf("#");
        }
        printf("\n");
    }
}   
