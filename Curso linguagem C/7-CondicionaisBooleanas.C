#include <stdlib.h>
#include <stdio.h>
#include <locale.h>
#include <stdbool.h> // Utiliar esta biblioteca todas as vezes que eu quiser usar dado l?gico


// Fun??o Principal do programa
int main ()
{


    //setlocale(LC_ALL, "Portuguese_Brasil");
    setlocale(LC_ALL, "");


    // Definindo vari?veis
    bool a = true, b = false;


    /*
    IMPORTANTE: Se atentar a regra de que o programa s? entra/executa um bloco de "if", quando determinada condicional ? VERDADEIRA!
    Tecnicamente, l? dentro do computador sempre que eu tenho uma condi??o ele resulta para mim "0" ou "1", "sim" ou "n?o", "verdadeiro" ou "falso", quando ele ? verdadeiro ele sempre entra, quando ? falso ele vai pro pr?ximo bloco ou ent?o ele fecha o c?diigo se n?o encontrar nenhuma verdade.
    */


    // Se "a" for verdadeiro
    // Nesse caso, "a" ? verdadeiro, pois na declara??o da minha vari?vel eu disse que ele ? "== true".
    if(a)
    {
        printf("\n'a' ? verdadeiro!");
    }


    // Comparando o "b"
    if(b)
    {
        printf("\n'b' ? verdadeiro!");
    }
    else
    {
        printf("\n'b ? falso!'");
    }


    // Comparando uma falsidade
    if(!b)
    {
        printf("\n'b' ? falso!");
    }

    printf("\n\n");

    // Pausando o programa ap?s ele rodar
    system ("pause");
}
