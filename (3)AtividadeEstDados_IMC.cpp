#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


typedef struct Pessoa
{
    char nome[10];
    float altura;
    float peso;
    float imc;
    
} Pessoa;

void cadastro();
void calculo_IMC(Pessoa pessoa);
void imprimirMsgIMC(Pessoa pessoa);
void imprimirMsg(Pessoa pessoa);

int main(void)
{
    char();
    cadastro();
    return 0;
}
void cadastro()
{
    Pessoa pessoa;
    printf("\nNome:\n");
    printf(">");
    fflush(stdin);
    gets(pessoa.nome);
    printf("\nAltura:\n");
    printf(">");
    scanf("%f",&pessoa.altura);
    printf("\nPeso:\n");
    printf(">");
    scanf("%f",&pessoa.peso);
    calculo_IMC(pessoa);
}
void calculo_IMC(Pessoa pessoa)
{
    pessoa.imc = pessoa.peso /(pessoa.altura*pessoa.altura);
    imprimirMsgIMC(pessoa);
    imprimirMsg(pessoa);
}
void imprimirMsgIMC(Pessoa pessoa)
{
    printf("\nSeu IMC � %.1f\n",pessoa.imc);
}
void imprimirMsg(Pessoa pessoa)
{
    printf("\nOla %s, Seu status �...\n",pessoa.nome);
    if (pessoa.imc<18.5)
    {
        printf("\nAbaixo do peso\n");
    }else if(pessoa.imc >= 18.5 && pessoa.imc < 25){
        printf("\nPeso normal\n");
    }else if(pessoa.imc >= 25 && pessoa.imc < 30){
        printf("\nSobrepeso\n");
    }else if(pessoa.imc >= 30 && pessoa.imc < 35){
        printf("\nObesidade grau 1\n");
    }else if(pessoa.imc >= 35 && pessoa.imc < 40){
        printf("\nObesidade grau 2\n");
    }else if(pessoa.imc >= 40){
        printf("\nObesidade grau 3\n");
    }
    
}
