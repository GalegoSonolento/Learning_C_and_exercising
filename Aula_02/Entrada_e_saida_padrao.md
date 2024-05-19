# Entrada e saída padrão

Funções básicas de entrada e saída do sistema dentro da liguagem C
**stdin** e **stdout**.

## A função printf
Função padrão da biblioteca *stdio.h* e sintaxe:
```c
int printf (formato, argumento, argumento, ...);
```

O retorno dessa função é o número de bits escritos na chamada.
Os argumentos definem o que será impresso pelo sistema.
Por exemplo, printando duas variáveis:
```c
printf ("i vale %d e j vale %d\n", i, j);
```
A saída será
```
i vale 10 e j vale -37
```

%d indica a escrita de decimal. Existe uma lista bem extensa de sinalizadores.
comando | significado
--------|------------
\n      | nova linha
\t 	    | tabulação
\b 	    | retorno
\“ 	    | aspas
\\\	    | barra
%% 	    | porcento %
%c 	    | caractere simples
%s 	    | string
%d ou %i| decimal
%u 	    | decimal sem sinal
%l 	    | decimal (long)
%ll 	| decimal (long long)
%Nd 	| decimal com N dígitos, com espaços à esquerda
%0Nd 	| decimal com N dígitos, com zeros à esquerda
%f 	    | real
%g 	    | real (double)
%e 	    | real (em notação científica)
%M.Nf 	| real com M dígitos, sendo N após a vírgula
%o 	    | octal
%x 	    | hexadecimal
%p 	    | ponteiro (endereço) 

## A função scanf
O contrário da função printf, ela lê os comandos de teclado (normalmente em terminal) e armazena alguma string em uma variável.
Por exemplo, armezena na variável **a**:
```c
scanf ("%d", &a);
```

Em um exemplo prático de uso:
```c
// Cálculo da média simples de dois valores
#include <stdio.h>

int main ()
{
    int a, b;
    float c;

    printf ("entre com o valor de a: ");
    scanf ("%d", &a);

    printf ("entre com o valor de b: ");
    scanf ("%d", &b);

    // cálculo da média simples
    c = (a + b) / 2.0 ;

    printf ("a = %d, b = %d\n", a, b);
    printf ("a media simples de a e b eh %f\n", c);

    return (0);
}
```

## Entrada e saída de caracteres
Algumas funções limitam para a leitura de caracteres específicos/solitários.
Exemplo:
```c
c = getchar () ;
```

Caso não existam mais valores para serem lidos, esse função devolve um **EOF** (End-of-Line)
Da mesma forma, **putchar** printa:
```c
putchar ('x');
```

Exemplo:
```c
#include <stdio.h>

int main()
{
    char c;

    c = getchar();
    while (c != EOF)
    {
        if (c == ' ')
            c = '-';

        putchar (c);

        c = getchar();
    }
    return (0);
}
```

## Entrada/Saída de strings
Essas funções são interessantes para entrada de char mas **não devem ser usadas**. Elas podem ocasionar em estouro de buffer e outros problemas de segurança.
Sintaxe:
```c
gets (char *s)

puts (char *s)
```

## Exercícios
1 - Ler um inteiro N e uma sequência de N inteiros, gerando na saída o valor de N, os valores máximo e mínimo observados (inteiros), a média (real) e o desvio padrão (real) dos N valores lidos.

2 - Imprimir a seguinte sequência de números, até N=10000:

    1     2     3     4     5     6     7     8
00001 00002 00003 00004 00005 00006 00007 00008
    9    10    11    12    13    14    15    16
00009 00010 00011 00012 00013 00014 00015 00016
...

3 - Ler um texto da entrada padrão e produzir o mesmo texto na saída padrão, mas com as letras convertidas em maiúsculas. Sugestão: usar a função getchar() para ler caracteres da entrada (até encontrar um EOF), a função putchar() para escrever caracteres na saída e uma estrutura switch (ou uma tabela) para converter os caracteres.
Sugestão: em C, caracteres são tratados como números inteiros; consulte uma tabela ASCII para ver seus valores respectivos.

4 - Escreva um programa que imprima as raízes quadradas e os logaritmos (base 10) de todos os números inteiros entre 1 e 1000. Os valores devem ser impressos com 4 casas decimais, da seguinte forma:

    1   1.0000  0.0000
    ...
    500  22.3606  2.6989
    ...
    999  31.6069  2.9999
    1000  31.6227  3.0000

