#include <stdio.h>

int main()
{
    long long int num = 239809320265259;
    long int factor1 = 2;
    long int factor2;

    while (num % factor1)
    {
        if (factor1 <= num)
        {
            factor1++;
        }
        else {
            return (-1);
        }
    }

    factor2 = num / factor1;
    printf("%lld = %ld * %ld\n", num, factor2, factor1);
    return (0);
}
