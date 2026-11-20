%f#include <stdio.h>

float n1, n2;
    int opcao;
    float resultado;

void exibirMenu(void) {
        printf("\n=== Calculadora ===\n");
        
        printf("1 - somar\n");
        printf("2 - subtrair\n");
        printf("3 - multiplicar\n");
        printf("4 - dividir\n");
        printf("0 - sair\n");
        
        printf("Escolha uma opção: ");
        scanf("%d", &opcao);
        
        
    }
    
    void numeros(void) {
        printf("escolha o primeiro numero: ");
        scanf("%f", &n1);
    
        printf("escolha o segundo numero: ");
        scanf("%f", &n2);
    }
    
    float somar(float n1, float n2) {
        return n1 + n2;
    }
    
    float subtrair(float n1, float n2) {
        return n1 - n2;
    }
    
    float multiplicar(float n1, float n2) {
        return n1 * n2;
    }
    
    float dividir(float n1, float n2) {
        return n1 / n2;
    }
    
    
   


int main()
{
    do {
    
    exibirMenu(); 
    
    if(opcao == 0 ) {
        printf("encerrando o programa....\n");
        break;
    }
    
    if (opcao >= 1 && opcao <= 4) {
        numeros();
    }
    
    switch(opcao){
        
        
        case 1:
        resultado = somar(n1 , n2);
        printf("\n somar: %.0f\n", resultado);
        break;
        
        case 2: 
        resultado = subtrair(n1 , n2);
        printf("\n subtrair: %.0f\n", resultado);
        break;
        
        case 3: 
        resultado = multiplicar(n1 , n2);
        printf("\n multiplicar: %.2f\n", resultado);
        break;
        
        case 4: 
        resultado = dividir(n1 , n2);
        printf("\n dividir: %.2f\n", resultado);
        break;
        
        default:
        printf("\n opção inválida! \n");
        break;
        
        
    }
    
}
    
    while(opcao != 0);
   

    return 0;
}
