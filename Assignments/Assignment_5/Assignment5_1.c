#include <stdio.h>
#include <stdlib.h>

void CheckElectricityBill(int iNo)
{
    float fBill = 0.0f;

    if (iNo < 0)
    {
        printf("Invalid input");
        return;
    }

    if (iNo <= 100)
    {
        fBill = iNo * 5;
    }
    else if (iNo <= 200)
    {
        fBill = 100 * 5 + (iNo - 100) * 7;
    }
    else
    {
        fBill = 100 * 5 + (100) * 7 + (iNo - 200) * 10;
    }

    printf("The eLectricity bill is : %2f\n", fBill);
}

int main()
{
    int iValue = 0;

    printf("Enter units : ");
    scanf("%d", &iValue);

    CheckElectricityBill(iValue);

    return EXIT_SUCCESS;
}