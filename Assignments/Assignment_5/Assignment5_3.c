#include <stdio.h>
#include <stdlib.h>

void CalculateDiscount(float fAmount)
{
    float fDiscount = 0.0f;
    float fFinalAmount = 0.0f;

    if (fAmount < 0)
    {
        printf("Invalid Input\n");
        return;
    }

    if (fAmount < 1000)
    {
        fDiscount = fAmount * 0;
    }
    else if (fAmount >= 1000 && fAmount < 5000)
    {
        fDiscount = fAmount * 0.1;
    }
    else
    {
        fDiscount = fAmount * 0.2;
    }

    fFinalAmount = fAmount - fDiscount;

    printf("Total payable amount : %f\n", fFinalAmount);
}

int main()
{
    float fAmount = 0.0f;

    printf("Enter purchase amount : \n");
    scanf("%f", &fAmount);

    CalculateDiscount(fAmount);

    return EXIT_SUCCESS;
}