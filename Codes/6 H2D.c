// Hexadecimal to Decimal
#include <stdio.h>
void main()
{
    long dec=0, base=1, ch, i=0, j, hex[100];

    printf("Input Hexadecimal: ");
        while((ch=getchar()) != '\n')
        {
            if((ch>47 && ch<58) || (ch>64 && ch<71))
            hex[i++] = ch;
        }

        for(j=i-1; j>=0; j--)
        {
            if(hex[j] > 57)
                dec += (hex[j]-55) * base;
            else
                dec += (hex[j]-48) * base;

            base = base * 16;
        }

        printf("Decimal: %d",dec);
}
