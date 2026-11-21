
#include <stdio.h>

int main()
{
    int numero = 20;
    int *ponteiro;
    
    ponteiro = &numero;
    
    printf("Numero: %d\n", numero);
    printf("Endereco armazenado no ponteiro: %p\n", (void *)ponteiro);
    printf("Valor acessado pelo ponteiro: %d\n", *ponteiro);

    
    

    return 0;
}
