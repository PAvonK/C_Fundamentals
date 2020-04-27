#include <stdio.h>
#include <string.h>
#include <cs50.h>

char a[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
char find = 'H';

int main(void)
{
    printf("Alphabet: %s\n", a);

    /* Finds first location of 'H' and then prints out
        the remaining string after the found characters */
    char *ptr = NULL;
    ptr = strchr(a, find);
    printf("ptr: %s\n", ptr);

    /* Finds index location of character in a string */
    int index = strchr(a, find)-a;
    printf("%d\n", index);
}
