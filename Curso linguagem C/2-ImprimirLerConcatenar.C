#include <stdio.h> //Biblioteca de ler e de exibir, de entrada e de sa?da |input e output| de valores em tela - tipo perif?ricos de hardware.
#include <stdlib.h> //Biblioteca para realiza??o de opera??es matematicas, aloca??o de espa?o na mem?ria e convers?o de valores aleat?rios.
#include <locale.h> //Biblioteca para inser??o de acentos e caracteres especiais.

int main()  //
{
    setlocale(LC_ALL,"");//Este comando deve ser utilizado, obrigatoriamente, dentro da minha fun??o, quando utilizo a biblioteca "locale.h".
    printf("Ol? \n"); //"printf" = escreva em tela tal coisa.

    //Lendo n?meros inteiros
    int a = 5; //Passei o valor de a.
    int b = 5; //Passei o valor de b.
    printf("%d \n", a+b); //Disse para exibir em tela o valor de a+b.
    //\n serve para pular linha.

    printf("O valor de a ? = %d \n", a); //Disse para exibir em tela texto e n?meros.

    scanf("%d", &a); //Desejo alterar o valor de a em tempo real da execu??o do meu programa.
    printf("O valor de a mudou para %d \n", a); //Mandei exibir em tela, o novo valor de a.

    //Lendo n?meros quebrados
    float c = 5.50; //Passei o valor de a.
    float d = 5.20; //Passei o valor de b.
    printf("%f \n", c+d); //int ? para n?meros inteiros e float para n?meros quebrados, bem como o %d e o %f.

    //Lendo letras
    char e = 't';
    printf("O valor de e ? = %c \n", e);
    fflush(stdin);
    scanf("%c", &e);
    printf("o valor de e mudou para = %c \n", e);
}


