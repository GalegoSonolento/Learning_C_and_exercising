#include <stdio.h>

int main ()
{
    int qtd;
    int digit;
    int max;
    int min;
    float media;
    float soma;
    
    printf("Escreva a quantidade de valores a serem escritos: ");
    scanf("%d", &qtd);

    for (int i = 0; i < qtd; i++)
    {
        printf("Escreva aqui o valor: ");
        scanf("%d", &digit);
        soma += digit;

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

    printf("O valor máximo digitado foi %d\n", max);
    printf("O valor mínimo digitado foi %d\n", min);
    printf("A média dos valores é %f\n", media);
    // Ainda preciso calcular o desvio padrão? https://pt.khanacademy.org/math/statistics-probability/summarizing-quantitative-data/variance-standard-deviation-population/a/calculating-standard-deviation-step-by-step

    return (0);
}