#include <stdio.h>

int fattoriale(int n) {
    printf("  livello %d: n vive a %p\n", n, (void*)&n);

    if (n <= 1) {
        return 1;
    }

    return n * fattoriale(n - 1);
}

int main() {
    int n = 4;
    printf("fattoriale(%d):\n", n);

    int ris = fattoriale(n);
    printf("Risultato: %d\n", ris);

    return 0;
}

/*
COMMENTO SULLA DIREZIONE DELLO STACK:
Osservando gli indirizzi esadecimali stampati a schermo, si nota che ogni nuovo
indirizzo è minore del precedente. Questo dimostra che,  nella maggior parte delle
architetture moderne, lo stack cresce verso l'alto in termini di allocazione
concettuale, ma numericamente decresce verso l'alto: gli indirizzi di memoria
vanno dall'alto verso il basso. Ogni chiamata di funzione aggiunge un  "frame"
sullo stack occupando memoria a indirizzi progressivamente inferiori.
*/
