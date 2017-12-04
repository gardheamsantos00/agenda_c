#include "pessoa.h"
#include <stdio.h>
#include <string.h>
#include "declara_vet.h"

int BuscaPorMes(int mes, Pessoa pessoa[]){

    int i;

    for(i=0; i < indexAgenda; i++){

		if(pessoa[i].aniversario.mes == mes){

			printf("\nNOME :%s",pessoa[i].nome);
            printf("\nEMAIL:%s",pessoa[i].email);
            printf("\nPaís:%s         Estado:%s",pessoa[i].endereco.pais,pessoa[i].endereco.estado);
            printf("\nCidade:%s       Bairro:%s",pessoa[i].endereco.cidade,pessoa[i].endereco.bairro);
            printf("\nRua:%s          Numero:%d",pessoa[i].endereco.rua,pessoa[i].endereco.numero);
            printf("\nCEP:%s",pessoa[i].endereco.cep);
            printf("\nComplemento:%s",pessoa[i].endereco.complemento);
            printf("\nTelefone:(%d)%d",pessoa[i].telefone.ddd,pessoa[i].telefone.numero);
            printf("\nAniversario:%d/%d/%d",pessoa[i].aniversario.dia,pessoa[i].aniversario.mes,pessoa[i].aniversario.ano);
            printf("\nObservacoes:%s",pessoa[i].Observacao);
		}
    }
    return -1;
}
