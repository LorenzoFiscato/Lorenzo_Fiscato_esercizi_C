#include <stdio.h>

float somma(float a, float b) {
    return a + b;
}

float sottrazione(float a, float b) {
    return a - b;
}

float moltiplicazione(float a, float b) {
    return a * b;
}

float divisione(float a, float b) {
    return a / b;
}

int main() {
    float num1, num2;
    char operatore;

    printf("Primo numero: ");
    scanf("%f", &num1);

    printf("Operatore: ");
    scanf(" %c", &operatore);

    printf("Secondo numero: ");
    scanf("%f", &num2);

    switch(operatore) {
        case '+':
            printf("Risultato: %.2f\n", somma(num1, num2));
            break;
        case '-':
            printf("Risultato: %.2f\n", sottrazione(num1, num2));
            break;
        case '*':
            printf("Risultato: %.2f\n", moltiplicazione(num1, num2));
            break;
        case '/':
            if(num2 == 0) {
                printf("Errore: divisione per zero.\n");
            } else {
                printf("Risultato: %.2f\n", divisione(num1, num2));
            }
            break;
        default:
            printf("Errore: operatore non valido.\n");
    }

    return 0;
}
