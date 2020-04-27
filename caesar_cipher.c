#include <stdio.h>
#include <cs50.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

int main(int argc, string argv[])
{
    int totTally = 0;
    int digiTally = 0;
    int keyValue;

    // Does first check to ensure the Command line argument is single value
    if (argc != 2)
    {
        printf("Usage: ./ceasar key\n");
        return 1;
    }
    else
    {
        // For loop to run through passed in command line argument
        for (int i = 0; i < strlen(argv[1]); i++)
        {
            // tally of all digits in argv
            totTally++;
            // counts each actual digit
            if (isdigit(argv[1][i]))
            {
                digiTally++;
            }
            // checks if not a digit then breaks out directs user to enter properly
            else
            {
                printf("Usage: ./ceasar key\n");
                return 1;
            }
        }
    }
    // compares total tally with tally of digits for success
    if (totTally == digiTally)
    {
        // converts approved digits to integers
        keyValue = atoi(argv[1]);
        printf("Success\n%i\n", keyValue);
        string text = get_string("plaintext: ");

        for (int i = 0; i < strlen(text); i++)
        {
            // converts lower case alphabetical nummbers to keyValue shifted value
            if (text[i] >= 'a' && text[i] <= 'z')
            {
                text[i] = (text[i] - 97 + keyValue) % 26 + 97;
            }
            // converts upper case alphabetical nummbers to keyValue shifted value
            else if (text[i] >= 'A' && text[i] <= 'Z')
            {
                text[i] = (text[i] - 65 + keyValue) % 26 + 65;
            }
            // leaves non alphabecial characters the same
            else
            {
                text[i] = text[i];
            }
        }
        // print cipher text value
        printf("ciphertext: %s\n", text);
    }
}
// Finished