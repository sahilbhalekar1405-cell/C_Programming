#include <stdio.h>
#include <stdlib.h>

void DisplayConvert(char CValue)
{
    if (CValue >= 97 && CValue <= 122)
    {
        printf("%c", CValue - 32);
    }
    else if (CValue >= 65 && CValue <= 90)
    {
        printf("%c", CValue + 32);
    }
}

int main()
{
    char cValue = '\0';

    printf("Enter character : \n");
    scanf("%c", &cValue);

    DisplayConvert(cValue);

    return EXIT_SUCCESS;
}