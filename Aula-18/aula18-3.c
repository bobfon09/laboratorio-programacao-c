
#include <stdio.h>
#include <string.h>

int verificarPar(int numero) {
    
    if(numero %2 == 0){
        return 1;
    }else{
        return 0;
    }
    
}

int main()
{
 
 int numero;
 
 printf("== Verificador de Numeros ==\n");
 
 printf("digite um numero: ");
 scanf("%d", &numero);
 
 if(verificarPar(numero) == 1){
     printf("O numero %d é par", numero);
 }else{
     printf("O numero %d e impar.\n", numero);
 }
    
    
    

    return 0;
}