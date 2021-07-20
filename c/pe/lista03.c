#include <stdio.h>
#include <string.h>

int simetria(int m[5][5]) {

    int simetrico = 1;

    for (int i=0; i<4; i++) {
        for (int j=i+1; j<5; j++) {
            if (m[i][j] != m[j][i]) {
                simetrico = 0;
            }
        }
    }

    return simetrico;
}

void diagonalP(int mdp[5][5]) {

    int soma_dp=0;

    for (int i=0; i<5; i++) {
        soma_dp += mdp[i][i];
    }

    printf("A soma da diagonal principal é igual a %d\n", soma_dp);

}

void diagonalS(int mds[5][5]) {

    int soma_ds=0;

    for (int i=0; i<5; i++) {
        soma_ds += mds[i][5-i];
    }

    printf("A soma da diagonal secundária é igual a %d\n", soma_ds);

}

int questao01(void) {

    char alunos[60][20];
    float nota[60];

    for (int i=0; i<60; i++) {
        printf("Digite o nome do aluno %d: ", i+1);
        scanf(" %[^\n]s", alunos[i]);
        printf("Digite a nota do aluno %d: ", i+1);
        scanf("%f", &nota[i]);
    }
    printf("Os alunos aprovados foram:\n");
    for (int i=0; i<60; i++) {
        if (nota[i] > 6) {
            printf("%s\n", alunos[i]);
        }
    }

    return 0;
}

int questao02(void) {

    int vetor[100], maior=0;

    for (int i=0; i<5; i++) {
        printf("(%d/100) Digite um número: ", i+1);
        scanf("%d", &vetor[i]);
    }

    for (int i=0; i<5; i++) {
        if (vetor[i] % 2 == 0) {
            vetor[i] /= 2;
        }
        else {
            vetor[i] *= 3;
        }

        if (vetor[i] > maior) {
            maior = vetor[i];
        }
    }

    printf("O maior elemento do vetor é igual a %d\n", maior);

    return 0;
}

int questao03(void) {

    int N, acima=0;

    printf("Digite a quantidade de funcionários: ");
    scanf("%d", &N);

    float salarios[N], media=0.0;

    for (int i=0; i<N; i++) {
        printf("Digite o salário do funcionário %d: ", i+1);
        scanf("%f", &salarios[i]);
        media += salarios[i];
    }

    media /= N;

    for (int i=0; i<N; i++) {
        if (salarios[i] > media) {
            acima++;
        }
    }
    printf("A quantidade de salários acima da média é igual a %d\n", acima);

    return 0;
}

int questao04(void) {

    int N, numero, verificador=0;

    printf("Digite um número positivo N: ");
    scanf("%d", &N);

    int fibonacci[N+3];
    fibonacci[0] = 0;
    fibonacci[1] = 1;
    fibonacci[2] = 1;

    for (int i=3; i<N; i++) {
        fibonacci[i] = fibonacci[i-2] + fibonacci[i-1];
    }

    printf("Digite outro número inteiro positivo: ");
    scanf("%d", &numero);

    for (int i=0; i<N; i++) {
        if (fibonacci[i] == numero) {
            verificador = 1;
        }
    }

    if (verificador) {
        printf("O número %d está no vetor de Fibonacci\n");
    }
    else {
        printf("O número %d NÃO está no vetor de Fibonacci\n");
    }

    return 0;
}

int questao05(void) {

    int matriz[10][5];

    for (int i=0; i<10; i++) {
        for (int j=0; j<5; j++) {
            printf("Digite o termo A(%d,%d): ", i+1, j+1);
            scanf("%d", &matriz[i][j]);
        }
    }

    int transposta[5][10];

    for (int i=0; i<10; i++) {
        for (int j=0; j<5; j++) {
            transposta[j][i] = matriz[i][j];
        }
    }

    for (int i=0; i<5; i++) {
        for (int j=0; j<10; j++) {
            printf("%3d ", transposta[i][j]);
        }
        printf("\n");
    }

    return 0;
}

int questao06(void) {

    int matriz[5][5];

    for (int i=0; i<5; i++) {
        for (int j=0; j<5; j++) {
            printf("Digite o termo A(%d,%d): ", i+1, j+1);
            scanf("%d", &matriz[i][j]);
        }
    }

    if (simetria(matriz)) {
        printf("A matriz é simétrica\n");
    }
    else {
        printf("A matriz NÃO é simétrica\n");
    }

    diagonalP(matriz);
    diagonalS(matriz);

    return 0;
}

int main(void) {

    //questao01();
    //questao02();
    //questao03();
    //questao04();
    //questao05();
    //questao06();

    return 0;
}
