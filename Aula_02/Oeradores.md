# Operadores em C
Um símbolo que indica algum tipo de operação sobre uma ou mais variáveis.
Existem diversos deles, mas apenas alguns são os mais utilizados.

## Operadores aritméticos
Os principais nessa tabela, considere A=10 e B=20

Operador    | Descrição                 | Exemplo   | Resultado
------------|---------------------------|-----------|-----------
'+'         | soma                      | A + B     | 30
'-'         | subtração                 | A - B     | -10
'*'         | multiplicação             | A * B     | 200
'/'         | divisão                   | B / A     | 2
%           | resto da divisão inteira  | B % A     | 0
++          | incrementa variável       | A++       | A vale 11
--          | decrementa variável       | A--       | A vale 9

## Operadores relacionais

Operador    | Descrição         | Exemplo   | Resultado
------------|-------------------|-----------|----------
==          | igual             | A == B    | falso
!=          | diferente         | A != B    | verdade
'>'         | maior             | A > B     | falso
<           | menor             | A < B     | verdade
'>='        | maior ou igual    | A >= B    | falso
<=          | menor ou igual    | A <= B    | verdade

## Operadores lógicos

Operador    | Descrição | Exemplo
------------|-----------|---------
&&          | AND lógico| A && B
\|\|        | OR lógico | A \|\| B
!           | NOT lógico| !A

## Operadores de atribuição

Operador    | Descrição                                 | Exemplo   | Equivale a
------------|-------------------------------------------|-----------|-------------
=           | atribuição simples de valor a variável    | A = B + 17|
+=          | atribuição com soma                       | A += 3    | A = A +3
-=          | atribuição com subtração                  | A -= B -7 | A = A - (B - 7)
*=          | atribuição com produto                    | C *= A    | C = C * A
/=          | atribuição com divisão                    | C /= A    | C = C / A
%=          | atribuição com módulo                     | C %= A    | C = C % A

> Sempre bom lembrar de não confundir a atribuição **=** com o sinal de igualdade **==**. Uma atribuição sempre será verdadeira independente do sinal da variável.

## Operadores binários
Considere duas variáveis 8bit inteiras sem sinal:
A = 00010001 (17)
B = 01100011 (99)

Operador    | Descrição                                 | Exemplo   | Resultado
------------|-------------------------------------------|-----------|------------
&           | AND bit-a-bit                             | A & B     | 0000 0001 (1)
\|          | OR binário                                | A \| B    | 0111 0111 (115)
^           | XOR binário                               | A ^ B     | 0111 0010 (114)
~           | complemento de 1                          | ~A        | 1110 1110 (238)
<<          | desloca à esquerda N bits                 | A << 2    | 0100 0100 (68)
'>>'        | desloca à direita N bits                  | A >> 2    | 0000 0100 (4)
&=          | atribuição com AND binário                | C &= 2    | C = C & 2
\|=         | atribuição com OR binário                 | C \|= 2   | C = C \| 2
^=          | atribuição com XOR binário                | C ^= 2    | C = C ^ 2
<<=         | atribuição com deslocamento à esquerda    | C <<= 2   | C = C << 2
'>>'=       | atribuição com deslocamente à direita     | C >>= 2   | C = C >> 2