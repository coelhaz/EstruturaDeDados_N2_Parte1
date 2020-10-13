#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

//Obs: intrNum é Introdução do(s) numéro(s).
void intrNum();
void Maior_Numero(int x, int y,int z);
void imprimirMsg(int xx);

int main(void)
{
    getchar();
	intrNum();
    return 0;
}
void intrNum()
{
    int x;
    int y;
    int z;
    printf("\nDigite um numero:\n");
    printf(">");
    scanf("%d", &x);
    printf("\nDigite um segundo numero:\n");
    printf(">");
    scanf("%d", &y);
    printf("\nDigite um terceiro numero:\n");
    printf(">");
    scanf("%d", &z);
    Maior_Numero(x, y,z);
}
void Maior_Numero(int x, int y,int z){
    int maior =x;

    if(maior<y){
        maior =y;
    }
    if (maior<z)
    {
        maior =z;
    }

   imprimirMsg(maior); 
    
}
void imprimirMsg(int xx)
{
    printf("\n%d e o maior numero encontrado entre eles.\n",xx);
}
