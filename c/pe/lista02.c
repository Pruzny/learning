#include <stdio.h>
#include <string.h>

int questao01(void) {

    float massa, total;
    for (int i=1; i<26; i++) {
        printf("Massa da caixa %d: ", i);
        scanf("%f", &massa);
        total += massa;
    }
    printf("A massa carregada pelo caminhão será de %.2fkg\n", total);

    return 0;
}

int questao02(void) {

    float preco, total;
    int quantidade;
    for (int i=1; i<51; i++) {
        printf("Digite a quantidade do produto %d: ", i);
        scanf("%d", &quantidade);
        printf("Digite o preço do produto %d: ", i);
        scanf("%f", &preco);
        total += preco * quantidade;
    }
    printf("A empresa gastou R$%.2f no total\n", total);

    return 0;
}

int questao03(void) {

    int a, b, soma;
    a = 0;
    b = 0;
    do {
        if (a > b) {
            printf("A soma não será realizada\n");
        }
        printf("Digite os valores de A e B (a b): ");
        scanf("%d %d", &a, &b);
    } while (a > b);
    for (int i=a+1; i<b; i++) {
        soma += i;
    }
    printf("A soma dos números entre %d e %d é igual a %d\n", a, b, soma);

    return 0;
}

int questao04(void) {

    int a, b, soma;
    a = 0;
    b = 0;
    do {
        if (a > b) {
            printf("A soma não será realizada\n");
        }
        printf("Digite os valores de A e B (a b): ");
        scanf("%d %d", &a, &b);
    } while (a > b);
    for (int i=a+4-a%4; i<b; i=i+4) {
        soma += i;
    }
    printf("A soma dos números múltiplos de 4 entre %d e %d é igual a %d\n", a, b, soma);

    return 0;
}

int questao05(void) {

    float c, l, total;
    printf("Cômodo 1: digite o comprimento e a largura (c l): ");
    scanf("%f %f", &c, &l);
    int i = 2;
    while (c >= 0 && l >= 0) {
        total += c*l;
        printf("Cômodo %d: digite o comprimento e a largura (c l): ", i++);
        scanf("%f %f", &c, &l);
    }
    printf("A área total é igual a %.2f metros quadrados\n", total);

    return 0;
}

int questao06(void) {

    int n;
    do {
        printf("Digite um número entre 0 e 9: ");
        scanf("%d", &n);
    } while (n<=0 || n>=9);
    for (int i=1; i<10; i++) {
        printf("%d x %d = %d\n", n, i, n*i);
    }

    return 0;
}

int questao07(void) {

    int idade, otimo, bom, regular, pessimo, contador, soma_idade;
    char nota;
    contador = 0;
    soma_idade = 0;
    otimo = 0;
    bom = 0;
    regular = 0;
    pessimo = 0;
    printf("Digite a idade: ");
    scanf("%d", &idade);
    do {
        printf("Digite a nota (O/B/R/P): ");
        scanf(" %c", &nota);
        contador += 1;
        soma_idade += idade;
        switch (nota) {
            case 'O':
                otimo += 1;
                break;
            case 'B':
                bom += 1;
                break;
            case 'R':
                regular += 1;
                break;
            case 'P':
                pessimo += 1;
        }
        printf("Digite a idade: ");
        scanf("%d", &idade);
    } while (idade >= 0);
    printf("=========================\n");
    if (contador != 0) {
        printf("A média da idade dos espectadores é: %.2f\n", 1.0*soma_idade/contador);
        printf("=========================\n");
        printf("Porcentagem das notas:\n");
        printf("Ótimo: %.2f%%\n", 100.0*otimo/contador);
        printf("Bom: %.2f%%\n", 100.0*bom/contador);
        printf("Regular: %.2f%%\n", 100.0*regular/contador);
        printf("Péssimo: %.2f%%\n", 100.0*pessimo/contador);
    }

    return 0;
}

