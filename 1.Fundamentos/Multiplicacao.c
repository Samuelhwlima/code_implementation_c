/* -------------------------------------------------------------------------
* SERVIÇO NACIONAL DE APRENDIZAGEM INDUSTRIAL - SENAI
* Curso: Técnico em Desenvolvimento de Sistemas
* UC: Internet das coisas - 2o Módulo
* Cidade: Cascavel - Pr
* Aluno: Samuel Henrique Wunderwald De Lima
* Prof.: Ana
*
* Descrição:
* Programa: Calculando o produto de multiplicação
* Data: 09/10/2026
* -------------------------------------------------------------------------
*/

#include <stdio.h>

int main() {

    //Declaração de variaveis
    float num1, num2, prod;

    //Descrição do programa ao usuario
    printf("---Cálculo de multiplicação---\n");

    //Entrada de dados
    printf ("Digite dois números: \n");
    scanf ("%f", &num1);
    scanf ("%f", &num2);

    //Formula para calcular o produto
    prod = num1 * num2;

    //Saida de dados com o resultado do produto
    printf ("Resultado do produto: %.2f\n",prod);

    return 0;
}