#include <stdio.h>

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

    printf("A quantidade de números digitados foi (N): %d\n", N);
    printf("O valor máximo observado foi %d e o mínimo foi %d\n", max, min);
    printf("A média de todos os valores se dá por: %.2f\n", media);

}

int main()
{
    solve();
    return 0;
}