#include <stdio.h>

int main() {
    float numero, metade;

    // Solicita ao usuário um número real
    printf("Digite um número real: ");
    scanf("%f", &numero);

    // Calcula a metade do número
    metade = numero / 2;

    // Exibe o resultado
    printf("A metade de %.2f é %.2f\n", numero, metade);

    return 0;
}
