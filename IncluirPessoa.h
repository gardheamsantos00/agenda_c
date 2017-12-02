#include "pessoa.h"
#include <stdio.h>
#include "declara_vet.h"

Pessoa *Incluir(Pessoa vet[])
{   

    printf("Digite o nome: ");
    fgets(vet[indexAgenda].nome,50,stdin);

    printf("Digite o e-mail: ");
    fgets(vet[indexAgenda].email,100,stdin);

    printf("Digite o nome da rua: ");
    fgets(vet[indexAgenda].endereco.rua,100,stdin);

    printf("Digite o numero da casa: ");
    scanf("%d",&vet[indexAgenda].endereco.numero);

    printf("Digite o complemento do endereco: ");
    fgets(vet[indexAgenda].endereco.complemento,100,stdin);

    printf("Digite o nome do bairro: ");
    fgets(vet[indexAgenda].endereco.bairro,100,stdin);

    printf("Digite o CEP: ");
    fgets(vet[indexAgenda].endereco.cep,8,stdin);

    printf("Digite o nome da cidade: ");
    fgets(vet[indexAgenda].endereco.cidade,50,stdin);

    printf("Digite a abreviatura do estado: "); //PRECISA CHAMAR A FUNÇAO VALIDAR ESTADO AQUI
    fgets(vet[indexAgenda].endereco.estado,2,stdin);

    printf("Digite o país: ");
    fgets(vet[indexAgenda].endereco.pais,50,stdin);

    printf("Digite o telefone: ");
    scanf("%s",&vet[indexAgenda].telefone.ddd);
    scanf("%s",&vet[indexAgenda].telefone.numero);

    printf("Digite o aniversario(data separada por espacos): ");
    scanf("%d %d %d",&vet[indexAgenda].aniversario.dia,&vet[indexAgenda].aniversario.mes,&vet[indexAgenda].aniversario.ano);

    printf("Digite uma observacao: ");
    fgets(vet[indexAgenda].Observacao,100,stdin);

    indexAgenda++;

    return vet;
}