#include <stdio.h>

int main() {

    int n;
    printf("Inserisci un numero: ");
    scanf("%d", &n);

    printf("%d e' %s", n, (n % 2 == 0) ? "pari" : "dispari");

    return 0;
}