#include "pessoa.h"
#include <stdio.h>

Pessoa *Incluir(Pessoa vet[], int *contatos)
{   

    printf("Digite o nome: ");
    fgets(vet[*contatos].nome,50,stdin);

    printf("Digite o e-mail: ");
    fgets(vet[*contatos].email,100,stdin);

    printf("Digite o nome da rua: ");
    fgets(vet[*contatos].endereco.rua,100,stdin);

    printf("Digite o numero da casa: ");
    scanf("%d",&vet[*contatos].endereco.numero);

    printf("Digite o complemento do endereco: ");
    fgets(vet[*contatos].endereco.complemento,100,stdin);

    printf("Digite o nome do bairro: ");
    fgets(vet[*contatos].endereco.bairro,100,stdin);

    printf("Digite o CEP: ");
    fgets(vet[*contatos].endereco.cep,8,stdin);

    printf("Digite o nome da cidade: ");
    fgets(vet[*contatos].endereco.cidade,50,stdin);

    printf("Digite a abreviatura do estado: "); //PRECISA CHAMAR A FUNÇAO VALIDAR ESTADO AQUI
    fgets(vet[*contatos].endereco.estado,2,stdin);

    printf("Digite o país: ");
    fgets(vet[*contatos].endereco.pais,50,stdin);

    printf("Digite o telefone: ");
    scanf("%s",&vet[*contatos].telefone.ddd);
    scanf("%s",&vet[*contatos].telefone.numero);

    printf("Digite o aniversario(data separada por espacos): ");
    scanf("%d %d %d",&vet[*contatos].aniversario.dia,&vet[*contatos].aniversario.mes,&vet[*contatos].aniversario.ano);

    printf("Digite uma observacao: ");
    fgets(vet[*contatos].Observacao,100,stdin);

    *contatos++;

    return vet;
}