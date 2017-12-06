#include "pessoa.h"
#include <string.h>
#include <stdio.h>
#include "declara_vet.h"
#include "validacoes.h"
#include <ctype.h>

void Incluir()
{   
    int valido = 0,i;
    char email[100],cep[9],estado[2],telefone[14];
    int dia,mes,ano;

    printf("Digite o nome: ");
    fgets(agenda[indexAgenda].nome,50,stdin);

    while(valido != 1)
    {
        printf("Digite o e-mail: ");
        fgets(email,100,stdin);

        valido = validaEmail(email);

        if(valido == 0)
            printf("Email invalido!! Digite novamente...\n");
        else if(valido == 1)
            strcpy(agenda[indexAgenda].email,email);
    }
    
    printf("Digite o nome da rua: ");
    fgets(agenda[indexAgenda].endereco.rua,100,stdin);

    printf("Digite o numero da casa: ");
    scanf("%d",&agenda[indexAgenda].endereco.numero);

    printf("Digite o complemento do endereco: ");
    fgets(agenda[indexAgenda].endereco.complemento,100,stdin);

    printf("Digite o nome do bairro: ");
    fgets(agenda[indexAgenda].endereco.bairro,100,stdin);

    valido = 0;
    while(valido !=1)
    {
        printf("Digite o CEP: ");
        fgets(cep,9,stdin);

        valido = validaCEP(cep);

        if(valido == 0)
            printf("cep invalido!! Digite novamente...\n");
        else if(valido == 1)
        {   
            for(i=0;i<5;i++)
            {
                agenda[indexAgenda].endereco.cep[i] = cep[i];
            }

            for(i=6;i<9;i++)
            {
                agenda[indexAgenda].endereco.cep[i-1] = cep[i];
            }
            
            agenda[indexAgenda].endereco.cep[i-1] = '\0';
        }
    
    }

    printf("Digite o nome da cidade: ");
    fgets(agenda[indexAgenda].endereco.cidade,50,stdin);


    valido = 0;
    while(valido != 1)
    {   

        printf("Digite a abreviatura do estado: "); 
        fgets(estado,2,stdin);

        valido = validaEstado(estado);

        if(valido == 0)
        {
            printf("Estado invalido!! Digite novamente...\n");
        }
        
        else if(valido == 1)
        {
            strcpy(agenda[indexAgenda].endereco.estado,estado);
        }

    }




    printf("Digite o país: ");
    fgets(agenda[indexAgenda].endereco.pais,50,stdin);


    valido = 0;
    while(valido == 0)
    {
        printf("Digite o telefone: ");
        scanf("%s",&telefone);

        valido = validaTel(telefone);

        if(valido = 0)
        {
            printf("Telefone invalido!! Digite novamente...\n");
        }
        else if(valido == 1)
        {
            agenda[indexAgenda].telefone.ddd[0] = telefone[1];
            agenda[indexAgenda].telefone.ddd[1] = telefone[2];
            agenda[indexAgenda].telefone.ddd[2] = '\0';
            agenda[indexAgenda].telefone.numero[0] = telefone[4];
            agenda[indexAgenda].telefone.numero[1] = telefone[5];
            agenda[indexAgenda].telefone.numero[2] = telefone[6];
            agenda[indexAgenda].telefone.numero[3] = telefone[7];
            agenda[indexAgenda].telefone.numero[4] = telefone[8];
            agenda[indexAgenda].telefone.numero[5] = telefone[10];
            agenda[indexAgenda].telefone.numero[6] = telefone[11];
            agenda[indexAgenda].telefone.numero[7] = telefone[12];
            agenda[indexAgenda].telefone.numero[8] = telefone[13];
            agenda[indexAgenda].telefone.numero[9] = '\0';
        }
        else if(valido == 2)
        {
            agenda[indexAgenda].telefone.ddd[0] = telefone[1];
            agenda[indexAgenda].telefone.ddd[1] = telefone[2];
            agenda[indexAgenda].telefone.ddd[2] = '\0';
            agenda[indexAgenda].telefone.numero[0] = telefone[4];
            agenda[indexAgenda].telefone.numero[1] = telefone[5];
            agenda[indexAgenda].telefone.numero[2] = telefone[6];
            agenda[indexAgenda].telefone.numero[3] = telefone[7];
            agenda[indexAgenda].telefone.numero[4] = telefone[9];
            agenda[indexAgenda].telefone.numero[5] = telefone[10];
            agenda[indexAgenda].telefone.numero[6] = telefone[11];
            agenda[indexAgenda].telefone.numero[7] = telefone[12];
            agenda[indexAgenda].telefone.numero[8] = '\0';
        }
        
    }

    valido = 0;
    while(valido != 1)
    {
    
        printf("Digite o aniversario(data separada por espacos): ");
        scanf("%d %d %d",&dia,&mes,&ano);

        valido = validaData(dia,mes,ano);

        if(valido = 0)
        {
            printf("Data invalida!! Digite novamente...\n");
        }
        else if(valido == 1)
        {
            agenda[indexAgenda].aniversario.dia = dia;
            agenda[indexAgenda].aniversario.mes = mes;
            agenda[indexAgenda].aniversario.mes= mes;
        }
    
    }

    printf("Digite uma observacao: ");
    fgets(agenda[indexAgenda].Observacao,100,stdin);

    indexAgenda++;
}