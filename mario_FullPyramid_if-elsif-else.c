// do/while & if_elseif_else methods

#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int Height = get_int("Please enter a positive integer between 1 and 8?\n");
    if (Height == 1)
    {
        printf("#  #\n");
    }
    else if (Height == 2)
    {
        printf(" #  #\n");
        printf("##  ##\n");
    }
    else if (Height == 3)
    {
        printf("  #  #\n");
        printf(" ##  ##\n");
        printf("###  ###\n");
    }
    else if (Height == 4)
    {
        printf("   #  #\n");
        printf("  ##  ##\n");
        printf(" ###  ###\n");
        printf("####  ####\n");
    }
    else if (Height == 5)
    {
        printf("    #  #\n");
        printf("   ##  ##\n");
        printf("  ###  ###\n");
        printf(" ####  ####\n");
        printf("#####  #####\n");
    }
    else if (Height == 6)
    {
        printf("     #  #\n");
        printf("    ##  ##\n");
        printf("   ###  ###\n");
        printf("  ####  ####\n");
        printf(" #####  #####\n");
        printf("######  ######\n");
    }
    else if (Height == 7)
    {
        printf("      #  #\n");
        printf("     ##  ##\n");
        printf("    ###  ###\n");
        printf("   ####  ####\n");
        printf("  #####  #####\n");
        printf(" ######  ######\n");
        printf("#######  #######\n");
    }
    else if (Height == 8)
    {
        printf("       #  #\n");
        printf("      ##  ##\n");
        printf("     ###  ###\n");
        printf("    ####  ####\n");
        printf("   #####  #####\n");
        printf("  ######  ######\n");
        printf(" #######  #######\n");
        printf("########  ########\n");
    }
    else
    {
        false;
    }
}
