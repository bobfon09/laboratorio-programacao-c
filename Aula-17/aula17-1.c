
#include <stdio.h>
#include <string.h>

int main()
{
 char nome[50];
 char perfil[50];
 char copia[50];
 char mensagem[50] = "Bem vindo(a), ";
 
printf("== CADASTRO DE DADOS ===\n");
printf("\ndigite seu nome: ");
scanf("%49s", nome);
printf("\ndigite seu perfil: ");
scanf("%49s", perfil);
printf("\n=== DADOS CADASTRADOS ===\n");
printf("Nome: %s\n", nome);
if(strcmp(perfil, "ADMIN") == 0){
    printf("Perfil: ADMIN");
}else{
    printf("Perfil diferente de admin");
}
printf("\nQuantidade de caracteres: %zu\n", strlen(nome));
strcpy(copia, nome);

strcat(mensagem, nome);
printf("%s!\n", mensagem);
printf("Cadastro realizado com sucesso.");

    
    
    

    return 0;
}