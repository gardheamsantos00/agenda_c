#include <stdio.h> 

typedef struct endereco
{
    char rua[100];
    int numero;
    char complemento[100];
    char bairro[100];
    char cep[8];
    char cidade[50];
    char estado[2];
    char pais[50];
}Endereco;

typedef struct telefone
{
    char ddd[2];
    char numero[9];
}Telefone;

typedef struct data
{
    int dia;
    int mes;
    int ano;
}Data;

typedef struct pessoa
{
    char nome[50];
    char email[100];
    Endereco endereco;
    Telefone telefone;
    Data aniversario;
    char Observacao[100];
}Pessoa;