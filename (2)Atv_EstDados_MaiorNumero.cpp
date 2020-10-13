#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void setNum();
void MaiorNumero(int a, int b,int c);
void imprimirMsg(int x);

int main(void)
{
    setlocale(LC_ALL,"Portuguese");
    setNum();
    getchar();
    return 0;
}
void setNum()
{
    int a;
    int b;
    int c;
    printf("\nDigite um número:\n");
    printf(">");
    scanf("%d", &a);
    printf("\nDigite um segundo número:\n");
    printf(">");
    scanf("%d", &b);
    printf("\nDigite um terceiro número:\n");
    printf(">");
    scanf("%d", &c);
    MaiorNumero(a, b, c);
}
void MaiorNumero(int a, int b,int c){
    int maior =a;

    if(maior<b){
        maior =b;
    }
    if (maior<c)
    {
        maior =c;
    }

   imprimirMsg(maior); 
    
}
void imprimirMsg(int x)
{
    printf("\n%d é o maior número encontrado entre eles.\n",x);
}
