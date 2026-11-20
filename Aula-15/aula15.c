
#include <stdio.h>

int main()
{
    int assento[3][4] = {
        {0, 1, 0, 0},
        {1, 1, 0, 1},
        {0, 0, 1, 0}
    };
    
    int totalD = 0;
    int totalO = 0;
    
    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 4; j++){
            if (assento[i][j] == 0){
                totalD += assento[i][j] + 1;
            }
            
            else if(assento[i][j] == 1) {
                totalO += assento[i][j];
            }
        }
    }
    
    printf("Quantidade de assentos ocupados: %d\n", totalO);
    printf("Quantidade de assentos Dispoíveis: %d\n", totalD);
    
    return 0;
}