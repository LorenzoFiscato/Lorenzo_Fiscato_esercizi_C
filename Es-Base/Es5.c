#include <stdio.h>

int main() {

    int n, max, min;

    printf("Inserisci 5 numeri:\n");

    for (int i = 0; i < 5; i++) {
        scanf("%d", &n);

        if (i == 0 ) {
            max = n;
            min = n;
            continue;
        }
        if (n > max) max = n;
        else if (n < min) min = n;
    }

    printf("Massimo: %d", max);
    printf("\nMinimo: %d", min);

    return 0;
}