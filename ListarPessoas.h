#include <stdio.h>
#include <string.h>
#include "pessoa.h"
#include "declara_vet.h"

void ListarPessoa()
{
    int i, j;
    char nomeAux[50];


        for(i=0;i<indexAgenda;i++)
    {
        for(j=0;j<indexAgenda-1;j++)
        {
            if(strcmp(agenda[j].nome,agenda[j+1].nome) > 0)
            {
                strcpy(nomeAux,agenda[j+1].nome);
                strcpy(agenda[j+1].nome,agenda[j].nome);
                strcpy(agenda[j].nome,nomeAux);
            }
        }
    }

    for(i=0;i<indexAgenda;i++)
        printf("%s\n",agenda[i].nome);

}