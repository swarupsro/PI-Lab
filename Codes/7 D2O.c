// Decimal to Octal
#include <stdio.h>
int main()
{
    long int num;
    int octalNum[100], i=1, j;

    printf("Input Decimal: ");
    scanf("%ld", &num);

    while(num>0)
    {
        octalNum[i++] = num%8;
        num = num/8;
    }

    printf("Octal= ");

        for(j=i-1; j>0; j--)
        {
            printf("Octal: %d",octalNum[j]);
        }

    return 0;
}
