#include <stdio.h>

int main() {
    // Declaração das notas e pesos
    float n1, n2, n3, p1, p2, p3, media;

    // Solicita as três notas e seus respectivos pesos
    printf("Digite tres notas e seus respectivos pesos: ");
    scanf("%f %f %f %f %f %f", &n1, &n2, &n3, &p1, &p2, &p3);

    // Cálculo da média ponderada:
    // soma(nota * peso) dividido pela soma dos pesos
    media = (n1*p1 + n2*p2 + n3*p3) / (p1 + p2 + p3);

    // Exibe resultado com duas casas decimais
    printf("Media ponderada: %.2f\n", media);

    return 0;
}