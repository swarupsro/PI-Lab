#include <stdio.h>
int main()
{
    int k=0, binary[1000], p, n;

    printf("Input Decimal: ");
    scanf("%d",&n);

    while(n>0){
        binary[k] = n%2;
        k++;
        n = n/2;
    }

    for(p=k-1; p>=0; p--)
    {
        printf("%d",binary[p]);
    }

    return 0;
}
