#include <stdio.h>
int main() {
    int sayi, ters = 0;

    printf("Sayi gir: ");
    scanf("%d", &sayi);

    while (sayi != 0) {
        ters = ters * 10 + (sayi % 10);
        sayi = sayi / 10;
    }

    printf("Tersi: %d", ters);
    return 0;
}
