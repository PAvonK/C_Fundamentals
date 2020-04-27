#include <stdio.h>
#include <string.h>
#include <cs50.h>
#include <ctype.h>

// declaration of lists
char upperCase[200];
char lowerCase[200];

int main(void)
{
    string s = get_string("Input text: ");

    // change case from input to upper
    strcpy(upperCase, s);
    for (int i = 0; i < strlen(upperCase); i++)
    {
        upperCase[i] = toupper(upperCase[i]);
    }
    printf("uC: %s\n", upperCase);

    // change case from input to lower
    strcpy(lowerCase, s);
    for (int i = 0; i < strlen(lowerCase); i++)
    {
        lowerCase[i] = tolower(lowerCase[i]);
    }
    printf("lC: %s\n", lowerCase);
}
// Final