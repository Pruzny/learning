#include <stdio.h>

int palindromo(int normal) {

    int aux, inverso=0;
    aux = normal;

    while (aux > 0) {
        inverso = inverso*10 + aux%10;
        aux /= 10;
    }

    if (normal == inverso) {
        return 1;
    }
    else {
        return 0;
    }

}

float media(float atleta[30][6], int k) {

    int maior=0, menor=0;
    float soma=0.0;
    for (int i=0; i<6; i++) {
        if (atleta[k][i] > atleta[k][maior]) {
            maior = i;
        }
        if (atleta[k][i] < atleta[k][menor]) {
            menor = i;
        }
        soma += atleta[k][i];
    }
    soma -= (atleta[k][maior] + atleta[k][menor]);

    return (soma/4);
}

int tamanho(char t[100], int l) {

    if (t[l] == '\0') {
        return 0;
    }
    else {
        return 1 + tamanho(t, l+1);
    }

}

int dentro(char f[100], char p[100]) {


    int contador_p=0, contador_f=0, letras;
    letras = tamanho(p, 0);
    while (contador_p < letras && contador_f < 100) {
        contador_f++;
        if (p[contador_p] == f[contador_f]) {
            contador_p++;
        }
    }

    if (contador_p == letras) {
        return 1;
    }
    else {
        return 0;
    }

}

int mdc(int x, int y) {
    if (y <= x && x % y == 0) {
        return y;
    }
    else if (x < y) {
        return mdc(y, x);
    }
    else {
        return mdc(y, x%y);
    }
}

int imprimeSerie(int i, int j, int k) {
    if (i >= j) {
        return 0;
    }
    printf("%d ", i);
    return imprimeSerie(i+k, j, k);
}

int quociente(int dividendo, int divisor) {
    if (dividendo < divisor) {
        return 0;
    }
    else {
        return 1 + quociente(dividendo-divisor, divisor);
    }
}

void questao01() {

    int n;

    printf("Digite um número: ");
    scanf("%d", &n);
    while (n >= 0) {
        if (palindromo(n)) {
            printf("%d é um número palíndromo\n\n", n);
        }
        else {
            printf("%d NÃO é um número palíndromo\n\n", n);
        }

        printf("Digite um número: ");
        scanf("%d", &n);
    }

}

void questao02() {

    float notas[30][6];

    for (int i=0; i<30; i++) {
        printf("ATLETA %02d\n", i+1);
        for (int j=0; j<6; j++) {
            printf("Nota %d: ", j+1);
            scanf("%f", &notas[i][j]);
        }
        printf("\n");
    }

    printf("MÉDIAS\n");
    for (int j=0; j<30; j++) {
        printf("Atleta %02d: %.1f\n", j+1, media(notas, j));
    }

}

void questao03() {

    char frase[100], palavra[100];
    printf("Digite uma frase: ");
    scanf(" %[^\n]s", frase);
    printf("Digite uma palavra: ");
    scanf(" %s", palavra);

    if (dentro(frase, palavra)) {
        printf("A palavra está dentro da frase\n");
    }
    else {
        printf("A palavra NÃO está dentro da frase\n");
    }

}

void questao04() {

    int n1, n2;
    printf("Digite 2 números (x y): ");
    scanf("%d %d", &n1, &n2);

    printf("O MDC entre %d e %d é igual a %d\n", n1, n2, mdc(n1, n2));

}

void questao05() {

    int n1, n2, r;
    printf("Digite o número inicial: ");
    scanf("%d", &n1);
    printf("Digite o número final: ");
    scanf("%d", &n2);
    printf("Digite o intervalo da série: ");
    scanf("%d", &r);

    printf("Os números dessa série são:\n", n1, n2);
    imprimeSerie(n1, n2, r);
    printf("\n");

}

void questao06() {

    int quantidade;
    char s[100];
    printf("Digite o conteúdo da string: ");
    scanf(" %[^\n]s", s);

    printf("O tamanho da string é %d\n", tamanho(s, 0));

}

void questao07() {

    int a, b;
    printf("Digite o valor de A: ");
    scanf("%d", &a);
    printf("Digite o valor de B: ");
    scanf("%d", &b);

    printf("O quociente de A/B é igual a %d\n", quociente(a, b));

}

