#include <stdio.h>
#include <stdlib.h>

#define True 1
#define False 0

typedef int BOOL;

BOOL ChkZero(int iNo)
{
    int iCount = 0;

    while (iNo != 0)
    {
        iCount = (iNo % 10);

        if (iCount == 0)
        {
            return True;
        }

        iNo = (iNo / 10);
    }

    return False;
}

int main()
{
    int iValue = 0;
    BOOL bRet = False;

    printf("Enter number : \n");
    scanf("%d", &iValue);

    bRet = ChkZero(iValue);

    if (bRet == True)
    {
        printf("It contains zero");
    }
    else
    {
        printf("It not contains any zero");
    }

    return EXIT_SUCCESS;
}