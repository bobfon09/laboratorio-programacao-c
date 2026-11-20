
#include <stdio.h>
#include <string.h>

int dobro(int numero) {
    return numero * 2;
}

int main()
{
 
 int numero;
 int duplicacao;
 printf("== Quantidade de estoque ==\n");
 
 printf("quantidade incial: ");
 scanf("%d", &numero);
 duplicacao = dobro(numero);
 
 printf("Quantidade após duplicação: %d", duplicacao);
 
 
    
    
    

    return 0;
}