#include <stdio.h>
#include <stdlib.h>

void Menu()
{
    int opcao = -1;

    do
    {
        
        system("cls");
        printf("===================================\n");
        printf("| A.Buscar Nome.................1 |\n");
        printf("| B.Aniversários do Mes.........2 |\n");
        printf("| C.Aniversários do Dia e Mes...3 |\n");
        printf("| D.Pessoas em Ordem Alfabética.4 |\n");
        printf("| E.............................5 |\n");
        printf("| F.............................6 |\n");
        printf("| G.............................7 |\n");
        printf("| H.............................8 |\n");
        printf("| I.............................9 |\n");
        printf("| SAIR..........................0 |\n");
        printf("===================================\n");
        printf("OPCAO: ");
        scanf("%d", &opcao);

        
    }while(opcao != 0);
}