/*
    Calcula a soma e a média de dois inteiros,
    escrevendo o resultado na saída padrão.
*/

#include <stdio.h>

int main ()
{
    int a, b, soma;
    float media;

    a = 10;
    b = 43;

    soma = a + b;
    media = soma / 2.0;

    printf("A soma de %d e %d vale %d\n", a, b, soma);
    printf("A media de %d e %d vale %f\n", a, b, media);

    return 0;
}