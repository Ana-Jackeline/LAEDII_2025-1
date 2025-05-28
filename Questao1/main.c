/*1.Números Primos em Intervalo
Escreva uma função bool ehPrimo(int n) e use-a para listar todos os primos entre dois números dados pelo usuário*/

#include <stdio.h>
#include <stdbool.h>

// Função que verifica se um número é primo
bool ehPrimo(int n) {
    if (n < 2) return false;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0)
            return false;
    }
    return true;
}

int main() {
    int inicio, fim;

    printf("Digite o numero inicial do intervalo: ");
    scanf("%d", &inicio);
    printf("Digite o numero final do intervalo: ");
    scanf("%d", &fim);

    printf("Numeros primos entre %d e %d:\n", inicio, fim);
    for (int i = inicio; i <= fim; i++) {
        if (ehPrimo(i)) {
            printf("%d ", i);
        }
    }

    printf("\n");
    return 0;
}
