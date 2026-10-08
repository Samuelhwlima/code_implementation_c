#include <stdio.h>

int main() {

    //Declaração de variaveis
    int num_soma1, num_soma2;
    float num_mult1, num_mult2;
    float num_div1, num_div2;

    //Usuario irá digitar 2 números para a soma
    printf("SOMA - Digite 2 números para a operação correspondente:\n");
    scanf ("%d", &num_soma1);
    scanf ("%d", &num_soma2);

    //Usuario irá digitar 2 números para a multiplicação
    printf("MULTIPLICAÇÃO - Digite 2 números para a operação correspondente:\n");
    scanf ("%f", &num_mult1);
    scanf ("%f", &num_mult2);

    //Usuario irá digitar 2 números para a divisão
    printf("DIVISÃO - Digite 2 números para a operação correspondente:\n");
    scanf ("%f", &num_div1);
    scanf ("%f", &num_div2);

    //Saida de dados, com as informações recebidas
    printf ("Resultado da soma:  %d\n", (num_soma1 + num_soma2));

    printf ("Resultado da multiplicação:  %.2f\n", (num_mult1 * num_mult2));

    printf ("Resultado da divisão: %.2f\n ",(num_div1 / num_div2));

    return 0;
}