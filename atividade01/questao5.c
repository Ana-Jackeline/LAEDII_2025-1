/*5. Interseção de Vetores
Dado dois vetores de inteiros, mostre os elementos comuns entre eles.*/

#include <stdio.h>

int main() {
    int A[5], B[5];
    int i, j;

    printf("Digite 5 elementos do vetor A:\n");
    for (i = 0; i < 5; i++) {
        scanf("%d", &A[i]);
    }

    printf("Digite 5 elementos do vetor B:\n");
    for (i = 0; i < 5; i++) {
        scanf("%d", &B[i]);
    }

    printf("Elementos comuns entre A e B:\n");
    for (i = 0; i < 5; i++) {
        for (j = 0; j < 5; j++) {
            if (A[i] == B[j]) {
                printf("%d ", A[i]);
                break; // Evita repetição se o elemento aparecer mais de uma vez
            }
        }
    }

    printf("\n");
    return 0;
}
