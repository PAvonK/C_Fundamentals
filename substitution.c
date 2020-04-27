#include <stdio.h>
#include <string.h>
#include <cs50.h>
#include <ctype.h>

int alphcount;
int totTally;
int alphTally;
char upperCaseAlphabet[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
char alphabet[] = "abcdefghijklmnopqrstuvwxyz";
char upperCaseKey[27];
char key[27];

int main(int argc, string argv[])
{
    if (argc != 2)
    {
        printf("Only one value must be entered.\n");
        return 1;
    }
    else if (strlen(argv[1]) != 26)
    {
        printf("Key must contain 26 characters.\n");
        return 1;
    }
    else
    {
        for (int i = 0; i < strlen(argv[1]); i++)
        {
            totTally++;
            if ((argv[1][i] >= 'a' && argv[1][i] <= 'z') || (argv[1][i] >= 'A' && argv[1][i] <= 'Z'))
            {
                alphTally++;
            }
            else
            {
                printf("Key must only contain characters in the alphabet\n");
                return 1;
            }
        }
        /* Nested for loop to count the number of individual characters, 
        if amounts are more than 26 there are duplicates */
        for (int i = 0; i < strlen(argv[1]); i++)
        {
            for (int j = 0; j < strlen(argv[1]); j++)
            {
                if (argv[1][j] == argv[1][i])
                {
                    alphcount ++;
                    printf("count: %i\n", alphcount);
                }
            }
        }
        if (alphTally == totTally && alphcount == 26)
        {
            printf("Sucess\n");


            // Copy command line argument to upperCase Key
            strcpy(upperCaseKey, argv[1]);

            // Change case from input to upper
            for (int i = 0; i < strlen(upperCaseKey); i++)
            {
                upperCaseKey[i] = toupper(upperCaseKey[i]);
            }

            // Copy command line argument to key
            strcpy(key, argv[1]);

            // Loop to change case from key to lower
            for (int i = 0; i < strlen(key); i++)
            {
                key[i] = tolower(key[i]);
            }

            /* Concatenates the upper case alphabet to the lower case alphabet
            making one single long string containing both */
            strcat(alphabet, upperCaseAlphabet);
            /* Concatenates the upper case key to the lower case key
            making one single long string containing both */
            strcat(key, upperCaseKey);

            // Asks user to input text which needs to be ciphered
            string ps = get_string("plaintext: ");

            // Loops to apply Cipher to characters
            for (int i = 0; i < strlen(ps); i++)
            {
                for (int j = 0; j < strlen(alphabet); j++)
                {
                    if (ps[i] == alphabet[j])
                    {
                        // Locates the aphabetical index of ith element of plaintext phrase
                        int index = strchr(alphabet, ps[i]) - alphabet;
                        // changes ith element of plaintext to key equivalent of alphabet
                        ps[i] = key[index];
                        break;
                    }
                }
            }
            // outputs ciphered text back to the user
            printf("ciphertext: %s\n", ps);
            return 0;
        }
        else
        {
            printf("key must only contain one of each letters in the alphabet.\n");
            return 1;
        }
    }
}

// Final - Full Score

