    #include <stdio.h>
    #include <string.h>
    #include "pessoa.h"

   void ListarPessoa(Pessoa vet[],int quantidade)
{
    int i, j;
    char nomeAux[50];
    
    for(i=0;i<quantidade;i++)
    {
        for(j=0;j<quantidade-1;j++)
        {
            if(strcmp(vet[j].nome,vet[j+1].nome) > 0)
            {
                strcpy(nomeAux,vet[j+1].nome);
                strcpy(vet[j+1].nome,vet[j].nome);
                strcpy(vet[j].nome,nomeAux);
            }
        }
    }

    for(i=0;i<quantidade;i++)
    {
        printf("%s\n",vet[i].nome);
    }

}