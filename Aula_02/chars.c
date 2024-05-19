#include <stdio.h>

int main()
{
    char c;

    c = getchar();      // lê um caractere de STDIN
    while (c != EOF)    // enquanto a entrada não termina
    {
        if (c == ' ')   // troca espaço por '-'
            c = '-';

        putchar (c);    // escreve o caractere em STDOUT

        c = getchar();  // lê o próximo caractere
    }
    return (0);
}