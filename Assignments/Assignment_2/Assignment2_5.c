#include <stdio.h>
#include <stdlib.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL CheckEven(int iNo)
{
    if ((iNo % 2) == 0)
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
    int iValue = 0, bRet = FALSE;

    printf("Enter number : \n");
    scanf("%d", &iValue);

    bRet = CheckEven(iValue);

    if (bRet == TRUE)
    {
        printf("Number is even\n");
    }
    else
    {
        printf("Number is odd\n");
    }

    return EXIT_SUCCESS;
}