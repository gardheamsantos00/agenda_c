#include "pessoa.h"
#include <stdio.h>
#include <string.h>
#include "declara_vet.h"
#include <ctype.h>


//Validar data: dias entre 1 e 30
//(inclusive); mês entre 1 e 12 (inclusive);
// anos entre 1900 e data corrente
int validaData(int dia, int mes, int ano){
    if(dia < 1 || dia > 30){
        return 0;
    }
    if(mes < 1 || mes > 12){
        return 0;
    }
    if(ano < 1900 || ano > 2017){
        return 0;
    }

    return 1;
}

//Validar telefone: 2 dígitos numéricos entre parênteses (significa o DDD);
// 4 ou 5 dígitos numéricos;
// um tracinho;
//4 dígitos numéricos.
//(43)99862-5629
int validaTel(char telefone[]){
    int i;

    //valida () do DDD
    if(telefone[0] != '(' || telefone[3] != ')')
        return 0;
    //valida numero no DDD
     if(!(isdigit(telefone[1])) || !(isdigit(telefone[2])))
        return 0;

    //CELULAR
    if(strlen(telefone) == 14){
        if(!(isdigit(telefone[1])) || !(isdigit(telefone[2])))
            return 0;

        //valida os 5 primeiros numeros
        for(i=4;i<9;i++){
            if(!isdigit(telefone[i])){
                return 0;
            }
        }

        //verifica se tem um tra�o depois dos 5  numeros
        if(telefone[9] != '-'){
            return 0;
        }
        //valida os 4 ultimos numeros
        for(i=10;i<14;i++){
            if(!isdigit(telefone[i])){
                return 0;
            }
        }

        return 1;
    }

    //TELEFONE FIXO
    else if(strlen(telefone) == 13){
        if(!(isdigit(telefone[1])) || !(isdigit(telefone[2])))
            return 0;

        //valida os 4 primeiros numeros
        for(i=4;i<8;i++){
            if(!isdigit(telefone[i])){
                return 0;
            }
        }

        //verifica se tem um tra�o depois dos 4  numeros
        if(telefone[8] != '-'){
            return 0;
        }
        //valida os 4 ultimos numeros
        for(i=10;i<13;i++){
            if(!isdigit(telefone[i])){
                return 0;
            }
        }

    }
    else{
        return 0;
    }

    return 2;

}


//sequencia > 2 dígitos; um @; sequencia > 2 dígitos;
// um ponto; sufixo COM (tudo em minúsculo)

//converte a string pra minusculo na hora que receber...
//rb@bec.com
//rebeca@rebeca.com
int validaEmail(char email[]){
    int i=0,j=0,arroba=0,tamanho,posicao,iterador;
    char Aux[100],Aux2[100],pontocom[5];

    printf("Email a ser verificado: %s\n",email);

    //verifica se tem mais de 1 arroba
    while(email[i] != '\0'){
        if(email[i] == '@'){
            arroba++;
        }
        i++;
    }

    if(arroba != 1){
        printf("ERRO 1 - sem @ no email\n");
        return 0;
    }

    //valida o que foi digitado antes do @
    i=0;
    while(email[i] != '@'){
        Aux[i] = email[i];
        i++;
    }
    Aux[i] = '\0';

    if(strlen(Aux) <= 2){
        printf("ERRO 2 - antes do @ tem menos de 3 caracteres\n");
        return 0;
    }

    //ver se existe um .com no final
    tamanho = strlen(email);
    pontocom[0] = email[tamanho-4];
    pontocom[1] = email[tamanho-3];
    pontocom[2] = email[tamanho-2];
    pontocom[3] = email[tamanho-1];
    pontocom[4] = '\0';

    if(strcmp(pontocom,".com") != 0){
        printf("ERRO 3 - sem .com no final do email\n");
        return 0;
    }


    //valida o que foi digitado dps do @
    posicao = i+1;

    for(posicao;posicao<strlen(email)-4;posicao++){
        Aux2[j] = email[i];
        j++;
    }


    Aux2[j] = '\0';

    if(strlen(Aux2) <= 2){
        printf("ERRO 4 - depois do @ e antes do ponto tem menos de 3 caracteres\n");
        return 0;
    }

    //se chegou aqui, tudo deu certo
    return 1;

}


//5 dígitos numéricos; um tracinho; 3 dígitos numéricos.
// 12345-123
int validaCEP(char cep[]){
    int i=0;

    if(strlen(cep) > 9)
        return 0;

    for(i=0;i<5;i++){
        if(!isdigit(cep[i])){
                return 0;
            }
    }

    if(cep[5] != '-')
        return 0;

    for(i=6;i<9;i++){
        if(!isdigit(cep[i])){
                return 0;
            }
    }

    return 1;
}



int validaEstado(char estado[]){
    int i = 0, j = 0, k = 0;
    char listaEstado[79] = {"al ap am ba ce df es go ma mt ms mg pa pb pr pe pi rn rj rs ro rr sc sp se to "};
    char Aux[3];

    for (i = 0; i < 77; i++){
        if (listaEstado[i] == ' '){
            Aux[0] = listaEstado[i - 2];
            Aux[1] = listaEstado[i - 1];
            printf("%s == %s\n", Aux, estado);

            if (strcmp(Aux, estado) == 0)
                return 1;
        }
    }

    return 0;
}
