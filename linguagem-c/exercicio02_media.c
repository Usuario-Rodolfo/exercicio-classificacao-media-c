#include <stdio.h>

int main() {
    // Variáveis para armazenar as três notas e a média
    float n1, n2, n3, media;

    // Solicita as notas ao usuário
    printf("Insira as tres notas: ");
    scanf("%f %f %f", &n1, &n2, &n3);

    // Calcula a média simples das três notas
    media = (n1 + n2 + n3) / 3.0f;

    // Classificação do aluno conforme a média calculada
    if (media < 5)
        printf("Media: %.2f - Reprovado\n", media);
    else if (media < 7)
        printf("Media: %.2f - Recuperacao\n", media);
    else
        printf("Media: %.2f - Aprovado\n", media);

    return 0;
}
