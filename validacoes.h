#include "pessoa.h"
#include <stdio.h>
#include <string.h>
#include "declara_vet.h"


//Validar data: dias entre 1 e 30
//(inclusive); mês entre 1 e 12 (inclusive);
// anos entre 1900 e data corrente
int validaData(Data data){
    if(data.dia < 1 && data.dia > 30){
        return -1;
    }
    if(data.mes < 1 && data.mes > 12){
        return -1;
    }
    if(data.ano < 1900 && data.ano > 2017){
        return -1
    }

    return 1;
}

//Validar telefone: 2 dígitos numéricos entre parênteses (significa o DDD);
// 4 ou 5 dígitos numéricos;
// um tracinho;
//4 dígitos numéricos.
//(43)99862-5629
int validaTelefone(Telefone telefone){
    if(!(isdigit(telefone.ddd[1]) && !(isdigit(telefone.ddd[2]) ){
        return -1;
    }
    if(telefone.ddd != 4){
        return -1;
    }
    if(telefone.numero < 9 && telefone.numero > 10){
        return -1;
    }

    if(telefone.ddd + telefone.numero > 14){
        return -1;
    }
    if(strcmp(telefone.ddd[0]) != '(' && strcmp(telefone.ddd[3]) != ')'){
        return -1
    }
    if(strcmp(telefone.numero[5]) != '-' || strcmp(telefone.numero[4]) != '-'){
        return -1;
    }

 return 1;
}

//sequencia > 2 dígitos; um @; sequencia > 2 dígitos;
// um ponto; sufixo COM (tudo em minúsculo)

//converte a string pra minusculo na hora que receber...
//rb@bec.com
//rebeca@rebeca.com

int validaEmail(char email){
    int i, pos@ = 0, posPonto = 0;
    for(i=0; i < strlen(email)-1; i++){
        if(strcmp(email, '@') == 0){
            pos@ = i;
        }
    }
     for(i=0; i < strlen(email)-1; i++){
        if(strcmp(email, '.') == 0){
            posPonto = i;
        }
    }

    if(pos@ < 3){
        return -1;
    }
    if(posPonto < 6){
        return -1;
    }

    if(strcmp(emai[posPonto+1], 'c')!= 0 && strcmp(emai[posPonto+1], 'o')!= 0 && strcmp(emai[posPonto+1], 'm')!= 0){
        return -1;
    }

    return 1;
}

//5 dígitos numéricos; um tracinho; 3 dígitos numéricos.
// 12345-123
int validaCEP(Endereco endereco){
    
    if(strcmp(endereco.cep[5], '-') != 0 ){
        return -1;
    }

    if( !(isdigit(endereco.cep[0])) &&
       !(isdigit(endereco.cep[1])) &&
       !(isdigit(endereco.cep[2])) &&
       !(isdigit(endereco.cep[3])) &&
       !(isdigit(endereco.cep[4])) &&
       !(isdigit(endereco.cep[6])) &&
       !(isdigit(endereco.cep[7])) &&
       !(isdigit(endereco.cep[8]))){
        return -1;
    }

    return 1;

}

int validaEstado(){}

