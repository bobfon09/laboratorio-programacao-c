#include <stdio.h>
#include <string.h>

//Lucas Vinha Ortega
//Isabela da Silva Cerqueira
//Hellen Baldotto Franco



int calculos(float dados[5][13], int i) {
    int total = 0;
    float imc;

    if (dados[i][7] > 0) {
        imc = dados[i][6] / (dados[i][7] * dados[i][7]);
    } else {
        imc = 0;
    }

    if (dados[i][0] >= 65) {
        total += 3;
    }

    if (dados[i][1] >= 160) {
        total += 3;
    }

    if (dados[i][2] == 1) {
        total += 3;
    }

    if (dados[i][3] == 1) {
        total += 2;
    }

    if (dados[i][4] == 1) {
        total += 2;
    }

    if (dados[i][5] >= 160) {
        total += 2;
    }

    if (imc >= 30) {
        total += 2;
    }

    if (dados[i][8] == 1) {
        total += 1;
    }

    if (dados[i][9] == 1) {
        total += 1;
    }

    if (dados[i][10] == 1) {
        total += 1;
    }

    if (dados[i][11] == 1) {
        total += 1;
    }

    if (dados[i][12] == 1) {
        total += 1;
    }

    return total;
}

void classificacao(int total) {

    if (total >= 0 && total <= 4) {
        printf("Risco menor que 10%%");

    } else if (total <= 9) {
        printf("Risco entre 10 e 20%%");

    } else if (total <= 14) {
        printf("Risco entre 20 e 30%%");

    } else if (total <= 18) {
        printf("Risco entre 30 e 50%%");

    } else if (total <= 22) {
        printf("Risco acima de 50%%");
    }
}

int main() {

    int pacientes;
    int total;

    char nome[5][50];
    float dados[5][13];

    printf("Quantos pacientes?: ");
    scanf("%d", &pacientes);

    if (pacientes < 1 || pacientes > 5) {
        printf("Quantidade invalida! Informe de 1 a 5 pacientes.\n");
        return 1;
    }

    for (int i = 0; i < pacientes; i++) {

        printf("\nInsira seu nome: ");
        scanf("%49s", nome[i]);

        printf("Insira sua idade: ");
        scanf("%f", &dados[i][0]);

        printf("Insira sua pressao arterial sistolica: ");
        scanf("%f", &dados[i][1]);

        printf("Voce fuma? [1 - sim / 0 - nao]: ");
        scanf("%f", &dados[i][2]);

        printf("Voce tem diabetes? [1 - sim / 0 - nao]: ");
        scanf("%f", &dados[i][3]);

        printf("Voce tem historico de doenca cardiaca? [1 - sim / 0 - nao]: ");
        scanf("%f", &dados[i][4]);

        printf("Insira seu colesterol LDL: ");
        scanf("%f", &dados[i][5]);

        printf("Insira seu peso: ");
        scanf("%f", &dados[i][6]);

        printf("Insira sua altura: ");
        scanf("%f", &dados[i][7]);

        printf("Voce e sedentario? [1 - sim / 0 - nao]: ");
        scanf("%f", &dados[i][8]);

        printf("Sua alimentacao e rica em ultraprocessados? [1 - sim / 0 - nao]: ");
        scanf("%f", &dados[i][9]);

        printf("Voce tem estresse cronico elevado? [1 - sim / 0 - nao]: ");
        scanf("%f", &dados[i][10]);

        printf("Voce tem sono inadequado? [1 - sim / 0 - nao]: ");
        scanf("%f", &dados[i][11]);

        printf("Voce e do sexo masculino? [1 - sim / 0 - nao]: ");
        scanf("%f", &dados[i][12]);
    }

    printf("\n===============================\n");
    printf("SISTEMA DE ANALISE DE RISCO\n");
    printf("===============================\n");

    printf("\nQuantidade de pacientes: %d\n", pacientes);

    for (int i = 0; i < pacientes; i++) {
        printf("\nPaciente %d: %s\n", i + 1, nome[i]);
    }

    printf("\n===============================\n");
    printf("RELATORIO DE RISCO\n");
    printf("===============================\n");

    for (int i = 0; i < pacientes; i++) {

        total = calculos(dados, i);

        printf("\nPaciente: %s.\n", nome[i]);

        printf("Pontuacao: %d\n", total);

        printf("Classificacao: ");
        classificacao(total);

        printf("\n");
    }

    return 0;
}