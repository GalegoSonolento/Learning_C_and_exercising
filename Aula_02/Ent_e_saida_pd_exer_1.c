#include <stdio.h>
#include <math.h>

void solve()
{
    int N;
    
    printf("Digite um valor para o tamanho do array: \n");
    scanf("%d", &N);

    int arr [N];
    int max = 0;
    int min = 0;
    int soma = 0;
    float media = 0;
    float somatorio = 0;

    printf("Digite um valor para cada nova linha:\n");
    for (int i = 0; i < N; i++)
    {
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < N; i++)
    {
        if (i == 0)
        {
            max = arr[i];
            min = arr[i];
        }
        if (arr[i] > max)
        {
            max = arr[i];
        }
        if (arr[i] < min)
        {
            min = arr[i];
        }

        soma += arr[i];
    }
    
    media = soma/N;

    float somador = 0;
    for (int i = 0; i < N; i++)
    {
        float ret = arr[i] - media;
        if (ret < 0)
        {
            ret = ret * -1;
        }
        ret = pow(ret, 2);
        somador += ret;
    }
    somador = somador / N;
    float desvio_padrao = sqrt(somador);

    printf("A quantidade de números digitados foi (N): %d\n", N);
    printf("O valor máximo observado foi %d e o mínimo foi %d\n", max, min);
    printf("A média de todos os valores se dá por: %.2f\n", media);
    printf("O desvio padrão dos valores é: %.4f\n", desvio_padrao);

}

int main()
{
    solve();
    return 0;
}