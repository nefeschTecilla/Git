#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

//Fun??o Principal do programa
int main()
{
    setlocale(LC_ALL,"");

    // Definindo vari?veis
    int    a = 1, opcao = 2;
    float b = 2.5;
    char c = 'x';


    // Condicional Simples
    if(a == 5)
    {
        printf("\n A vari?vel a = 5!");
    }
    if(b == 2.5)
    {
        printf("\n A vari?vel b = 2.5!");
    }
    if(c == 'x')
    {
        printf("\n A vari?vel c = letra x!");
    }


    // N?mero ?mpar ou Par
    if(a%2 == 1)
    {
        printf("\n A vari?vel a ? ?mpar!");
    }
    else
    {
        printf("\n A vari?vel a ? Par!");
    }


    // Condicional Composta
    if(opcao == 1)
    {
        printf("\n Op??o = 1!");
    }
    else if(opcao == 2)
    {
        printf("\n Op??o = 2!");
    }
    else
    {
        printf("\n Op??o n?o ? igual a 1 e nem 2!");
    }


    printf("\n");


    // Pausa o programa ap?s executar
    system("pause");


    /*
     Vari?vel do tipo Char (letras ?nicas):

     char d = 'y';
     printf("O valor da vari?vel d ? Texto, d = %c \n\n", 'y');
     fflush(stdin);
     scanf("%c", &d);
     printf("\nO valor de d mudou para %c \n\n", d);

     IMPORTANTE - Sobre o comando fflush(stdin), ele significa limpeza de Buffer, ou seja, limpeza de arquivos tempor?rios alocados na mem?ria.
     No C, quando n?s lemos um valor, antes dele ir para a vari?vel, ele passa por um lugarzinho chamado Buffer, que ? um espa?o de mem?ria tempor?rio.
     Ele vem primeiro para o Buffer, e depois ele vai l? para a minha vari?vel... Ent?o pode acontecer, em momentos que n?s j? utilizamos o Buffer anteriormente,
     de ele conter lixo. Logo, antes de eu ler um valor para Char ? sempre bom que eu limpe o Buffer com a Fun??o fflush.
    */
}
