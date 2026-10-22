#include <stdio.h>
#include <stdlib.h>

void CheckMultipleDivisibility(char cValue)
{
    if ((cValue >= 65) && (cValue <= 90))
    {
        printf("Uppercase\n");
    }
    else if ((cValue >= 97) && (cValue <= 122))
    {
        printf("Lowercase\n");
    }
    else if (cValue >= '0' && cValue <= '9')
    {
        printf("Digit\n");
    }
    else
    {
        printf("Special Character\n");
    }
}

int main()
{
    char cValue = '\0';

    printf("Enter character : ");
    scanf("%c ", &cValue);

    CheckMultipleDivisibility(cValue);

    return EXIT_SUCCESS;
}