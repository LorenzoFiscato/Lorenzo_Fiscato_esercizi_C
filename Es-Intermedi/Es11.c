#include <stdio.h>

int main() {
    int numero;
    int esito;

    printf("Inserisci un numero (1-100): ");

    while (1) {
        esito = scanf("%d", &numero);

        if (esito != 1) {
            fprintf(stderr, "  -> input non valido, riprova: ");
            while (getchar() != '\n');
            continue;
        }

        if (numero < 1 || numero > 100) {
            fprintf(stderr, "  -> fuori range, riprova: ");
            continue;
        }

        break;
    }

    printf("Valore accettato: %d\n", numero);

    return 0;
}