int questao08(void) {

    struct horario {
        int h;
        int m;
    };
    struct horario entrada, saida;
    int hora_total;
    float preco_total = 0.0;
    for (int i=1; i<201; i++) {
        printf("Carro %d: Digite o horário de entrada (HH MM): ", i);
        scanf("%d %d", &entrada.h, &entrada.m);
        printf("Carro %d: Digite o horário de saída (HH MM): ", i);
        scanf("%d %d", &saida.h, &saida.m);
        hora_total = saida.h - entrada.h;
        if (saida.m < entrada.m) {
            hora_total -= 1;
        }
        if (hora_total > 2) {
            preco_total += 2 + hora_total;
        }
        else {
            preco_total += 4;
        }
    }
    printf("A garagem arrecadou R$%.2f em um dia de operação\n", preco_total);

    return 0;
}

int questao09(void) {

    int k, n1, n2, n3;
    do {
        printf("Digite um número: ");
        scanf("%d", &k);
    } while (k < 1);
    n1 = 0;
    n2 = 1;
    printf("Os números da série de Fibonacci menores ou iguals a %d são:\n0", k);
    while (n2 <= k) {
        printf(" %d", n2);
        n3 = n2;
        n2 += n1;
        n1 = n3;
    }
    printf("\n");

    return 0;
}

int questao10(void) {

    float salario, soma_homem=0, soma_mulher=0, maior_30=0, media_homem=0, media_mulher=00;
    int contador_homem=0, contador_mulher=0, idade;
    char sexo;
    printf("Digite a idade: ");
    scanf("%d", &idade);
    while (idade >= 0) {
        printf("Digite o sexo (M/F): ");
        scanf(" %c", &sexo);
        printf("Digite o salário, em reais: ");
        scanf("%f", &salario);
        if (idade < 30 && salario > maior_30) {
            maior_30 = salario;
        }
        switch (sexo) {
            case 'M':
                soma_homem += salario;
                contador_homem++;
                break;
            case 'F':
                soma_mulher += salario;
                contador_mulher++;
                break;
            default:
                printf("Sexo inválido\n");
        }
        printf("Digite a idade: ");
        scanf("%d", &idade);
    }
    if (contador_homem != 0) {
        media_homem = 1.0*soma_homem/contador_homem;
    }
    if (contador_mulher != 0) {
        media_mulher = 1.0*soma_mulher/contador_mulher;
    }
    printf("A média salarial dos homens é de R$%.2f\n", media_homem);
    printf("A média salarial das mulheres é de R$%.2f\n", media_mulher);
    printf("O maior salário abaixo de 30 anos é de R$%.2f\n", maior_30);

    return 0;
}

int questao11(void) {

    int n, a, r;
    printf("Digite quantos termos devem ser mostrados: ");
    scanf("%d", &n);
    printf("Digite o primeiro termo da PA: ");
    scanf("%d", &a);
    printf("Digite a razão da PA: ");
    scanf("%d", &r);
    for (int i=1; i<n+1; i++) {
        printf("a%d = %d\n", i, a);
        a += r;
    }

    return 0;
}

int questao12(void) {

    int n, contador_par=0, contador_impar=0, somatorio_par=0, somatorio_impar=0;
    float media_par, divisao_somatorios;
    printf("Digite um número inteiro: ");
    scanf("%d", &n);
    while (n > 0) {
        if (n % 2 == 0) {
            somatorio_par += n;
            contador_par++;
        }
        else {
            somatorio_impar += n;
            contador_impar++;
        }
        printf("Digite um número inteiro: ");
        scanf("%d", &n);
    }
    if (contador_par > 0) {
        media_par = 1.0*somatorio_par/contador_par;
    }
    if (somatorio_impar > 0) {
        divisao_somatorios = 1.0*somatorio_par/somatorio_impar;
    }
    printf("A quantidade de números pares é igual a %d\n", contador_par);
    printf("A quantidade de números ímpares é igual a %d\n", contador_impar);
    printf("A média dos números pares é igual a %.2f\n", media_par);
    printf("A divisão dos números pares pelos ímpares é igual a %.2f\n", divisao_somatorios);

    return 0;
}

