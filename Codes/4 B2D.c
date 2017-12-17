#include <stdio.h>
void main()
{
    int rem, n, decimal=0, base=1;
    printf("Input binary: ");

    scanf("%d", &n);

    while (n>0)
    {
        rem=n%10;
        decimal=decimal+rem *base;
        n=n/10;
        base=base*2;
   }
        printf("Decimal: %d\n",decimal);
}
