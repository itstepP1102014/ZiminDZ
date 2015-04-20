#include <stdio.h>
#include <stdlib.h>

int main()
{
    int sasha = 1000, vasia = 1000, resultSasha, seazon = 0;
    double sashaPercent = 0.06, vasiaPercent = 0.04, seazonSashaPercent, seazonVasiaPercent;
    resultSasha = sasha;
    if(vasia <= resultSasha)
    {
        do
        {
        seazonSashaPercent = sasha * sashaPercent;
        resultSasha += seazonSashaPercent;
        seazonVasiaPercent = vasia * vasiaPercent;
        vasia += seazonVasiaPercent;
        seazon++;
        printf("%2d quarter  Sasha balance = %.2f, Vasia balance = %.2f\n", seazon, (double) resultSasha, (double) vasia);
        }while(vasia <= resultSasha);
    }
    for(int j = 0; j < 3; ++j)
    {
        seazonSashaPercent = sasha * sashaPercent;
        resultSasha += seazonSashaPercent;
        seazonVasiaPercent = vasia * vasiaPercent;
        vasia += seazonVasiaPercent;
        seazon++;
        printf("%2d quarter  Sasha balance = %.2f, Vasia balance = %.2f\n", seazon,(double) resultSasha, (double) vasia);
    }
    return 0;
}
