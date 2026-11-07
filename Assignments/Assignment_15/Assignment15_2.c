#include <stdio.h>
#include <stdlib.h>

#define True 1
#define False 0

typedef int BOOL;

BOOL ChkGreater(int iNo)
{
    if (iNo > 100)
    {
        return True;
    }
    else
    {
        return False;
    }
}

int main()
{
    int iValue = 0;
    BOOL iRet = False;

    printf("Enter Number : \n");
    scanf("%d", &iValue);

    iRet = ChkGreater(iValue);

    if (iRet == True)
    {
        printf("Greater");
    }
    else
    {
        printf("Smaller");
    }

    return EXIT_SUCCESS;
}