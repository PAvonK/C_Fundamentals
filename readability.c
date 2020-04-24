#include <stdio.h>
#include <cs50.h>
#include <string.h>

// Prototypes of helper functions
int letter_count(string s);
int word_count(string s);
int sentence_count(string s);
float cl_index(float letters, float words, float sentences);

int main(void)
{
    string s = get_string("text: ");
    
    // Calling in helper functions
    float letters = letter_count(s);
    float words = word_count(s);
    float sentences = sentence_count(s);
    float gradeLevel = cl_index(letters, words, sentences);

    // Chooses output print based off levels of grades
    if (gradeLevel < 1)
    {
        printf("Before Grade 1\n");
    }
    else if (gradeLevel >= 16)
    {
        printf("Grade 16+\n");
    }
    else
    {
        printf("Grade %.0f\n", gradeLevel);
    }
}

// Helper function to count characters in a string
int letter_count(string s)
{
    int tally = 0;
    for (int i = 0; i < strlen(s); i++)
    {
        if ((s[i] >= 'a' && s[i] <= 'z') || (s[i] >= 'A' && s[i] <= 'Z'))
        {
            tally++;
        }
    }
    return tally;
}

// Helper function to count words in a string
int word_count(string s)
{
    int tally = 0;
    for (int i = 0; i < strlen(s); i++)
    {
        // Counts words by counting the space following the words
        if (s[i] == ' ')
        {
            tally++;
        }
    }
    // Final tally to add the last word which is not followd by a space
    tally++;
    return tally;
}

// Helper function to count sentences in the inputed text
int sentence_count(string s)
{
    int tally = 0;
    for (int i = 0; i < strlen(s); i++)
    {
        // Determines sentences by tallying the following puctuation ('.' or '!' or '?')
        if (s[i] == '.' || s[i] == '!' || s[i] == '?')
        {
            tally++;
        }
    }
    return tally;
}

/*
Helper function that calculates the Coleman-Liau index of a text which calculates the reading
grade level of that text. Calculation is:
(index = 0.0588 * L - 0.296 * s - 15.8 where L)
where L is average letters per 100 and S is average Sentences per 100
*/
float cl_index(float letters, float words, float sentences)
{
    float l = (100 / words) * letters;
    float s = (100 / words) * sentences;
    return (l * 0.0588) - (s * 0.296)  - 15.8;
}