#include <stdio.h>
#include <math.h>

// Esse código precisou da seguinte command line para funcionar:
// gcc -o Seq_d_int Seq_d_int.c -lm
// O "-lm" foi necessário para estabelecer o link com a biblioteca math.h. 
// Ainda não entendi completamente o motivo/razão da biblioteca não funcionar sozinha, 
// mas é isso que conserta a situação.

int main ()
{
    int qtd;
    int digit;
    int max;
    int min;
    float media;
    float soma;
    double desvio_padrao;
    double somatorio;

    printf("Escreva a quantidade de valores a serem escritos: ");
    scanf("%d", &qtd);
    int lista_numeros[qtd];

    for (int i = 0; i < qtd; i++)
    {
        printf("Escreva aqui o valor: ");
        scanf("%d", &digit);
        soma += digit;
        lista_numeros[i] = digit;

        if (i == 0)
        {
            max = digit;
            min = digit;
        }
        
        if (digit > max)
            max = digit;
        if (digit < min)
            min = digit;
    }

    media = soma / qtd;

    for (int i = 0; i < qtd; i++)
    {
        somatorio += pow (lista_numeros[i] - (double) media, 2);
    }
    double intermediario = somatorio / (double) qtd;
    desvio_padrao = sqrt(intermediario);

    printf("O valor máximo digitado foi %d\n", max);
    printf("O valor mínimo digitado foi %d\n", min);
    printf("A média dos valores é %.2f\n", media);
    printf("O desvio padrão (real) de toda a população de números é %.2f\n", desvio_padrao);

    return (0);
}