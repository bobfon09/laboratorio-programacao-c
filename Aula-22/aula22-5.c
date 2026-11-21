
#include <stdio.h>

int main() {
    
int numeros[5];

int *p = numeros;

for(int i = 0; i < 5; i++){
    printf("Digite o %d numero: ", i+1);
    scanf("%d", &numeros[i]);
}

printf("Primeiro numero: %d\n", *p);

printf("Segundo numero: %d\n", *(p + 1));

printf("Terceiro numero: %d\n", *(p + 2));

printf("quarto numero: %d\n", *(p + 3));

printf("quinto numero: %d\n", *(p + 4));

return 0;
}


