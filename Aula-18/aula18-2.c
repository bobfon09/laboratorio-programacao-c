#include <stdio.h>



float maiorPreco(float p1 , float p2){
    
    if( p2 > p1) {
       return p2;
    }
    
    else {
        return p1;
    }
}



int main()
{
    
    float p1, p2;
    
    printf("=== Comparador de preços ===\n");
    
    printf("Digite o primeiro preço: \n");
    scanf("%f", &p1);
    
    printf("Digite o segundo preço: \n");
    scanf("%f", &p2);
   
    
    printf("%f", maiorPreco(p1 , p2));
    return 0;
}