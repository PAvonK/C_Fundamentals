#include <stdio.h>
#include <string.h>
#include <cs50.h>

char a[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
char k[] = "JTREKYAVOGDXPSNCUIZLFBMWHQ"; // key for testing
char pt[100] = "HELPING"; // plaintext for testing

int main(void)
{
    printf("Alphabet: %s\n", a);
    printf("Key: %s\n", k);
    printf("plaintext: %s\n", pt);

    /* Nested for loop disigned to compare plaintext
        to alphabet in order to find the index */
    for (int i = 0; i < strlen(pt); i++)
    {
        for (int j = 0; j < strlen(a); j++)
        {
            if (pt[i] == a[j])
            {
                // variable index contains the index address of the array
                int index = strchr(a, pt[i])- a;
                // replace plaintext letter with element position of key
                pt[i] = k[index];
                break;
            }
        }
    }
    printf("Ciphertext: %s\n", pt);
}