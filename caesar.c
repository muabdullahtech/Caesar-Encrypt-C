#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>


int main(int argc, string argv[])
{
    // checks for the total number of input
    if (argc != 2)
    {
        printf("Usage: ./caesar key\n");
        return 1;
    }

    // stores the value of key in CLA to k
    int k = atoi(argv[1]);

    // gets the text
    string plaintext = get_string("Plaintext: ");
    printf("Ciphertext: ");


    // converts the text
    for (int j = 0; j < strlen(plaintext); j++)
    {
        if (isupper(plaintext[j]))
        {
            printf("%c", (plaintext[j] - 65 + k) % 26 + 65);
        }

        else if (islower(plaintext[j]))
        {
            printf("%c", (plaintext[j] - 97 + k) % 26 + 97);
        }

        else
        {
            printf("%c", plaintext[j]);
        }
    }

    printf("\n");
}