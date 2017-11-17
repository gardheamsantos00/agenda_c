#include<stdlib.h>

int BuscaPorDia-Mes(int *vetor, int TAM,int DiaProcurado int MesProcurado){
    int i;
    for(i =0; i < TAM; i++){
        if(DiaProcurado == vetor[i].aniversario.dia && MesProcurado == vetor[i].aniversario.mes){
           return i; // posicao do cara encontrado 
        }
        return -1; // não encontrado
    }

}