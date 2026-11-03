#include <stdio.h>
#include <stdlib.h>

#define PI 3.14

double CalculateArea(float fRadius)
{
    double dArea = 0.0;

    if (fRadius < 0)
    {
        printf("Invalid Input\n");
    }

    dArea = PI * fRadius * fRadius;

    return dArea;
}

int main()
{
    float fValue = 0.0f;
    double dRet = 0.0;

    printf("Enter Radius : \n");
    scanf("%f", &fValue);

    dRet = CalculateArea(fValue);

    printf("Area of circls is : %lf\n", dRet);

    return EXIT_SUCCESS;
}