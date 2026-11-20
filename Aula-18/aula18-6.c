
#include <stdio.h>
#include <string.h>

int calcularFatorial(int numero){
    int fatorial = 1;
    for(int i = 1; i <= numero; i++){
        fatorial = fatorial * i;
    }
    
    return fatorial;
}

int main()
{
    int numero;
    int resultado;
    
    printf("== calculadora de fatorial ==\n");
    printf("Digite um numero: ");
    scanf("%d", &numero);
    
    if(numero < 0 || numero > 12){
        printf("Numero invalido! Digite um valor entre 1 e 12");
    }else{
        resultado = calcularFatorial(numero);
        printf("fatorial de %d = %d\n", numero, resultado);
    }

    
    

    return 0;
}