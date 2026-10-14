#include <stdio.h>

int main() {

    int atual, valor;

    printf ("Digite o valor total: ");
    scanf("%d", &valor);
    atual = valor; 

    // Notas de 100
    printf("%d Notas de R$ 100,00\n", atual / 100);
    atual = atual % 100;

    // Notas de 50
    printf("%d Notas de R$ 50,00\n", atual / 50);
    atual = atual % 50;
    return 0;
}