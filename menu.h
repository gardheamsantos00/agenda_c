#include <stdio.h>
#include <stdlib.h>

void Menu()
{
    int opcao = -1;

    do
    {
        system("cls");
        printf("=================================\n");
        printf("| ............................1 |\n");
        printf("| ............................2 |\n");
        printf("| ............................3 |\n");
        printf("| ............................4 |\n");
        printf("| ............................5 |\n");
        printf("| SAIR........................0 |\n");
        printf("=================================\n");
        printf("OPCAO: ");
        scanf("%d", &opcao);

        
    }while(opcao != 0);
}