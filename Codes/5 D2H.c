// Decimal to Hexadecimal
#include <stdio.h>
void main()
{
    long dec, q, rem, i, j=0;
    char hexde[1000];

    printf("Input Decimal: ");
    scanf("%d",&dec);

    q=dec;

    while(q!=0)
    {
        rem = q%16;

            if(rem<10)
                hexde[j++] = 48+rem; //48 = 0
            else
                hexde[j++] = 55+rem; //55+10=65 (a)

            q = q / 16;
    }

    for(i=j; i>=0; i--)
    {
        printf("Hexadecimal: %c",hexde[i]);
    }
}
