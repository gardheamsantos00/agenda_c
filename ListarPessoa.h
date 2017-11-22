#include <stdio.h>
#include <pessoa.h>

void ListarPessoa(Pessoa vet[])
{
    int i, j, cont = 0;
    char nomeAux[30];


    for(i=0;vet[i] != NULL;i++)
        cont++;


        for(i=0;i<cont;i++)
    {
        for(j=0;j<cont-1;j++)
        {
            if(strcmp(Pessoa.nome[j],Pessoa.nome[j+1]) > 0)
            {
                strcpy(nomeAux,Pessoa.nome[j+1]);
                strcpy(Pessoa.nome[j+1],Pessoa.nome[j]);
                strcpy(Pessoa.nome[j],nomeAux);

            }
        }
    }

}