#include "pessoa.h"
#include <stdio.h>
#include <string.h>
#include "declara_vet.h"

void BuscaPrimeiroNome(char nome[50])
{
    char nomeAux[50];
    int i,j=0;

    for(i=0;i<indexAgenda;i++)
    {
        while(agenda[i].nome[j] != ' ')
        {
            nomeAux[j] = agenda[i].nome[j];
            j++;
        }
        
        nomeAux[j] = '/0';
        j = 0;

        if(strcmp(nomeAux,nome) == 0)
        {
            printf("Nome:%s\n",agenda[i].nome);
            printf("Email:%s\n",agenda[i].email);
            printf("País:%s         Estado:%s\n",agenda[i].endereco.pais,agenda[i].endereco.estado);
            printf("Cidade:%s       Bairro:%s\n",agenda[i].endereco.cidade,agenda[i].endereco.bairro);
            printf("Rua:%s          Numero:%d\n",agenda[i].endereco.rua,agenda[i].endereco.numero);
            printf("CEP:%s\n",agenda[i].endereco.cep);
            printf("Complemento:%s\n",agenda[i].endereco.complemento);
            printf("Telefone:(%d)%d\n",agenda[i].telefone.ddd,agenda[i].telefone.numero);
            printf("Aniversario:%d/%d/%d\n",agenda[i].aniversario.dia,agenda[i].aniversario.mes,agenda[i].aniversario.ano);
            printf("Observacoes:%s\n",agenda[i].Observacao);
        }

    }
}