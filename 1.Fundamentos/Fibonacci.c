/* -------------------------------------------------------------------------
* SERVIÇO NACIONAL DE APRENDIZAGEM INDUSTRIAL - SENAI
* Curso: Técnico em Desenvolvimento de Sistemas
* UC: Internet das coisas - 2o Módulo
* Cidade: Cascavel - Pr
* Aluno: Samuel Henrique Wunderwald De Lima
* Prof.: Ana
*
* Descrição:
* Programa: Fibonacci
* Data: 14/10/2026
* -------------------------------------------------------------------------
*/
#include <stdio.h>

int main() {

    //Declaração de variaveis
    int a = 0, b = 1, i, num, c;

    //Usuario irá definir a quantidade de numeros que tera a sequencia
    printf ("Digite um numero inteiro: ");
    scanf ("%d", &num);

    //Estrutura de decisão
    if (num <= 0 || num == 1)
    {
        printf ("Digite apenas numeros acima de dois!");
    }

    //Diminuindo dois numeros da variavel num pois serve para melhor funcionamento
    num = num - 2;

    //Exibindo as duas primeiras posições fixas do fibonacci
    printf ("%d %d",a,b);

    //Inicio do laço for para exibição da sequencia escolhida pelo usuario
    for (i = 0; i < num; i++)
    {
        //Somando as variaveis A e B e atribuindo a varivavel C
        c = a + b; 

        //Exibindo o proximo valor
        printf (" %d",c); 

        //atualizando o valor
        a = b;
        b = c;

    }

    //Quebra de linha para melhor vizualição no terminal
    printf ("\n");
    return 0;
}