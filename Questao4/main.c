/*4. Frequência de Números
Leia 10 números inteiros e mostre quantas vezes cada número distinto aparece.*/

#include <stdio.h>

int main() {
    int numeros[10], i, j, cont;

    printf("Digite 10 números inteiros:\n");
    for (i = 0; i < 10; i++) {
        scanf("%d", &numeros[i]);
    }

    printf("\nFrequência de cada número aparece:\n");
    for (i = 0; i < 10; i++) {
        cont = 1;
        int repetido = 0;

        for (j = 0; j < i; j++) {
            if (numeros[j] == numeros[i]) {
                repetido = 1;
                break;
            }
        }

        if (!repetido) {
            for (j = i + 1; j < 10; j++) {
                if (numeros[j] == numeros[i]) {
                    cont++;
                }
            }
            printf("%d aparece %d vez(es)\n", numeros[i], cont);
        }
    }

    return 0;
}
