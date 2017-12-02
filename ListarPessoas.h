#include <stdio.h>
#include <string.h>
#include "pessoa.h"
#include "declara_vet.h"

void ListarPessoa(Pessoa vet[])
{
    int i, j;
    char nomeAux[50];


        for(i=0;i<indexAgenda;i++)
    {
        for(j=0;j<indexAgenda-1;j++)
        {
            if(strcmp(vet[j].nome,vet[j+1].nome) > 0)
            {
                strcpy(nomeAux,vet[j+1].nome);
                strcpy(vet[j+1].nome,vet[j].nome);
                strcpy(vet[j].nome,nomeAux);
            }
        }
    }

    for(i=0;i<indexAgenda;i++)
        printf("%s\n",vet[i].nome);

}