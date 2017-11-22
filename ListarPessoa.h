    #include <stdio.h>
    #include <pessoa.h>

   void ListarPessoa(Pessoa vet[],int quantidade)
{
    int i, j, cont = 0;
    char nomeAux[50];
    
    for(i=0;i<quantidade;i++)
    {
        for(j=0;j<quantidade-1;j++)
        {
            if(strcmp(vet[j].nome,vet[j+1].nome) > 0)
            {
                strcpy(nomeAux,vet[j+1].nome);
                strcpy(vet[j+1].nome,vet[j].nome);
                strcpy(vet[j].nome,nomeAux);
            }
        }
    }
}
