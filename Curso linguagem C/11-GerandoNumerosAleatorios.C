#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <locale.h>
#include <time.h>


// Fun??o Principal do programa
int main ()
{

    // Para inserir acentos
    setlocale(LC_ALL, "");


    // Respons?vel por Alimentar o "rand"  de forma diferente
    srand((unsigned) time(NULL));
    /* O "srand" ? a fun??o randamica responsagem por gerar o meu n?mero; ela recebe como par?metro o "unsigned", que ? pra for?ar o programa a me dar n?meros POSITIVOS.
    E o "time" ? para que o programa pegue o n?mero aleat?rio do computador naquele exato momento, para ele pegar l? da minha mem?ria o que est? rodando
    exatamente no presente..
    */


    // Vari?vel que recebe o resto da divis?o do n?mero por 3 (aleat?rio de 0 a 2)
    int aleatorio1 = rand() % 3;


    // Vari?vel que recebe o resto da divis?o do n?mero por 5 (aleatorio de 1 a 5)
    int aleatorio2 = (rand() % 5) + 1;


    // Imprimime o valor
    printf("%d", aleatorio2);


    printf("\n\n");


    // Pausa o programa Ap?s a sua execu??o
    system("pause");
}
