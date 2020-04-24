#include <stdio.h>
#include <string.h>

int main(void)
{
    // Example of text to be shifted
    char s[] = "This is a test of correct application, including numbers 50!!";
    printf("original text: %s\n", s);

    // Example of key value for shifting. Shifts alphabet by 10 places in this case
    int key = 10;
    printf("key: %i\n", key);

    for (int i = 0; i < strlen(s); i++)
    {
        if (s[i] >= 'a' && s[i] <= 'z')
        {
            // Using ASCii = (old number - value of same case 'a' + shifted value % answer
            // by 26 for remainder added back to a of same case
            // This line performs on lower case letters
            s[i] = (s[i] - 97 + key) %26 + 97;
        }
        else if (s[i] >= 'A' && s[i] <= 'Z')
        {
            // Using ASCii = (old number - value of same case 'a' + shifted value % answer
            // by 26 for remainder added back to a of same case
            // This line performs on lower case letters
            s[i] = (s[i] - 65 + key) %26 + 65;
        }
        else
        {
            // Leaves values the same if not a - z either upper or lower case.
            s[i] = s[i];
        }
    }
    printf("shifted text: %s\n", s);
}
