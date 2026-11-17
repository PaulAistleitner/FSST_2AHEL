#include <stdio.h>

int power(int Basis, int Exponent)
{
    if (Exponent == 0)
    {
        return 1;
    }
    else
    {
        int Ergebniss = Basis;
        for(;Exponent - 1 > 0; Exponent--)
        {
            Ergebniss = Ergebniss*Basis;
        }
        return Ergebniss;
    }
}

int main()
{
    int z = power(0,5);
    printf("%d\n" ,power(2, 3) == 8);
    printf("%d\n" ,power(2, 0) == 1);
    printf("%d\n" ,power(0, 3) == 0);
}