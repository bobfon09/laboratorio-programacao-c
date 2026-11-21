
#include <stdio.h>

int main(void) {
    
int numero = 15;

int *ponteiro = &numero;

printf("Valor inicial: %d\n", numero);

*ponteiro = 50;

printf("Valor atualizado: %d\n", numero);

return 0;

}
