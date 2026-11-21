
#include <stdio.h>

typedef struct{
        char nome[50];
        int matricula;
    }funcionario;

int main()
{
    FILE *arquivo;
    
    funcionario f;
    
    
    
    arquivo = fopen("funcionarios.txt", "w");
    
    if (arquivo == NULL) {
        printf("Erro ao abrir arquivo!");
        return 1;
    }
    
    for(int i = 0; i < 5; i++){
        
        printf("== Cadastro de Funcionario ==\n");
        printf("Informe seu nome: ");
        scanf("%49s", f.nome);
        printf("Informe sua matricula: ");
        scanf("%d", &f.matricula);
        
        fprintf(arquivo, "Nome: %s\n", f.nome);
        fprintf(arquivo, "Matricula: %d\n", f.matricula);
        
    
    }
    
    fclose(arquivo);

    printf("\nDados gravados com sucesso!\n");
    
    

    return 0;
}
