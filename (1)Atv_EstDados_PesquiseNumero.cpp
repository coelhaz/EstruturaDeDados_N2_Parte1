#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

//Obs: intrNum é Introdução do(s) numéro(s).
void intrNum();
void pesquisar(int a, int b);
void imprimirMsg(int x);
void imprimirMsg();

int main(void)
{
    getchar();
    intrNum();
    return 0;
}

void intrNum()
{
    int a;
    int b;
    printf("\nDigite o primeiro numero:\n");
    printf(">");
    scanf("%d", &a);
    printf("\nDigite o segundo numero:\n");
    printf(">");
    scanf("%d", &b);
    pesquisar(a, b);
}
void pesquisar(int a, int b)
{
    int pesquisa;
    printf("\nDigite um numero que seja pesquisado:\n");
    printf(">");
    scanf("%d", &pesquisa);
    if (pesquisa == a || pesquisa == b)
    {
        imprimirMsg(pesquisa);
    }
    else
    {
        imprimirMsg();
    }
}
void imprimirMsg(int x)
{
    printf("\nNumero %d  foi encontrado\n", x);
}
void imprimirMsg()
{
    printf("\nNumero não foi encontrado\n");
}

