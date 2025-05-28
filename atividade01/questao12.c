/*12. Verificador de Palíndromo
Dada uma string (array de char), diga se ela é um palíndromo (ex: “arara”, “radar”).*/

#include <stdio.h>
#include <string.h>
#include <ctype.h>

int ehPalindromo(char str[]) {
    int i = 0;
    int j = strlen(str) - 1;

    while (i < j) {
        while (!isalnum(str[i]) && i < j) i++;
        while (!isalnum(str[j]) && j > i) j--;
        if (tolower(str[i]) != tolower(str[j]))
            return 0;
        i++;
        j--;
    }

    return 1;
}

int main() {
    char palavra[100];
    printf("Digite uma palavra ou frase: ");
    scanf(" %[^\n]", palavra);

    if (ehPalindromo(palavra))
        printf("É um palíndromo.\n");
    else
        printf("Não é um palíndromo.\n");

    return 0;
}
