#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void setNum();
void pesquisar(int a, int b);
void imprimirMsg(int x);
void imprimirMsg();

int main(void)
{
    setlocale(LC_ALL, "Portuguese");
    setNum();
    getchar();
    return 0;
}

void setNum()
{
    int a;
    int b;
    printf("\nDigite o primeiro n�mero:\n");
    printf(">");
    scanf("%d", &a);
    printf("\nDigite o segundo n�mero:\n");
    printf(">");
    scanf("%d", &b);
    pesquisar(a, b);
}
void pesquisar(int a, int b)
{
    int pesquisa;
    printf("\nDigite um n�mero que seja pesquisado:\n");
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
    printf("\nN�mero %d  foi encontrado\n", x);
}
void imprimirMsg()
{
    printf("\nN�mero n�o foi encontrado\n");
}

