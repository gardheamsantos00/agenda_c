#include "pessoa.h"
#include <stdio.h>
#include <string.h>
#include "declara_vet.h"


void Imprimir(char nome[50])
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
                for(i=0;i<indexAgenda;i++)  //ORDENAÇAO DO VETOR
                {
                    for(j=0;j<indexAgenda-1;j++)
                    {  
                        if(strcmp(agenda[j].nome,agenda[j+1].nome) > 0)   
                        {
                            strcpy(nomeAux,agenda[j+1].nome);
                            strcpy(agenda[j+1].nome,agenda[j].nome);
                            strcpy(agenda[j].nome,nomeAux);

                            strcpy(emailAux,agenda[j+1].email);
                            strcpy(agenda[j+1].email,agenda[j].email);
                            strcpy(agenda[j].email,emailAux);

                            strcpy(telefoneAux,agenda[j+1].telefone.ddd);
                            strcpy(agenda[j+1].telefone.ddd,agenda[j].telefone.ddd);
                            strcpy(agenda[j].telefone.ddd,telefoneAux);

                            strcpy(telefoneAux,agenda[j+1].telefone.numero);
                            strcpy(agenda[j+1].telefone.numero,agenda[j].telefone.numero);
                            strcpy(agenda[j].telefone.numero,telefoneAux);

                        }
                    }
                }

                for(i=0;i<indexAgenda;i++)
                {
                    printf("Nome:%s\n",agenda[i].nome);
                    printf("Telefone:(%d)%d\n",agenda[i].telefone.ddd,agenda[i].telefone.numero);
                    printf("Email:%s\n\n",agenda[i].email);
                    
                }
                

            break;
        case 2:                
                for(i=0;i<indexAgenda;i++)  //ORDENAÇAO DO VETOR
                {
                    for(j=0;j<indexAgenda-1;j++)
                    {  
                        if(strcmp(agenda[j].endereco.estado,agenda[j+1].endereco.estado) > 0)   
                        {
                            strcpy(nomeAux,agenda[j+1].nome);
                            strcpy(agenda[j+1].nome,agenda[j].nome);
                            strcpy(agenda[j].nome,nomeAux);

                            strcpy(emailAux,agenda[j+1].email);
                            strcpy(agenda[j+1].email,agenda[j].email);
                            strcpy(agenda[j].email,emailAux);

                            strcpy(telefoneAux,agenda[j+1].telefone.ddd);
                            strcpy(agenda[j+1].telefone.ddd,agenda[j].telefone.ddd);
                            strcpy(agenda[j].telefone.ddd,telefoneAux);

                            strcpy(telefoneAux,agenda[j+1].telefone.numero);
                            strcpy(agenda[j+1].telefone.numero,agenda[j].telefone.numero);
                            strcpy(agenda[j].telefone.numero,telefoneAux);

                            strcpy(estadoAux,agenda[j+1].endereco.estado);
                            strcpy(agenda[j+1].endereco.estado,agenda[j].endereco.estado);
                            strcpy(agenda[j].endereco.estado,estadoAux);

                        }
                    }
                }

                strcpy(estadoAux,agenda[0].endereco.estado);

                printf("%s\n\n",agenda[0].endereco.estado);

                for(i=0;i<indexAgenda;i++)
                {   
                    if(strcmp(agenda[i].endereco.estado,estadoAux) != 0)
                    {
                        printf("%s\n\n",agenda[i].endereco.estado);
                        strcpy(estadoAux,agenda[i].endereco.estado);

                    }

                    printf("Nome:%s\n",agenda[i].nome);
                    printf("Telefone:(%d)%d\n",agenda[i].telefone.ddd,agenda[i].telefone.numero);
                    printf("Email:%s\n\n",agenda[i].email);
                    
                }
                

                

            break;
        
        case 3: 
                for(i=0;i<indexAgenda;i++)  //ORDENAÇAO DO VETOR
                {
                    for(j=0;j<indexAgenda-1;j++)
                    {
                        if(strcmp(agenda[j].nome,agenda[j+1].nome) > 0)   
                        {   
                            //NOME
                            strcpy(nomeAux,agenda[j+1].nome);
                            strcpy(agenda[j+1].nome,agenda[j].nome);
                            strcpy(agenda[j].nome,nomeAux);

                            //EMAIL
                            strcpy(emailAux,agenda[j+1].email);
                            strcpy(agenda[j+1].email,agenda[j].email);
                            strcpy(agenda[j].email,emailAux);

                            //ENDEREÇO
                            strcpy(enderecoAux,agenda[j+1].endereco.rua);
                            strcpy(agenda[j+1].endereco.rua,agenda[j].endereco.rua);
                            strcpy(agenda[j].endereco.rua,enderecoAux);
                            
                            numeroAux = agenda[j+1].endereco.numero;
                            agenda[j+1].endereco.numero = agenda[j].endereco.numero;
                            agenda[j].endereco.numero = numeroAux;

                            strcpy(enderecoAux,agenda[j+1].endereco.complemento);
                            strcpy(agenda[j+1].endereco.complemento,agenda[j].endereco.complemento);
                            strcpy(agenda[j].endereco.complemento,enderecoAux);

                            strcpy(enderecoAux,agenda[j+1].endereco.bairro);
                            strcpy(agenda[j+1].endereco.bairro,agenda[j].endereco.bairro);
                            strcpy(agenda[j].endereco.bairro,enderecoAux);
                            
                            strcpy(enderecoAux,agenda[j+1].endereco.cep);
                            strcpy(agenda[j+1].endereco.cep,agenda[j].endereco.cep);
                            strcpy(agenda[j].endereco.cep,enderecoAux);

                            strcpy(enderecoAux,agenda[j+1].endereco.cidade);
                            strcpy(agenda[j+1].endereco.cidade,agenda[j].endereco.cidade);
                            strcpy(agenda[j].endereco.cidade,enderecoAux);

                            strcpy(enderecoAux,agenda[j+1].endereco.estado);
                            strcpy(agenda[j+1].endereco.estado,agenda[j].endereco.estado);
                            strcpy(agenda[j].endereco.estado,enderecoAux);

                            strcpy(enderecoAux,agenda[j+1].endereco.pais);
                            strcpy(agenda[j+1].endereco.pais,agenda[j].endereco.pais);
                            strcpy(agenda[j].endereco.pais,enderecoAux);

                            //TELEFONE
                            strcpy(telefoneAux,agenda[j+1].telefone.ddd);
                            strcpy(agenda[j+1].telefone.ddd,agenda[j].telefone.ddd);
                            strcpy(agenda[j].telefone.ddd,telefoneAux);

                            strcpy(telefoneAux,agenda[j+1].telefone.numero);
                            strcpy(agenda[j+1].telefone.numero,agenda[j].telefone.numero);
                            strcpy(agenda[j].telefone.numero,telefoneAux);
                            
                            //ANIVERSARIO
                            aniversarioAux = agenda[j+1].aniversario.dia;
                            agenda[j+1].aniversario.dia = agenda[j].aniversario.dia;
                            agenda[j].aniversario.dia = aniversarioAux;

                            aniversarioAux = agenda[j+1].aniversario.mes;
                            agenda[j+1].aniversario.mes = agenda[j].aniversario.mes;
                            agenda[j].aniversario.mes = aniversarioAux;

                            aniversarioAux = agenda[j+1].aniversario.ano;
                            agenda[j+1].aniversario.ano = agenda[j].aniversario.ano;
                            agenda[j].aniversario.ano = aniversarioAux;

                            //OBSERVAÇAO
                            strcpy(observacaoAux,agenda[j+1].Observacao);
                            strcpy(agenda[j+1].Observacao,agenda[j].Observacao);
                            strcpy(agenda[j].Observacao,observacaoAux);
                        }
                    }
                }


                for(i=0;i<indexAgenda;i++)
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
                    printf("Observacoes:%s\n\n",agenda[i].Observacao);
                }
            break;
    
    }
}