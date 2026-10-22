#include <stdio.h>
#include <stdlib.h>

void CalculateBonus(float fSalary, int iYears)
{
    if (fSalary < 0 || iYears < 0)
    {
        printf("Invalid input");
        return;
    }

    float fBonus = 0.0f;

    if (iYears > 10)
    {
        fBonus = fSalary * 0.15;
    }
    else if (iYears >= 5 && iYears <= 10)
    {
        fBonus = fSalary * 0.10;
    }
    else
    {
        fBonus = fSalary * 0.05;
    }

    printf("Bonus on your salary is : %.2f\n", fBonus);
}

int main()
{
    float fSalary = 0.0f;
    int iYears = 0;

    printf("Enter salary and years of service : ");
    scanf("%f %d", &fSalary, &iYears);

    CalculateBonus(fSalary, iYears);

    return EXIT_SUCCESS;
}