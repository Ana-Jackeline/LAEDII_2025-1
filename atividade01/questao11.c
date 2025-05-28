/*11. Busca Binária
Implemente busca binária em um vetor ordenado.*/

#include <stdio.h>

int buscaBinaria(int v[], int tam, int chave) {
    int ini = 0, fim = tam - 1;

    while (ini <= fim) {
        int meio = (ini + fim) / 2;
        if (v[meio] == chave)
            return meio;
        else if (chave < v[meio])
            fim = meio - 1;
        else
            ini = meio + 1;
    }

    return -1; // Não encontrado
}

int main() {
    int vetor[] = {2, 4, 6, 8, 10, 12, 14};
    int chave;
    int tam = sizeof(vetor) / sizeof(vetor[0]);

    printf("Digite o número para buscar: ");
    scanf("%d", &chave);

    int pos = buscaBinaria(vetor, tam, chave);

    if (pos != -1)
        printf("Encontrado na posição %d\n", pos);
    else
        printf("Número não encontrado.\n");

    return 0;
}

