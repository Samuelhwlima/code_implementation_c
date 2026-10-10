/* -------------------------------------------------------------------------
* SERVIÇO NACIONAL DE APRENDIZAGEM INDUSTRIAL - SENAI
* Curso: Técnico em Desenvolvimento de Sistemas
* UC: Internet das coisas - 2o Módulo
* Cidade: Cascavel - Pr
* Aluno: Samuel Henrique Wunderwald De Lima
* Prof.: Ana
*
* Descrição:
* Programa: Calculando o quadrante baseado na posição X e Y
* Data: 09/10/2026
* -------------------------------------------------------------------------
*/

#include <stdio.h>

int main() {

    //Declaração de variveis
    int x, y;
    printf("Digite a coordenada x: ");
    scanf ("%d", &x);

    printf("Digite a coordenada y: ");
    scanf ("%d", &y);

    //Estrtura de decisão para exibir o quadrante
    if (x > 0 && y > 0)
    {
        printf ("Quadrante 1°\n");
    }
        else if (x < 0 && y > 0)
        {
            printf ("Quadrante 2°\n");
        }
            else if (x < 0 && y < 0)
            {
                printf ("Quadrante 3°\n");
            }
                else if (x > 0 && y < 0)
                {
                    printf ("Quadrante 4°\n");
                }
    return 0;
}