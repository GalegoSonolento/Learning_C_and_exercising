# Tipos de dados
A linguagem C é fortemente tipada, o que significa que as variáveis precisam da defnição do tipo que operam.
Via de regra a tipagem das variáveis é fixa, mas existem formas de alterar (como com a operação *type casting*)

## Principais tipos:
* Tipos escalares
    - Tipos aritméticos
        * Inteiros
        * Reais
        * Complexos (C99)
    - Ponteiros
* Tipos não-escalares
    - Arranjos (vetores e matrizes)
    - Estruturas
    - Uniões

# Tipos inteiros
Os tamanhos dos tipos seguem a lógica de uma casa binária, 0-255.
Os reais tamnhos e como eles são gerenciados pelo sistema depende bastante do arquivo **limits.h**, o qual define os limites **INT_MIN**, **LONG_MAX**, etc. No Linux é possível encontrá-lo em **/usr/include/limits.h**.
Como todas as execuções precisam ser na forma padrão C99, esse arquivo contém os parâmetros para diferentes arquiteturas de sistemas operacionais. (O pessoal cai adicionando arquiteturas novas com o tempo).
Encontre mais informações aqui: https://en.wikipedia.org/wiki/C_data_types
Os tipos são basicamente:
* char
* unsigned char
* signed char
* short (ou signed short)
* unsigned short
* int (ou signed int)
* unsigned int
* long (ou signed long)
* unsigned long
* long long (ou signed long long)
* unsigned long long
* '*' e & (endereços) 

# Tipos reais
A única diferença dos inteiros para esses é que eles detém pontos flutuantes.
Eles são basicamente:
* float
* double
* long double

# Tipo booleano
A especificação C ANSI original não trouxe o tipo booleano consigo declaradamente. Ao invés disso tínhamos apenas o booleano lógico.
Todavia, na C99 um tipo booleano (**bool**) foi adicionado pela biblioteca **stdbool.h**

# O tipo void
Essa palavra reservada **void** indica valor ou variável desconhecido. Esso conceito é de que algo é ou aponta para nada, para o vazio indescritível da memória feita pela criação humana.