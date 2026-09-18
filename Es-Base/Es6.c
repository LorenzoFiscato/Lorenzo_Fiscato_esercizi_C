#include <stdio.h>
#include <string.h>

int main() {

    char testo[100];
    int cont = 0;

    printf("Inserisci una stringa: ");
    fgets(testo, 100, stdin);
    testo[strcspn(testo, "\n")] = '\0';

    for (int i = 0; testo[i] != '\0'; i++)
        if (testo[i] == 'a' || testo[i] == 'e' || testo[i] == 'i' || testo[i] == 'o' || testo[i] == 'u')
            cont++;

    printf("Vocali trovate: %d\n", cont);

    return 0;
}