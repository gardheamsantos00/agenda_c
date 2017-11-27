#include "pessoa.h"
#include <stdio.h>
#include <string.h>

void BuscaPrimeiroNome(char nome[50], Pessoa vet[])
{
    char nomeAux[50];
    int i,j=0;

    for(i=0;i<100;i++)
    {
        while(vet[i].nome[j] != ' ')
        {
            nomeAux[j] = vet[i].nome[j];
            j++;
        }
        nomeAux[j] = '/0';

        if(strcmp(nomeAux,nome) == 0)
        {
            printf("Nome:%s\n",vet[i].nome);
            printf("Email:%s\n",vet[i].email);
            printf("País:%s         Estado:%s\n",vet[i].endereco.pais,vet[i].endereco.estado);
            printf("Cidade:%s       Bairro:%s\n",vet[i].endereco.cidade,vet[i].endereco.bairro);
            printf("Rua:%s          Numero:%d\n",vet[i].endereco.rua,vet[i].endereco.numero);
            printf("CEP:%s\n",vet[i].endereco.cep);
            printf("Complemento:%s\n",vet[i].endereco.complemento);
            printf("Telefone:(%d)%d\n",vet[i].telefone.ddd,vet[i].telefone.numero);
            printf("Aniversario:%d/%d/%d\n",vet[i].aniversario.dia,vet[i].aniversario.mes,vet[i].aniversario.ano);
            printf("Observacoes:%s\n",vet[i].Observacao);
        }

        j=0;

    }
}