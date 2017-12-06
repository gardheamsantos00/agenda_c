#include <stdio.h>
#include <stdlib.h>
#include "BuscaPrimeiroNome.h"
#include "buscaMes.h"
#include "buscaDia-Mes"

void Menu()
{
    int opcao = -1;
    char nome[100];
    int mes;


    do
    {
        system("cls");
        printf("===================================\n");
        printf("| A.Buscar Nome.................1 |\n");
        printf("| B.Aniversarios do Mes.........2 |\n");
        printf("| C.Aniversarios do Dia e Mes...3 |\n");
        printf("| D.Imprimir Agenda.............4 |\n");
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
                printf("Escreva o nome a ser buscado: ");
                gets(nome);
                BuscaPrimeiroNome();
                break;
            case 2:
                printf("Escreva o mes a ser buscado: ");
                gets(mes);
                BuscaPorMes(mes);
                break;
            case 3:
                printf("Escreva o dia a ser buscado: ");
                gets(dia);
                printf("Escreva o mes a ser buscado: ");
                gets(mes);
                BuscaPorMes(dia, mes);
                break;
            case 4:
                ImprimirAgenda();
                break;
            case 5:
                printf("");
                //BuscaPrimeiroNome();
                break;
            case 6:
                printf("");
                //BuscaPrimeiroNome();
                break;
            case 7:
                printf("");
                //BuscaPrimeiroNome();
                break;
            case 8:
                printf("");
                //BuscaPrimeiroNome();
                break;
            case 9:
                printf("");
                //BuscaPrimeiroNome();
                break;
        }        
    }while(opcao != 0);
}
