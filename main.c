#include <stdio.h>
#include <stdlib.h>


/* Escreva um programa que recebe um ano do usu�rio e imprime na tela todos os anos bissextos
do ano 1 at� o ano digitado. Utilize a estrutura de repeti��o while */

int main()
{
    int ano, ano_b, i =1;

    printf("Digite o ano:\n");
    scanf("%d", &ano);

    printf("Os anos bissextos sao:\n");

    while (i <= ano){
        ano_b = i % 4;
        if ((i % 4 == 0 && i % 100 != 0) || (i % 400 == 0)){
            printf("%d\n", i);
        }
        i++;
    }
}
