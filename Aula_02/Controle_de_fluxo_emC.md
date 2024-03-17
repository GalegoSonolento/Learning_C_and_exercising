## Comando do-while
```c
do
    command;
while (expression);
```
ou ainda
```c
do
{
    command1;
    command2;
    ...
}
while (expression;)
```
Por exemeplo:
```c
i = 100;
do
{
    printf("i vale %d\n", i);
    i--;
}
while i;
```

## Comando for
```c
for (initialization; conditions; updates)
    command;
```
Ou ainda
```c
for (initialization; conditions; updates)
{
    command1;
    command2;
    ...
}
```
Por exemplo: laço de controle de 0 a 99:
```c
for (i = 0; i < 100; i++)
    printf("i vale %d", i);
```
- É importante observar que um for pode equivaler a um simples while
```c
initializations;
while (conditions)
{
    command1;
    command2;
    ...
    updates;
}
```
Dessa forma, o laço acima também poderia ser escrito da seguinte forma:
```c
i = 0;
while (i < 100)
{
    printf("i vale %d", i);
    i++;
}
```
Ainda existe o **for** como laço infinito. Não é necessariamente muito usado por existirem outras opções mais baratas, mas vai saber.
```c
for (;;)
{
}
```

# Desvios
## Comando break
Esse comando é utilizado apenas dentro de blocos **switch**, **do**, **while** ou **for**.
Ele vai simplesmente pular todas as linhas depois dele até o fim do bloco atual.
```c
for (;;)
{
    printf("Aceita? (s/n) ");
    resp = getchar();
    if (resp == 's' || resp == 'n')
        break;
    printf("\n");
}
// o break salta para cá
```

## Comando Continue
Esse comando é usado dentro de laços **for**, **do** e **while**.
Simplesmente interrompe a iteração atual e pula para a próxima, diferentemente do **break** que simplesmente mata o bloco atual.
```c
int i;

for (i = -10; i < 10; i++)
{
    if (i == 0)
        continue; // pula para a próxima iteração do laço

    printf("%f\n", 15.0/i);
    // ...
}
```

## Comando goto
Salta a execução de código para um bloco marcado por uma *label*
```c
goto PARTE2;

// ... (qualquer código)

PARTE2:
i = 0;
// ...
```
***Sempre que possível __evite__ o comando goto, a menos que seja absolutamente necessário. Esse comando pode retornar valores complexos ou ainda gerar problemas de execução e segurança.***

## Comando return
Esse comando simplesmente dá o retorno e uma função chamada. Normalmente na função *main* o **return** é zero, mas poderia ser potencialmetne qualquer valor.
Pode ser colocado em qualquer lugar da função, não necessariamente ao final.
```c
// compara dois inteiros "a" e "b", retornando:
// +1 se a > b
// -1 se a < b
//  0 se a = b

int comapara (int a, b)
{
    if (a > b) return 1;
    if (a < b) return -1;
    return 0;   // a == b
}
```

## Comando exit
Comando provido pela biblioteca **stdlib.h**. Ele permite o encerramento do programa e de quebra entrega um código de saída da aplicação. O status é devolvido (ao shell que iniciou a aplicação)
```c
exit (0);
```