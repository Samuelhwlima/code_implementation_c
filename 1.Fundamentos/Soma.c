#include <stdio.h>

int main() {
    //Declaração de variaveis
    int a, b, x;

    //Entrada de dados do usuario
    printf ("Digite 2 números para soma: \n");
    scanf ("%d", &a);
    scanf ("%d", &b);

    //Processamento para soma
    x = a + b;

    //Saida de dados final
    printf ("Resultado da soma: %d",x);

    return 0;
}