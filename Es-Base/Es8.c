#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main () {

    srand (time (NULL));
    const int min = 1, max = 100;
    int tentativi = 7, risposta;
    int num_random = rand () % (max - min + 1) + min;

    printf("Ho pensato a un numero da %d a %d. Hai %d tentativi\n", min, max, tentativi );

    for (int i = 1; i <= tentativi; i++) {
        printf("tentativo %d: ", i);
        scanf("%d", &risposta);

        if (risposta == num_random) {
            printf("ESATTO! Trovato in %d tentativi\n", i);
            break;
        }

        if (risposta < num_random) {
            printf("Troppo basso\n");
            continue;
        }
        printf("Troppo alto\n");
    }

    return 0;
}

