#include <stdio.h>
#include <string.h>

int main () {

    char testo[100];

    printf("Inserisci una stringa: ");
    fgets(testo, 100, stdin);
    testo[strcspn(testo, "\n")] = '\0';
    int lunghezza = strlen(testo);

    printf("Stringa invertita: ");

    for (int i = lunghezza - 1; i >= 0; i--) printf("%c", testo[i]);

    return 0;
}