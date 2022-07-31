#include <stdio.h>
#include <stdlib.h>

int kare_bulma(int n)
{
    if(n == 1)
        return 1;
    else
        return (n*n+kare_bulma(n-1));
}
int main(void)
{
    int kare_sayisi;

    printf("Kaclik kare oldugunu yaziniz: ");
    scanf("%d", &kare_sayisi);

    int result = kare_bulma(kare_sayisi);

    printf("Toplam bulunan kare sayisi: %d", result);
}
