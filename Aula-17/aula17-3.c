
#include <stdio.h>
#include <string.h>

int main()
{
 char nome[50];
 char curso[50];
 char copia[50];
 char mensagem[50] = "Olá, ";
 
printf("== IDENTIFICAÇÂO ACADÊMICA ===\n");
printf("Nome do aluno: ");
scanf("%49s", nome);
printf("\nCodigo do curso: ");
scanf("%49s", curso);
printf("\n=== RESULTADO ===\n");
printf("Estudante: %s\n", nome);

if(strcmp(curso, "CC") == 0){
    printf("Curso: Ciências da computação\n");
}else{
    if(strcmp(curso, "SI") == 0){
        printf("Curso: Sistemas da Informação\n");
    }else{
        printf("Nenhuma dos outros cursos.\n");
    }
}
printf("Quantidade de caracteres: %zu\n", strlen(nome));
strcpy(copia, nome);

strcat(mensagem, nome);
printf("%s!\n", mensagem);
printf("Cadastro realizado com sucesso.");

    
    
    

    return 0;
}