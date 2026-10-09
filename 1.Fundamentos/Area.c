/* -------------------------------------------------------------------------
* SERVIÇO NACIONAL DE APRENDIZAGEM INDUSTRIAL - SENAI
* Curso: Técnico em Desenvolvimento de Sistemas
* UC: Internet das coisas - 2o Módulo
* Cidade: Cascavel - Pr
* Aluno: Samuel Henrique Wunderwald De Lima
* Prof.: Ana
*
* Descrição:
* Programa: Cálculo de área considerando π = 3.14159
* Data: 09/10/2026
* -------------------------------------------------------------------------
*/

#include <stdio.h>

int main() {

    //Declaração de variaveis
    float area, raio;
    float pi = 3.14159;

    //Descrição do programa ao usuario
    printf ("---Calculo de área---\n");
    printf ("Digite o valor do raio: ");
    scanf ("%f", &raio);

    //Formula para calcular a área
    area = pi * (raio * raio);

    printf ("Resultado da área: %.4f\n",area);
    return 0;
}

