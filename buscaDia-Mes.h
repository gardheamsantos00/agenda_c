#include "pessoa.h"
#include <stdio.h>
#include <string.h>
#include "declara_vet.h"

int BuscaPorDiaMes(int dia , int mes){

    int i;

    for(i=0; i < indexAgenda; i++){

		if(agenda[i].aniversario.dia == dia && agenda[i].aniversario.mes == mes ){

			printf("\nNOME :%s",agenda[i].nome);
            printf("\nEMAIL:%s",agenda[i].email);
            printf("\nPaís:%s         Estado:%s",agenda[i].endereco.pais,agenda[i].endereco.estado);
            printf("\nCidade:%s       Bairro:%s",agenda[i].endereco.cidade,agenda[i].endereco.bairro);
            printf("\nRua:%s          Numero:%d",agenda[i].endereco.rua,agenda[i].endereco.numero);
            printf("\nCEP:%s",agenda[i].endereco.cep);
            printf("\nComplemento:%s",agenda[i].endereco.complemento);
            printf("\nTelefone:(%d)%d",agenda[i].telefone.ddd,agenda[i].telefone.numero);
            printf("\nAniversario:%d/%d/%d",agenda[i].aniversario.dia,agenda[i].aniversario.mes,agenda[i].aniversario.ano);
            printf("\nObservacoes:%s",agenda[i].Observacao);
		}
    }
    return -1;
}
