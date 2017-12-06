#include <stdio.h>
#include <stdlib.h>
#include "BuscaPrimeiroNome.h"
#include "buscaMes.h"
#include "buscaDia-Mes.h"
#include "IncluirPessoa.h"
#include "RemoverPessoa.h"
#include "ListarPessoas.h"

void Menu()
{
    int opcao = -1;
    char nome[100];
    int mes, dia;


    do
    {
        system("cls");
        printf("===================================\n");
        printf("| A.Buscar Nome.................1 |\n");
        printf("| B.Aniversarios do Mes.........2 |\n");
        printf("| C.Aniversarios do Dia e Mes...3 |\n");
        printf("| D.Imprimir Agenda.............4 |\n");
        printf("| E.Incluir Pessoa..............5 |\n");
        printf("| F.Remover Pessoa..............6 |\n");
        printf("| G.Listar Pessoas..............7 |\n");
        printf("| SAIR..........................0 |\n");
        printf("===================================\n");
        printf("OPCAO: ");

        scanf("%d", &opcao);

        switch(opcao)
        {
            case 1:
                printf("Escreva o nome a ser buscado: ");
                gets(nome);
                BuscaPrimeiroNome(nome);
                break;
            case 2:
                printf("Escreva o mes a ser buscado: ");
                scanf("%d", mes);
                BuscaPorMes(mes);
                break;
            case 3:
                printf("Escreva o dia a ser buscado: ");
                scanf("%d", dia);
                printf("Escreva o mes a ser buscado: ");
                scanf("%d", mes);
                BuscaPorDiaMes(dia, mes);
                break;
            case 4:
                ImprimirAgenda();
                break;
            case 5:
                Incluir();
                break;
            case 6:
                printf("Escreva o nome da pessoa a ser removida: ");
                gets(nome);
                RemoverPessoa(nome);
                break;
            case 7:
                ListarPessoa();
                break;
            default:
                break;
        }        
    }while(opcao != 0);
}
