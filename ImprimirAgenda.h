#include "pessoa.h"
#include <stdio.h>
#include <string.h>


void Imprimir(char nome[50], Pessoa vet[],int quantidadeContatos)
{
    char nomeAux[50],emailAux[100],enderecoAux[100],telefoneAux[9],observacaoAux[100],estadoAux[2];
    int numeroAux,aniversarioAux;
    int i,j,opcao;

    printf("1-Imprime nome, telefone e e-mail (ordem alfabética de nome).\n");
    printf("2-Imprime nome, telefone e e-mail (separado por localidade).\n");
    printf("3-Imprime todos os dados (ordem alfabética de nome).\n");
    scanf("%d",&opcao);

    switch(opcao)
    {
        case 1: 
                for(i=0;i<quantidadeContatos;i++)  //ORDENAÇAO DO VETOR
                {
                    for(j=0;j<quantidadeContatos-1;j++)
                    {  
                        if(strcmp(vet[j].nome,vet[j+1].nome) > 0)   
                        {
                            strcpy(nomeAux,vet[j+1].nome);
                            strcpy(vet[j+1].nome,vet[j].nome);
                            strcpy(vet[j].nome,nomeAux);

                            strcpy(emailAux,vet[j+1].email);
                            strcpy(vet[j+1].email,vet[j].email);
                            strcpy(vet[j].email,emailAux);

                            strcpy(telefoneAux,vet[j+1].telefone.ddd);
                            strcpy(vet[j+1].telefone.ddd,vet[j].telefone.ddd);
                            strcpy(vet[j].telefone.ddd,telefoneAux);

                            strcpy(telefoneAux,vet[j+1].telefone.numero);
                            strcpy(vet[j+1].telefone.numero,vet[j].telefone.numero);
                            strcpy(vet[j].telefone.numero,telefoneAux);

                        }
                    }
                }

                for(i=0;i<quantidadeContatos;i++)
                {
                    printf("Nome:%s\n",vet[i].nome);
                    printf("Telefone:(%d)%d\n",vet[i].telefone.ddd,vet[i].telefone.numero);
                    printf("Email:%s\n\n",vet[i].email);
                    
                }
                

            break;
        case 2:                
                for(i=0;i<quantidadeContatos;i++)  //ORDENAÇAO DO VETOR
                {
                    for(j=0;j<quantidadeContatos-1;j++)
                    {  
                        if(strcmp(vet[j].endereco.estado,vet[j+1].endereco.estado) > 0)   
                        {
                            strcpy(nomeAux,vet[j+1].nome);
                            strcpy(vet[j+1].nome,vet[j].nome);
                            strcpy(vet[j].nome,nomeAux);

                            strcpy(emailAux,vet[j+1].email);
                            strcpy(vet[j+1].email,vet[j].email);
                            strcpy(vet[j].email,emailAux);

                            strcpy(telefoneAux,vet[j+1].telefone.ddd);
                            strcpy(vet[j+1].telefone.ddd,vet[j].telefone.ddd);
                            strcpy(vet[j].telefone.ddd,telefoneAux);

                            strcpy(telefoneAux,vet[j+1].telefone.numero);
                            strcpy(vet[j+1].telefone.numero,vet[j].telefone.numero);
                            strcpy(vet[j].telefone.numero,telefoneAux);

                            strcpy(estadoAux,vet[j+1].endereco.estado);
                            strcpy(vet[j+1].endereco.estado,vet[j].endereco.estado);
                            strcpy(vet[j].endereco.estado,estadoAux);

                        }
                    }
                }

                strcpy(estadoAux,vet[0].endereco.estado);

                printf("%s\n\n",vet[0].endereco.estado);

                for(i=0;i<quantidadeContatos;i++)
                {   
                    if(strcmp(vet[i].endereco.estado,estadoAux) != 0)
                    {
                        printf("%s\n\n",vet[i].endereco.estado);
                        strcpy(estadoAux,vet[i].endereco.estado);

                    }

                    printf("Nome:%s\n",vet[i].nome);
                    printf("Telefone:(%d)%d\n",vet[i].telefone.ddd,vet[i].telefone.numero);
                    printf("Email:%s\n\n",vet[i].email);
                    
                }
                

                

            break;
        
        case 3: 
                for(i=0;i<quantidadeContatos;i++)  //ORDENAÇAO DO VETOR
                {
                    for(j=0;j<quantidadeContatos-1;j++)
                    {
                        if(strcmp(vet[j].nome,vet[j+1].nome) > 0)   
                        {   
                            //NOME
                            strcpy(nomeAux,vet[j+1].nome);
                            strcpy(vet[j+1].nome,vet[j].nome);
                            strcpy(vet[j].nome,nomeAux);

                            //EMAIL
                            strcpy(emailAux,vet[j+1].email);
                            strcpy(vet[j+1].email,vet[j].email);
                            strcpy(vet[j].email,emailAux);

                            //ENDEREÇO
                            strcpy(enderecoAux,vet[j+1].endereco.rua);
                            strcpy(vet[j+1].endereco.rua,vet[j].endereco.rua);
                            strcpy(vet[j].endereco.rua,enderecoAux);
                            
                            numeroAux = vet[j+1].endereco.numero;
                            vet[j+1].endereco.numero = vet[j].endereco.numero;
                            vet[j].endereco.numero = numeroAux;

                            strcpy(enderecoAux,vet[j+1].endereco.complemento);
                            strcpy(vet[j+1].endereco.complemento,vet[j].endereco.complemento);
                            strcpy(vet[j].endereco.complemento,enderecoAux);

                            strcpy(enderecoAux,vet[j+1].endereco.bairro);
                            strcpy(vet[j+1].endereco.bairro,vet[j].endereco.bairro);
                            strcpy(vet[j].endereco.bairro,enderecoAux);
                            
                            strcpy(enderecoAux,vet[j+1].endereco.cep);
                            strcpy(vet[j+1].endereco.cep,vet[j].endereco.cep);
                            strcpy(vet[j].endereco.cep,enderecoAux);

                            strcpy(enderecoAux,vet[j+1].endereco.cidade);
                            strcpy(vet[j+1].endereco.cidade,vet[j].endereco.cidade);
                            strcpy(vet[j].endereco.cidade,enderecoAux);

                            strcpy(enderecoAux,vet[j+1].endereco.estado);
                            strcpy(vet[j+1].endereco.estado,vet[j].endereco.estado);
                            strcpy(vet[j].endereco.estado,enderecoAux);

                            strcpy(enderecoAux,vet[j+1].endereco.pais);
                            strcpy(vet[j+1].endereco.pais,vet[j].endereco.pais);
                            strcpy(vet[j].endereco.pais,enderecoAux);

                            //TELEFONE
                            strcpy(telefoneAux,vet[j+1].telefone.ddd);
                            strcpy(vet[j+1].telefone.ddd,vet[j].telefone.ddd);
                            strcpy(vet[j].telefone.ddd,telefoneAux);

                            strcpy(telefoneAux,vet[j+1].telefone.numero);
                            strcpy(vet[j+1].telefone.numero,vet[j].telefone.numero);
                            strcpy(vet[j].telefone.numero,telefoneAux);
                            
                            //ANIVERSARIO
                            aniversarioAux = vet[j+1].aniversario.dia;
                            vet[j+1].aniversario.dia = vet[j].aniversario.dia;
                            vet[j].aniversario.dia = aniversarioAux;

                            aniversarioAux = vet[j+1].aniversario.mes;
                            vet[j+1].aniversario.mes = vet[j].aniversario.mes;
                            vet[j].aniversario.mes = aniversarioAux;

                            aniversarioAux = vet[j+1].aniversario.ano;
                            vet[j+1].aniversario.ano = vet[j].aniversario.ano;
                            vet[j].aniversario.ano = aniversarioAux;

                            //OBSERVAÇAO
                            strcpy(observacaoAux,vet[j+1].Observacao);
                            strcpy(vet[j+1].Observacao,vet[j].Observacao);
                            strcpy(vet[j].Observacao,observacaoAux);
                        }
                    }
                }


                for(i=0;i<quantidadeContatos;i++)
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
                    printf("Observacoes:%s\n\n",vet[i].Observacao);
                }
            break;
    
    }
}