/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    char nome[50];
    int quantidade = 0 ;
    
    printf("Escreva um nome: ");
    scanf("%29s", nome);
    
    for(int i = 0; nome[i] != '\0'; i++){
        
            quantidade += 1 ;
        
    }
    
    printf("%d", quantidade);
    
    return 0;
}
