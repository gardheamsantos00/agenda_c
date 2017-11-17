#include<stdlib.h>
// recebe um vetor , o tamanho do vetor e mesprocurado, vai retornar
// só se encontrou ou não, a impressão faz em outro lugar
int buscaPorMes(int *vetor, int TAM,int mesProcurado){
    int i;
    for(i = 0; i < TAM; i++){
        if(mesProcurado == vetor[i].aniversario.mes){
            //printf("%s", &vetor[i]);
            return i; // mes encontrado
        }
        return -1; // mes não encontrado
    }
}