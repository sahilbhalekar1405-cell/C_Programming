#include <stdio.h>
#include <stdlib.h>

typedef int BOOL;

#define TRUE 1
#define FALSE 0

BOOL CheckVowel(char CValue)
{
    if (CValue == 'a' || CValue == 'e' || CValue == 'o' || CValue == 'i' || CValue == 'u' || CValue == 'A' || CValue == 'E' || CValue == 'O' || CValue == 'I' || CValue == 'U')
    {
        return TRUE;
    }
    else
    {
        return FALSE;
    }
}

int main()
{
    char cValue = '\0';
    BOOL bRet = FALSE;

    printf("Enter charater : \n");
    scanf("%ch", &cValue);

    bRet = CheckVowel(cValue);

    if (bRet == TRUE)
    {
        printf("It is vowel");
    }
    else
    {
        printf("It is not vowel");
    }

    return EXIT_SUCCESS;
}