/* -------------------------------------------------------------------------
* SERVIÇO NACIONAL DE APRENDIZAGEM INDUSTRIAL - SENAI
* Curso: Técnico em Desenvolvimento de Sistemas
* UC: Internet das coisas - 2o Módulo
* Cidade: Cascavel - Pr
* Aluno: Samuel Henrique Wunderwald De Lima
* Prof.: Ana
*
* Descrição:
* Programa: Calculando a media com 2 pesos
* Data: 09/10/2026
* -------------------------------------------------------------------------
*/

#include <stdio.h>

int main() {

    //Declaração de variaveis
    double num1, num2, media;

    //Descrição do programa ao usuario
    printf ("---Média do aluno---\n");

    //Entrada de dados
    printf ("Digite a primeira nota: ");
    scanf ("%lf", &num1);

    printf ("Digite a segunda nota: ");
    scanf ("%lf", &num2);

    //Condição para deixar as 2 notas entre 0.0 e 10.0
    if (num1 <= 10 && num1 >= 0)
    {
        if (num2 <= 10 && num2 >= 0)
        {
            //Calculo da media em base dos produtos
            media = ((num1 * 3.5) + (num2 * 7.5)) / 11;
        }
    }
    
    //Saida de dados com o resultado final da media
    printf ("Média: %.4lf\n",media);
    return 0;
}