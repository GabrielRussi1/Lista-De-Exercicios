#include <stdio.h>

int main() {
    float distancia, tempo, velocidade_media;

    // Solicita ao usuário a distância percorrida, complicado essa
    printf("Digite a distância percorrida (em km): ");
    scanf("%f", &distancia);

    // Solicita ao usuário o tempo gasto
    printf("Digite o tempo gasto (em horas): ");
    scanf("%f", &tempo);

    // Calcula a velocidade média
    velocidade_media = distancia / tempo;

    // resultado
    printf("A velocidade média é %.2f km/h\n", velocidade_media);

    return 0;
}
