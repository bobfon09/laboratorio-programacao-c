
#include <stdio.h>

typedef struct{
    char nome[50];
    int idade;
    float salario;
}funcionario;

int main()
{
    funcionario funcionario1;
    funcionario funcionario2;
    float diferenca;
    
        printf("Nome funcionario 1: ");
        scanf("%49s", funcionario1.nome);
        printf("idade funcionario 1: ");
        scanf("%d", &funcionario1.idade);
        printf("Salário funcionario 1: ");
        scanf("%f", &funcionario1.salario);
        
        printf("Nome funcionario 2: ");
        scanf("%49s", funcionario2.nome);
        printf("idade funcionario 2: ");
        scanf("%d", &funcionario2.idade);
        printf("Salário funcionario 2: ");
        scanf("%f", &funcionario2.salario);
        
        if(funcionario1.salario == funcionario2.salario){
            printf("os dois funcionarios recebem o mesmo salário!");
        }else{
            if(funcionario1.salario > funcionario2.salario){
                printf("maior salário: funcionario 1\n");
                diferenca = funcionario1.salario - funcionario2.salario;
                printf("diferença salarial: %.2f", diferenca);
            }else{
                printf("maior salário: funcionario 2\n");
                diferenca = funcionario2.salario - funcionario1.salario;
                printf("diferença salarial: %.2f", diferenca);
            }
        }
        
        
        
        
    

    return 0;
}
