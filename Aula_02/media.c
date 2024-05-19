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