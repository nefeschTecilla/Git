/*
Crie um algoritmo que imprima os n?meros pares de 10 a 20 usando While, Do_While ou For.
*/

#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>
#include <locale.h>
#include <time.h>


// Fun??o Principal do programa
int main ()
{

    // Inserir acentua??o
    setlocale(LC_ALL, "");


    // Definindo vari?veis
    int contadora;
    int pontoInicial = 10;


    // Imprimindo os n?meros Pares utilizando While
    while(pontoInicial <= 20)
    {
        printf("%d\n", pontoInicial);
        pontoInicial = pontoInicial + 2;
    }


    printf("\n\n");


    // Imprimindo os n?meros Pares utilizando Do_While
    do
    {
        pontoInicial = pontoInicial - 2;
        printf("%d\n", pontoInicial);
    }
    while(pontoInicial > 10);
    // Uma coisa muito importante sobre o Do_While ? que quando a condi??o N?O for atendida ele n?o continua a repeti??o!


    printf("\n\n");


    // Imprimindo os n?meros Pares utilizando For
    for(contadora = 10; contadora <= 20; contadora++)
    {
        if(contadora%2 == 0)
        {
            printf("%d\n", contadora);
        }
    }


    printf("\n\n");


    // Pausa o programa Ap?s executar
    system("pause");
}

/*
O que s?o n?meros Pares?
R: S?o n?meros que quando divididos por 2, tem o Resto igual a 0!
*/
