#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

typedef struct Carro
{
    float valor;
	char marca[10];
	char cor[10];
    char modelo[20];
    char placa[10];
    
    
} Carro;

void cadastrar();
void pesquisar(Carro carro1,Carro carro2);
void imprimirMsg(Carro carro);

int main(void)
{
    setlocale(LC_ALL, "Portuguese");
    cadastrar();
    getchar();
    return 0;
}
void cadastrar()
{
    Carro carro1;
    Carro carro2;
    
    printf("\nValor:\n");
    printf(">");
    scanf("%f",&carro1.valor);
    printf("\nMarca:\n");
    printf(">");
    fflush(stdin);
    
    gets(carro1.marca);
    printf("\nCor:\n");
    printf(">");
    fflush(stdin);
    fflush(stdin);
    gets(carro2.cor);
    
    printf("\nModelo:\n");
    printf(">");
    fflush(stdin);
    gets(carro1.modelo);

    printf("\nPlaca:\n");
    printf(">");
    fflush(stdin);
    gets(carro1.placa);
    
    printf("\nValor:\n");
    printf(">");
    scanf("%f",&carro2.valor);
    printf("\nMarca:\n");
    printf(">");
    fflush(stdin);
    gets(carro2.marca); 
    
    printf("\nCor:\n");
    printf(">");
    fflush(stdin);
    fflush(stdin);
    gets(carro2.cor);
    
    printf("\nModelo:\n");
    printf(">");
    fflush(stdin);
    gets(carro2.modelo);
    
    printf("\nPlaca:\n");
    printf(">");
    fflush(stdin);
    gets(carro2.placa);
    
    
    
    pesquisar(carro1, carro2);
}
void pesquisar(Carro carro1,Carro carro2)
{
    char placa[20];
    printf("\nSistema de pesquisa\n");
    printf("\nPlaca:\n");
    printf(">");
    fflush(stdin);
    gets(placa);
    if (strcmp(placa,carro1.placa)==0)
    {
        imprimirMsg(carro1);
    }
    if (strcmp(placa,carro2.placa)==0)
    {
        imprimirMsg(carro2);
    }
    
}
void imprimirMsg(Carro carro)
{
    printf("\nIPVA:%.2f",(carro.valor * 0.03));
	printf("\nInformações\n");
    printf("\nMarca:%s",carro.marca);
    printf("\nCor:%s",carro.cor);
    printf("\nModelo:%s",carro.modelo);
    printf("\nPlaca:%s",carro.placa);
    printf("\nValor:%.2f",carro.valor);
    
}

