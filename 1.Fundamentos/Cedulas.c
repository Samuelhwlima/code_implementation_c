/* -------------------------------------------------------------------------
* SERVIÇO NACIONAL DE APRENDIZAGEM INDUSTRIAL - SENAI
* Curso: Técnico em Desenvolvimento de Sistemas
* UC: Internet das coisas - 2o Módulo
* Cidade: Cascavel - Pr
* Aluno: Samuel Henrique Wunderwald De Lima
* Prof.: Ana
*
* Descrição:
* Programa: Cedulas
* Data: 15/10/2026
* -------------------------------------------------------------------------
*/
#include <stdio.h>

int main() {

    int resultado, valor;

    //Usuario irá digitar o valor total
    printf ("Digite o valor total: ");
    scanf("%d", &valor);

    //Variavel que usamos para decompor as cedulas irá receber o valor total
    resultado = valor; 

    // Notas de 100
    printf("%d Notas de R$ 100,00\n", resultado / 100);
    resultado = resultado % 100;

    // Notas de 50
    printf("%d Notas de R$ 50,00\n", resultado / 50);
    resultado = resultado % 50;

    // Notas de 20
    printf ("%d Notas de R$ 20,00\n", resultado / 20);
    resultado = resultado % 20;

    // Notas de 10
    printf ("%d Notas de R$ 10,00\n", resultado / 10);
    resultado = resultado % 10;

    // Notas de 5
    printf ("%d Notas de R$ 5,00\n", resultado / 5);
    resultado = resultado % 5;

    // Notas de 2
    printf ("%d Notas de R$ 2,00\n", resultado / 2);
    resultado = resultado % 2;

    // Moedas de 1
    printf ("%d Moedas de R$ 1,00\n", resultado / 1);

    return 0;
}