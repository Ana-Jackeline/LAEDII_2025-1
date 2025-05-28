/*2. Potência (sem usar pow)
Implemente uma função int potencia(int base, int expoente) que calcule potências usando apenas multiplicações.*/

#include <stdio.h>

// Função para calcular potência usando multiplicações
int potencia(int base, int expoente) {
    int resultado = 1;

    for (int i = 0; i < expoente; i++) {
        resultado *= base;
    }

    return resultado;
}

int main() {
    int base, expoente;

    printf("Digite a base: ");
    scanf("%d", &base);
    printf("Digite o expoente (inteiro não-negativo): ");
    scanf("%d", &expoente);

    if (expoente < 0) {
        printf("Expoente negativo não suportado nesta função.\n");
    } else {
        int resultado = potencia(base, expoente);
        printf("%d elevado a %d é %d\n", base, expoente, resultado);
    }

    return 0;
}