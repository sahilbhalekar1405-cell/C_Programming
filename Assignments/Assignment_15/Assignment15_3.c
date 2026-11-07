#include <stdio.h>
#include <stdlib.h>

#define True 1
#define False 0

typedef int BOOL;

BOOL ChkEqual(int iNo1, int iNo2)
{
    if (iNo1 == iNo2)
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
    int iValue1 = 0, iValue2 = 0;
    BOOL iRet = False;

    printf("Enter Number : \n");
    scanf("%d", &iValue1);

    printf("Enter Number : \n");
    scanf("%d", &iValue2);

    iRet = ChkEqual(iValue1, iValue2);

    if (iRet == True)
    {
        printf("Equal");
    }
    else
    {
        printf("Not Equal");
    }

    return EXIT_SUCCESS;
}