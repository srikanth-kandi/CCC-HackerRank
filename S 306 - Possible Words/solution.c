#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void printWords(char *digits, char *output, int index, int outputIndex)
{
    if (digits[index] == '\0')
    {
        output[outputIndex] = '\0';
        printf("%s\n", output);
        return;
    }

    // Taking one digit at a time
    int digit = digits[index] - '0';
    output[outputIndex] = digit + 'A' - 1;
    printWords(digits, output, index + 1, outputIndex + 1);

    // Taking two digits at a time
    if (digits[index + 1] != '\0')
    {
        int twoDigits = digit * 10 + (digits[index + 1] - '0');
        if (twoDigits <= 26)
        {
            output[outputIndex] = twoDigits + 'A' - 1;
            printWords(digits, output, index + 2, outputIndex + 1);
        }
    }
}

void generateWords(char *digits)
{
    int len = strlen(digits);
    char *output = (char *)malloc((len + 1) * sizeof(char));

    printWords(digits, output, 0, 0);

    free(output);
}

int main()
{
    char digits[1000000];
    scanf("%s", digits);

    generateWords(digits);

    return 0;
}
