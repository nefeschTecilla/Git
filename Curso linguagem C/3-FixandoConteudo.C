
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL,"");
    printf("\n\nFIXANDO O CONTE?DO\n\n");
    printf("Retorno errado na fun??o - se for um programa .C, minha fun??o main pode ser do tipo void, ou seja, sem retorno ou int, retornando um valor num?rico.");
    printf("\nMas se for um programa ponto CPP, ou seja C plus plus, a fun??o main n?o pode ser vazia, precisa ser do tipo int, que ? o caso aqui com o Code::Blocks.\n\n");
    printf("A Biblioteca #include <stdio.h> serve para: LER e EXIBIR valores em tela. Valores entrada e sa?da.");
    printf("\nD? pra fazer uma associa??o bem bacana da letra I e da letra O do stdio com input e Output. E tamb?m pra facilitar, com perif?ricos de hardware.\n\n");
    printf("A Biblioteca #include <stdlib.h> serve para: realizarmos opera??es matem?ticas, alocarmos espa?o na mem?ria e tamb?m, fazermos a convers?o de valores aleat?rios.\n\n");
    printf("J? a Biblioteca #include <locale.h> serve para: inser??o de acentos e caracteres especiais.\n\n");
    printf("IMPORTANTE 01 - Todas as vezes que eu for utilizar a Biblioteca de acentua??o, obrigatoriamente, antes de informar valores que eu desejo que apare?am em tela,");
    printf("\neu preciso setar o comando setlocale dentro da minha fun??o.\n\n");
    printf("O comando para printar valores em tela ? o printf e para printar algum valor eu devo passar o comando printf, abrir e fechar parenteses,");
    printf("\ndentro dos parenteses abrir e fechar aspas duplas, e depois dos parenteses inserir ponto e v?rgula - a? o valor que eu quero exibir em tela deve ser declarado");
    printf("\ndentro das aspas.\n\n");
    printf("O comando contra-barra n serve para: pular linha, sendo utilizado uma vez d? apenas espa?o, e sendo utulizado duas vezes deixa uma linha em branco entre duas coisas.\n\n");

    printf("------------------------------------------------------------------------------------------------------------------------\n\n\n");

    //Vari?vel do tipo Inteira
    int a = 5; //Passar um valor para a minnha vari?vel.
    printf("%d \n\n", a); //Imprimir minha vari?vel em tela.

    int b = 12;
    printf("O valor da vari?vel b ? = %d \n", b); //Imprimir minha vari?vel em tela, acompanhada de um texto.
    printf("O valor de a+b ? = %d \n\n", a+b);

    scanf("%d", &a); //Alterar em tempo real, o valor de uma vari?vel, na mem?ria do computador.
    printf("\nO valor da vari?vel a mudou para = %d \n\n", a);


    printf("\n\nIMPORTANTE 02 - Sobre o prcentagem d, ele faz men??o a uma vari?vel do tipo Inteira. Se fossem vari?veis do tipo Valor quebrado, seria porcentagaem f. \n\n");
    printf("IMPORTANTE 03 - Sobre o comando Scanf, ele significa, escaneie um valor inteiro para a minha vari?vel a. E onde est? minha vari?vel a?");
    printf("R: Est? l? na no endere?o da vari?vel a na mem?ria do computador, que ? representado pelo &! \n\n\n\n");


    //Vari?vel do tipo Float/Quebrada
    float c = 5.3;
    printf("O valor da vari?vel c ? Float, um n?mero quebrado, veja, c = %f \n\n", c);
    scanf("%f", &c);
    printf("\nO valor de c mudou para %f \n\n", c);

    //Vari?vel do tipo Char/Letras ?nicas
    char d = 'y';
    printf("O valor da vari?vel d ? Texto, d = %c \n\n", 'y');
    fflush(stdin);
    scanf("%c", &d);
    printf("\nO valor de d mudou para %c \n\n", d);


    printf("\n\nIMPORTANTE 04 - Sobre o comando fflush, ele significa limpeza de Buffer, ou seja, limpeza de arquivos tempor?rios alocados na mem?ria.");
    printf("\nNo C, quando n?s lemos um valor, antes dele ir para a vari?vel, ele passa por um lugarzinho chamado Buffer, que ? um espa?o de mem?ria tempor?rio.");
    printf("\nEle vem primeiro para o Buffer, e depois ele vai l? para a minha vari?vel... Ent?o pode acontecer, em momentos que n?s j? utilizamos o Buffer anteriormente,");
    printf("\nde ele conter lixo. Logo, antes de eu ler um valor para Char ? sempre bom que eu limpe o Buffer com a Fun??o fflush.\n\n");

}


