#include <stdio.h>

int main()
{
    int sPrice, discountP;
    scanf("%d %d", &discountP, &sPrice);
    float totalPrice = sPrice / ((100.0 - discountP) / 100.0);
    printf("%0.2f", totalPrice);
    return 0;
}