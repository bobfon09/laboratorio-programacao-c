
#include <stdio.h>

int main()
{
    int numero;
    
    printf("Informe um numero: ");
    scanf("%d", &numero);
    printf("endereço do numero: %p", (void *)&numero);

    return 0;
}
