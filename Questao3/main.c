/*3. Inverso de Número
Escreva uma função que inverte os dígitos de um número (ex: 1234 → 4321).*/

#include <stdio.h>

// Função que inverte os dígitos de um número
int inverterNumero(int n) {
    int invertido = 0;

    while (n > 0) {
        int digito = n % 10;
        invertido = invertido * 10 + digito;
        n /= 10;
    }

    return invertido;
}

int main() {
    int numero;

    printf("Digite um número: ");
    scanf("%d", &numero);

    if (numero < 0) {
        printf("Número inválido.\n");
    } else {
        int resultado = inverterNumero(numero);
        printf("Número invertido: %d\n", resultado);
    }

    return 0;
}