int questao13(void) {

    float preco, maior_preco=0;
    char produto[20], maior_produto[20];
    printf("Digite o nome do produto: ");
    scanf("%s", produto);
    while (strcmp(produto, "XXX")) {
        printf("Digite o preço do produto: ");
        scanf("%f", &preco);
        if (preco > maior_preco) {
            maior_preco = preco;
            strcpy(maior_produto, produto);
        }
        printf("Digite o nome do produto: ");
        scanf("%s", produto);
    }
    printf("O produto mais caro é %s e custou R$%.2f\n", maior_produto, maior_preco);

    return 0;
}

int questao14(void) {

    int n;
    float e=0.0;
    printf("Digite um número inteiro positivo: ");
    scanf("%d", &n);
    if (n > 0) {
        for (int i=0; i<n; i++) {
            e += 1.0/(n-i);
        }
        printf("E = %f\n", e);
    }
    else {
        printf("A expressão não pode ser calculada\n");
    }

    return 0;
}

int questao15(void) {

    int n, fatorial=1;
    printf("Digite um número inteiro não negativo: ");
    scanf("%d", &n);
    if (n < 0) {
        printf("Número negativo\n");
    }
    else {
        for (int i=2; i < n+1; i++) {
            fatorial *= i;
        }
        printf("%d! = %d\n", n, fatorial);
    }

    return 0;
}

int questao16(void) {

    int n, aux, e=0;
    printf("Digite um inteiro positivo: ");
    scanf("%d", &n);
    for (int i=1; i <= n; i++) {
        aux = 1;
        for (int j=0; j < i; j++) {
            aux *= 2;
        }
        e += aux;
    }
    printf("E = %d\n", e);

    return 0;
}

int questao17(void) {

    int voto, joao=0, jose=0, maria=0, branco=0, nulo=0;
    printf("Digite seu voto (0 para sair): ");
    scanf("%d", &voto);
    while (voto != 0) {
        switch (voto) {
            case 1:
                joao++;
                break;
            case 2:
                jose++;
                break;
            case 3:
                maria++;
                break;
            case 4:
                branco++;
                break;
            default:
                nulo++;
                break;
        }
        printf("Digite seu voto (0 para sair): ");
        scanf("%d", &voto);
    }
    printf("João recebeu %d votos\n", joao);
    printf("José recebeu %d votos\n", jose);
    printf("Maria recebeu %d votos\n", maria);
    if (joao > jose && joao > maria) {
        printf("\nJoão ganhou com %d votos\n", joao);
    }
    else {
        if (jose > joao && jose > maria) {
            printf("\nJosé ganhou com %d votos\n", jose);
        }
        else {
            if (maria > joao && maria > jose) {
                printf("\nMaria ganhou com %d votos\n\n", maria);
            }
            else {
                printf("Empate\n");
            }
        }
    }

    return 0;
}

int questaoExtra01(void) {
    int operacao, n1, n2;
    printf("===============\n1 | SOMA\n2 | SUBTRAÇÃO\n3 | MULTIPLICAÇÃO\n4 | DIVISÃO\n5 | FIM\n===============\n");
    printf("Digite a operação: ");
    scanf("%d", &operacao);
    while (operacao != 5) {
        printf("Digite dois números (n1 n2): ");
        scanf("%d %d", &n1, &n2);
        printf("\n");
        switch (operacao) {
            case 1:
                printf("Soma = %d\n", n1+n2);
                break;
            case 2:
                printf("Subtração = %d\n", n1-n2);
                break;
            case 3:
                printf("Multiplicação = %d\n", n1*n2);
                break;
            case 4:
                printf("Divisão = %.2f\n", 1.0*n1/n2);
                break;
        }
        printf("\n");
        printf("===============\n1 | SOMA\n2 | SUBTRAÇÃO\n3 | MULTIPLICAÇÃO\n4 | DIVISÃO\n5 | FIM\n===============\n");
        printf("Digite a operação: ");
        scanf("%d", &operacao);
    }

    return 0;
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
    //questao12();
    //questao13();
    //questao14();
    //questao15();
    //questao16();
    //questao17();
    //questaoExtra01();

    return 0;
}
