#include <stdio.h>
int main()
{
    int base = 1, dec = 0, r, n;

    printf("Input Ocatal: ");
    scanf("%d",&n);

        while(n>0)
        {
            r = n%10;
            dec = dec + r * base;

            n = n/10;
            base = base * 8;
        }


        printf("Decimal: %d", dec);

        return 0;
}

