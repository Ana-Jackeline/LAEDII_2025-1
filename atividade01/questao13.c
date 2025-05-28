/*13. Soma Diagonal Principal
Crie uma matriz 4x4 e calcule a soma da diagonal principal.*/

#include <stdio.h>

int main() {
    int matriz[4][4], soma = 0;

    printf("Digite os elementos da matriz 4x4:\n");
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            scanf("%d", &matriz[i][j]);
            if (i == j)
                soma += matriz[i][j];
        }
    }

    printf("Soma da diagonal principal: %d\n", soma);
    return 0;
}

