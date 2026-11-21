
#include <stdio.h>

typedef struct {
 char nome[50];
 float salario;
 int horasExtras;
} Funcionario;

int main()
{
    FILE *arquivo;
    Funcionario f;
    int quantidade;
    
    printf("Quantidade de funcionarios: ");
    scanf("%d", &quantidade);
    
    if (quantidade < 1 || quantidade > 5) {
        printf("Quantidade invalida! Digite de 1 a 5.\n");
        return 1;
    }
    
    arquivo = fopen("funcionarios.txt", "a");

    if (arquivo == NULL) {
        printf("Erro ao abrir arquivo!");
        return 1;
    }
    
    for (int i = 0; i < quantidade; i++) {

        printf("\n--- FUNCIONARIO %d ---\n", i + 1);

        printf("Nome: ");
        scanf(" %49[^\n]", f.nome);

        printf("Salario: ");
        scanf("%f", &f.salario);

        printf("Horas extras: ");
        scanf("%d", &f.horasExtras);

        fprintf(arquivo, "%s\n", f.nome);
        fprintf(arquivo, "%.2f\n", f.salario);
        fprintf(arquivo, "%d\n", f.horasExtras);
    }

    fclose(arquivo);

    printf("\nFuncionarios cadastrados com sucesso!\n");

    arquivo = fopen("funcionarios.txt", "r");

    if (arquivo == NULL) {
        printf("Erro ao abrir arquivo para leitura!");
        return 1;
    }

    printf("\n== FUNCIONARIOS CADASTRADOS ==\n");

    while (fscanf(arquivo, " %49[^\n]", f.nome) == 1) {

        fscanf(arquivo, "%f", &f.salario);
        fscanf(arquivo, "%d", &f.horasExtras);

        printf("\nNome: %s\n", f.nome);
        printf("Salario: R$ %.2f\n", f.salario);
        printf("Horas extras: %d\n", f.horasExtras);
    }

    fclose(arquivo);

    return 0;
}

