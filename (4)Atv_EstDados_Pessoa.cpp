#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

typedef struct Pessoa
{
    char nome[10];
    int NascimentoAno;
    char cpf[11];
    
} Pessoa;

void cadastro();
void pesquisar(Pessoa pessoa1,Pessoa pessoa2);
void imprimir(Pessoa pessoa);

int main(void)
{
    cadastro();
    getchar();
    return 0;
}
void cadastro()
{
    Pessoa pessoa1;
    Pessoa pessoa2;
    
    printf("\n--\n");
    printf("\nNome:\n");
    printf(">");
    fflush(stdin);
    gets(pessoa1.nome);
    
    printf("\nAno de nascimento:\n");
    printf(">");
    scanf("%d",&pessoa1.NascimentoAno);
    
    
    printf("\nCPF:\n");
    printf(">");
    fflush(stdin);
    gets(pessoa1.cpf);
    

    
    printf("\nNome:\n");
    printf(">");
    fflush(stdin);
    gets(pessoa2.nome);
    
    printf("\nAno de nascimento:\n");
    printf(">");
    scanf("%d",&pessoa2.NascimentoAno);

    printf("\nCPF:\n");
    printf(">");
    fflush(stdin);
    gets(pessoa2.cpf);
    

    pesquisar(pessoa1, pessoa2);
}
void pesquisar(Pessoa pessoa1,Pessoa pessoa2)
{
    char cpf[11];
    printf("\n\nPesquisa CPF\n\n");
    printf("\nCPF:\n");
    printf(">");
    fflush(stdin);
    gets(cpf);
    if (strcmp(cpf,pessoa1.cpf)==0)
    {
      imprimir(pessoa1);
    }
    if (strcmp(cpf,pessoa2.cpf)==0)
    {
     imprimir(pessoa2);
    }
    
}
void imprimir(Pessoa pessoa)
{
    printf("\nInformacoes\n");
    printf("\nNome:%s",pessoa.nome);
    printf("\nCPF:%s",pessoa.cpf);
    printf("\nAno de Nascimento:%d",pessoa.NascimentoAno);
    printf("\nIdade:%d",(2019-pessoa.NascimentoAno));
}
