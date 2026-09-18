#include <stdio.h>

int main() {

    int n, numero, tot = 0;

    printf("Quanti numeri?: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        printf("Numero %d:", i);
        scanf("%d", &numero);
        tot += numero;
    }

    printf("\nSomma: %d", tot);
    printf("\nMedia: %.2f", (float)tot / n);

    return 0;
}