#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int numeroSecreto, palpite, tentativas = 0;

    
    srand(time(NULL));
    numeroSecreto = rand() % 500 + 1;

    printf("Tente adivinhar o numero entre 1 e 500!\n");

    do {
        printf("Digite seu palpite: ");
        scanf("%d", &palpite);
        tentativas++;

        if (palpite < numeroSecreto) {
            printf("Muito baixo!\n");
        } else if (palpite > numeroSecreto) {
            printf("Muito alto!\n");
        } else {
            printf("Parabens! Voce acertou em %d tentativas!\n", tentativas);

            if (tentativas >= 1 && tentativas <= 3) {
                printf("\\o/\n");
            } else if (tentativas >= 4 && tentativas <= 6) {
                printf(":-D\n");
            } else if (tentativas >= 7 && tentativas <= 10) {
                printf(":-)\n");
            } else {
                printf(":-\\\n");
            }
        }
    } while (palpite != numeroSecreto);

    return 0;
}
