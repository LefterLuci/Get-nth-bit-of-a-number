#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int num, n, bit;

    printf("Enter a number:\n.");
    scanf("%d",&num);

    printf("Enter the number of the bit you want to check:\n.");
    scanf("%d",&n);

    bit=(num<<n)&1;

    printf("Bitul ales este %d", bit);
    return 0;
}
