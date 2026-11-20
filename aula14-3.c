
#include <stdio.h>

int main()
{
    int matriz[3][3];
    int soma  = 0;
    
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            printf("Insira os numeros da matriz: \n");
            scanf("%d", &matriz[i][j]);
        }
    }
    
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            soma += matriz[i][j];
            
        }
    }
    
    printf("Soma da matriz: %d", soma);
    
    

    return 0;
}