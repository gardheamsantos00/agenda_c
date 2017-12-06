#include <string.h>
#include "pessoa.h"
#include "declara.h"

void ApagarDados(int ultimoIndex)
{
    agenda[ultimoIndex].aniversario.ano = 0;
    agenda[ultimoIndex].aniversario.mes = 0;
    agenda[ultimoIndex].aniversario.dia = 0;

    agenda[ultimoIndex].endereco.rua = NULL;
    agenda[ultimoIndex].endereco.numero = 0;
    agenda[ultimoIndex].endereco.complemento = NULL;
    agenda[ultimoIndex].endereco.bairro = NULL;
    agenda[ultimoIndex].endereco.cep = NULL;
    agenda[ultimoIndex].endereco.cidade = NULL;
    agenda[ultimoIndex].endereco.estado = NULL;
    agenda[ultimoIndex].endereco.pais = NULL;

    agenda[ultimoIndex].telefone.ddd = NULL;
    agenda[ultimoIndex].telefone.numero = NULL;

    agenda[ultimoIndex].nome = NULL;
    agenda[ultimoIndex].email = NULL;
    agenda[ultimoIndex].Observacao = NULL;
}

void RealocaIndexes(int index)
{
    agenda[index].aniversario.ano = agenda[index+1].aniversario.ano;
    agenda[index].aniversario.mes = agenda[index+1].aniversario.mes;
    agenda[index].aniversario.dia = agenda[index+1].aniversario.ano;

    strcpy(agenda[index].endereco.rua, agenda[index+1].endereco.rua);
    agenda[index].endereco.numero = agenda[index+1].endereco.numero;
    strcpy(agenda[index].endereco.complemento, agenda[index+1].endereco.complemento);
    strcpy(agenda[index].endereco.bairro, agenda[index+1].endereco.bairro);
    strcpy(agenda[index].endereco.cep, agenda[index+1].endereco.cep);
    strcpy(agenda[index].endereco.cidade, agenda[index+1].endereco.cidade);
    strcpy(agenda[index].endereco.estado, agenda[index+1].endereco.estado);
    strcpy(agenda[index].endereco.pais, agenda[index+1].endereco.pais);

    strcpy(agenda[index].telefone.ddd, agenda[index+1].telefone.ddd);
    strcpy(agenda[index].telefone.numero, agenda[index+1].telefone.numero);

    strcpy(agenda[index].nome, agenda[index+1].nome);
    strcpy(agenda[index].email, agenda[index+1].email);
    strcpy(agenda[index].Observacao, agenda[index+1].Observacao);
}

void ExcluirPessoa(char nome[])
{
    int index;

    for(index = 0; index < 100; index++)
    {
        if(strcmp(agenda[index], nome))
        {
            RealocaIndexes(index);
            ApagarDados(indexAgenda);
            indexAgenda--;
            index--;
        }
    }
}