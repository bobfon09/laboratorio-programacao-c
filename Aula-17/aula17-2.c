
#include <stdio.h>
#include <string.h>

int main()
{
 char nome[50];
 char categoria[50];
 char copia[50];
 char mensagem[50] = "Descrição: ";
 
printf("== CADASTRO DE PRODUTO ===\n");
printf("\nDigite o nome do produto: ");
scanf("%49s", nome);
printf("\ndigite seu perfil: ");
scanf("%49s", categoria);
printf("\n=== RESUMO ===\n");
printf("Produto: %s\n", nome);
printf("Quantidade de caracteres: %zu\n", strlen(nome));
if(strcmp(categoria, "PERIFERICO") == 0){
    printf("categoria: PERIFERICO\n");
}else{
    if(strcmp(categoria, "HARDWARE") == 0){
        printf("categoria: HARDWARE\n");
    }else{
        printf("Nenhuma das outras categorias.\n");
    }
}

strcpy(copia, nome);

strcat(mensagem, nome);
printf("%s!\n", mensagem);
printf("Cadastro realizado com sucesso.");

    
    
    

    return 0;
}