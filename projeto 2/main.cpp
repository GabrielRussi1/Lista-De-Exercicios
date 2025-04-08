#include <stdio.h>

int main() {
    float numero, dobro;

    // Solicita ao usuário um número real
    printf("Digite um número: ");
    scanf("%f", &numero);

    // Calcula o dobro do número
    dobro = numero * 2;

    // resultado
    printf("O dobro de %.2f é %.2f\n", numero, dobro);

    return 0;
}
