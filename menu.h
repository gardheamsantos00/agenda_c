#include <stdio.h>
#include <stdlib.h>
#include "BuscaPrimeiroNome.h"

void Menu()
{
    int opcao = -1;

    do
    {
        system("cls");
        printf("===================================\n");
        printf("| A.Buscar Nome.................1 |\n");
        printf("| B.Aniversarios do Mes.........2 |\n");
        printf("| C.Aniversarios do Dia e Mes...3 |\n");
        printf("| D.Pessoas em Ordem Alfabetica.4 |\n");
        printf("| E.............................5 |\n");
        printf("| F.............................6 |\n");
        printf("| G.............................7 |\n");
        printf("| H.............................8 |\n");
        printf("| I.............................9 |\n");
        printf("| SAIR..........................0 |\n");
        printf("===================================\n");
        printf("OPCAO: ");
        scanf("%d", &opcao);

        switch(opcao)
        {
            case 1:
                printf("");
                //BuscaPrimeiroNome();
                break;
        }        
    }while(opcao != 0);
}
