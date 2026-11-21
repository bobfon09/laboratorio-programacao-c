
#include <stdio.h>

void dobrar(int *numero) {
    
*numero = *numero * 2;

}

int main() {
    
int valor;

printf("Insira um valor: ");
scanf("%d", &valor);

dobrar(&valor);

printf("Valor: %d\n", valor);

return 0;
}

