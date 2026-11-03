#include <stdio.h>
#include <stdlib.h>

double Farhenite(float fTemp)
{
    float fAns = 0.0f;

    fAns = (fTemp - 32) * (5.0 / 9.0);

    return fAns;
}

int main()
{
    float fValue = 0.0f;
    double dRet = 0.0;

    printf("Enter temp in Farhenite : \n");
    scanf("%f", &fValue);

    dRet = Farhenite(fValue);

    printf("Temperature in celcius is : %lf\n", dRet);

    return EXIT_SUCCESS;
}