void questao08() {

    int estoque[30], maior=0, menor=0, soma;
    float media;

    for (int i=0; i<30; i++) {
        printf("Digite o estoque do dia %02d: ", i+1);
        scanf("%d", &estoque[i]);
        soma += estoque[i];
        if (estoque[i] > estoque[maior]) {
            maior = i;
        }
        else if (estoque[i] < estoque[menor]) {
            menor = i;
        }
    }

    media = 1.0*soma/30;

    printf("A média mensal de estoque foi igual a %.0f\n", media);
    printf("A maior quantidade de estoques foi igual a %d\n", estoque[maior]);
    printf("A menor quantidade de estoques foi igual a %d\n", estoque[menor]);

}

void questao09() {

    int n;
    printf("Digite um número: ");
    scanf("%d", &n);
    while (n > 0) {
        printf("Tabuada até %d:\n", n);
        for (int i=1; i<n+1; i++) {
            for (int j=1; j<n+1; j++) {
                printf(" %3d", i*j);
            }
            printf("\n");
        }
        printf("\n");
        printf("Digite um número: ");
        scanf("%d", &n);
    }

}

void questao10() {

    struct aluno {
        char nome[30];
        float nota[4];
        int ano;
        float media;
    };

    int n;
    printf("Digite a quantidade de alunos: ");
    scanf("%d", &n);

    struct aluno turma[n];
    float maior_media;

    for (int i=0; i<n; i++) {
        printf("ALUNO %02d\n", i+1);
        printf("Digite o nome do aluno: ");
        scanf(" %[^\n]s", turma[i].nome);
        printf("Digite as notas do aluno (N1 N2 N3 N4): ");
        scanf("%f %f %f %f", &turma[i].nota[0], &turma[i].nota[1], &turma[i].nota[2], &turma[i].nota[3]);
        printf("Digite o ano de ingressão do aluno: ");
        scanf("%d", &turma[i].ano);
        turma[i].media = 1.0*(turma[i].nota[0] + turma[i].nota[1] + turma[i].nota[2] + turma[i].nota[3])/4;
        if (turma[i].media > maior_media) {
            maior_media = turma[i].media;
        }
        printf("\n");
    }

    printf("Quem obteve a maior média:\n");
    for (int i=0; i<n; i++) {
        if (turma[i].media == maior_media) {
            printf("%s\n", turma[i].nome);
        }
    }


}

void questao11() {

    int n;
    printf("Digite o tamanho dos vetores: ");
    scanf("%d", &n);

    float x[n], y[n];
    printf("Preencha o vetor X\n");
    for (int i=0; i<n; i++) {
        printf("X[%d]: ", i);
        scanf("%f", &x[i]);
    }
    printf("\n");
    printf("Preencha o vetor Y\n");
    for (int i=0; i<n; i++) {
        printf("Y[%d]: ", i);
        scanf("%f", &y[i]);
    }

    int acao=1;

    while (acao != 0) {
        printf("===================================\n");
        printf("1 - Somar X e Y\n");
        printf("2 - Subtrair Y de X\n");
        printf("3 - Pesquisar um elemento em X e Y\n");
        printf("4 - Mostrar X e Y\n");
        printf("\n0 - Finalizar programa\n");
        printf("===================================\n");

        printf("Digite a ação: ");
        scanf("%d", &acao);
        printf("\n");

        switch (acao) {
            case 0:
                break;
            case 1:
                printf("X + Y =");
                for (int i=0; i<n; i++) {
                    printf(" %.2f", x[i]+y[i]);
                }
                printf("\n");
                break;
            case 2:
                printf("X - Y =");
                for (int i=0; i<n; i++) {
                    printf(" %.2f", x[i]-y[i]);
                }
                printf("\n");
                break;
            case 3:
                int num, verificador=0;
                printf("Digite um número: ");
                scanf("%d", &num);
                for (int i=0; i<n; i++) {
                    if (num == x[i] || num == y[i]) {
                        verificador = 1;
                    }
                }
                if (verificador) {
                    printf("O número %d está em pelo menos um dos vetores\n");
                }
                else {
                    printf("O número %d não está em nenhum dos vetores\n");
                }
                break;
            case 4:
                printf("X =");
                for (int i=0; i<n; i++) {
                    printf(" %.2f", x[i]);
                }
                printf("\nY=");
                for (int i=0; i<n; i++) {
                    printf(" %.2f", y[i]);
                }
                printf("\n");
                break;
            default:
                printf("Opção inválida\n");
        }
        printf("\n");
    }

}

int main(void) {

    //questao01();
    //questao02();
    //questao03();
    //questao04();
    //questao05();
    //questao06();
    //questao07();
    //questao08();
    //questao09();
    //questao10();
    //questao11();

    return 0;
}
