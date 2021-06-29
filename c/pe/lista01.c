#include <stdio.h>

int questao01(void) {

    float l1, l2, l3;
    printf("Digite o comprimento dos 3 lados (l1 l2 l3): ");
    scanf("%f %f %f", &l1, &l2, &l3);
    printf("Triângulo ");
    if (l1 < l2 + l3 && l2 < l1 + l3 && l3 < l1 + l2) {
        if (l1 == l2 && l1 == l3) {
            printf("Equilátero\n");
        }
        else {
            if (l1 == l2 || l2 == l3 || l1 == l3) {
                printf("Isósceles\n");
            }
            else {
                printf("Escaleno\n");
            }
        }
    }
    else {
        printf("Inválido\n");
    }

    return 0;
}

int questao02(void) {

    int n1, n2;
    printf("Digite dois números inteiros, na mesma linha: ");
    scanf("%d %d", &n1, &n2);
    printf("A soma é %d\n", n1+n2);
    printf("A multiplicação é %d\n", n1*n2);
    printf("A divisão é ");
    switch (n2) {
        case 0:
            printf("impossível\n");
            break;
        default:
            printf("igual a %.2f\n", 1.0*n1/n2);
    }
    printf("A subtração é igual a %d\n", n1-n2);

    return 0;
}

int questao03(void) {

    int idade;
    do {
        printf("Digite sua idade: ");
        scanf("%d", &idade);
    } while (idade < 1);
    printf("Você pertence à Categoria ");
    if (idade < 5) {
        printf("Baby\n");
    }
    else {
        if (idade < 11) {
            printf("Infantil\n");
        }
        else {
            if (idade < 18) {
                printf("Juvenil\n");
            }
            else {
                printf("Master\n");
            }
        }
    }

    return 0;
}

int questao04(void) {

    float preco, aumento, novo_preco;
    do {
        printf("Digite o preço do produto, em reais: ");
        scanf("%f", &preco);
    } while (preco <= 0);
    if (preco <= 50) {
        aumento = preco * 0.05;
    }
    else {
        if (preco <= 100) {
            aumento = preco * 0.1;
        }
        else {
            aumento = preco * 0.15;
        }
    }
    novo_preco = preco + aumento;
    printf("O aumento foi de R$%.2f e esse produto é ", aumento);
    if (novo_preco <= 80) {
        printf("barato\n");
    }
    else {
        if (novo_preco <= 120) {
            printf("normal\n");
        }
        else {
            if (novo_preco <= 200) {
                printf("caro\n");
            }
            else {
                printf("muito caro\n");
            }
        }
    }

    return 0;
}

int questao05(void) {

    float altura, massa_ideal;
    char sexo;
    printf("Digite sua altura: ");
    scanf("%f", &altura);
    do {
        printf("Digite seu sexo (M/F): ");
        scanf(" %c", &sexo);
    } while (sexo != 'M' && sexo != 'F');
    switch (sexo) {
        case 'M':
            massa_ideal = (72.7 * altura) - 58;
            break;
        default:
            massa_ideal = (62.1 * altura) - 44.7;
    }
    printf("Sua massa ideal é de %.2fkg\n", massa_ideal);

    return 0;
}

int questao06(void) {

    int n;
    printf("Digite um número inteiro: ");
    scanf("%d", &n);
    printf("O número %d é ", n);
    if (n % 2 == 0) {
        printf("par\n");
    }
    else {
        printf("ímpar\n");
    }

    return 0;
}

int questao07(void) {

    int h1, h2;
    printf("Digite a quantidade de horas do primeiro professor: ");
    scanf("%d", &h1);
    printf("Digite a quantidade de horas do segundo professor: ");
    scanf("%d", &h2);
    float s1, s2;
    printf("Digite o valor por hora do primeiro professor: ");
    scanf("%f", &s1);
    printf("Digite o valor por hora do segundo professor: ");
    scanf("%f", &s2);
    if (h1*s1 > h2*s2) {
        printf("O primeiro professor tem maior salário\n");
    }
    else {
        if (h2*s2 > h1*s1) {
            printf("O segundo professor tem maior salário\n");
        }
        else {
            printf("Nenhum dos professores tem maior salário\n");
        }
    }


    return 0;
}

int questao08(void) {

    int eleitores, brancos, nulos, validos;
    printf("Digite a quantidade de eleitores: ");
    scanf("%d", &eleitores);
    printf("Digite a quantidade de votos brancos: ");
    scanf("%d", &brancos);
    printf("Digite a quantidade de votos nulos: ");
    scanf("%d", &nulos);
    printf("Digite a quantidade de votos válidos: ");
    scanf("%d", &validos);
    printf("Os votos brancos representam %.2f%% dos eleitores\n", 100.0*brancos/eleitores);
    printf("Os votos nulos representam %.2f%% dos eleitores\n", 100.0*nulos/eleitores);
    printf("Os votos válidos representam %.2f%% dos eleitores\n", 100.0*validos/eleitores);

    return 0;
}

int questao09(void) {

    int capitao, peter, wendy, segundo_turno;
    printf("Digite a quantidade de votos do Capitão Gancho: ");
    scanf("%d", &capitao);
    printf("Digite a quantidade de votos do Peter Pan: ");
    scanf("%d", &peter);
    printf("Digite a quantidade de votos da Wendy: ");
    scanf("%d", &wendy);
    if (capitao > peter && capitao > wendy) {
        if (capitao > peter + wendy) {
            printf("O Capitão Gancho foi eleito\n");
        }
        else {
            segundo_turno = 1;
        }
    }
    else {
        if (peter > wendy) {
            if (peter > capitao + wendy) {
                printf("O Peter Pan foi eleito\n");
            }
            else {
                segundo_turno = 1;
            }
        }
        else {
            if (wendy > capitao + peter) {
                printf("A Wendy foi eleita\n");
            }
            else {
                segundo_turno = 1;
            }
        }
    }
    if (segundo_turno) {
        printf("Haverá segundo turno\n");
    }

    return 0;
}

int questao10(void) {

    int n, n1, n2, n3;
    printf("Digite um número inteiro de quatro dígitos: ");
    scanf("%d", &n);
    n1 = n / 100;
    n2 = n % 100;
    n3 = n1 + n2;
    if (n3*n3 == n) {
        printf("Este número obedece a característica\n");
    }
    else {
        printf("Esse número NÃO obedece a característica\n");
    }


    return 0;
}

int questao11(void) {

    int funcionarios;
    float salario_minimo, vendas;
    printf("Digie a quantidade de funcionários: ");
    scanf("%d", &funcionarios);
    printf("Digite o valor do salário mínimo, em reais: ", &salario_minimo);
    scanf("%f", &salario_minimo);
    printf("Digite o valor das vendas do mês, em reais: ");
    scanf("%f", &vendas);
    printf("Cada funcionário receberá R$%.2f de salário\n", 2.0*salario_minimo + 0.05*vendas/funcionarios);

    return 0;
}

int questao12(void) {

    float saldo, isss;
    printf("Digite seu saldo bacário, em reais: ");
    scanf("%f", &saldo);
    if (saldo < 100) {
        isss = 0;
    }
    else {
        if (saldo < 1000) {
            isss = saldo * 0.01;
        }
        else {
            if (saldo < 10000) {
                isss = saldo * 0.02;
            }
            else {
                if (saldo < 100000) {
                    isss = saldo * 0.03;
                }
                else {
                    isss = saldo * 0.05;
                }
            }

        }
    }
    printf("Seu ISSS será de R$%.2f\n", isss);

    return 0;
}

int questao13(void) {

    struct Voo {
        int h;
        int m;
        int s;
    };
    struct Voo p, c;
    printf("Digite o horário da partida (HH MM SS): ");
    scanf("%d %d %d", &p.h, &p.m, &p.s);
    printf("Digite o horário da chegada (HH MM SS): ");
    scanf("%d %d %d", &c.h, &c.m, &c.s);
    int hora, minuto, segundo;
    segundo = c.s - p.s;
    minuto = c.m - p.m;
    hora = c.h - p.h;
    if (segundo < 0) {
        segundo += 60;
        minuto -= 1;
    }
    if (minuto < 0) {
        minuto += 60;
        hora -= 1;
    }
    printf("A viagem durou %d hora(s), %d minuto(s) e %d segundo(s) no total\n", hora, minuto, segundo);

    return 0;
}

int questao14(void) {

    float taxa_basica, taxa_especial, taxa_cobertura, total;
    printf("Digite o valor da taxa básica do condomínio: ");
    scanf("%f", &taxa_basica);
    taxa_especial = taxa_basica*1.1;
    taxa_cobertura = (taxa_especial*48 + taxa_basica*48)*0.01;
    printf("A taxa de Camboinhas e Piratininga é de R$%.2f\n", taxa_basica);
    printf("A taxa de Itaipu e Itacoatiara é de R$%.2f\n", taxa_especial);
    printf("A taxa de cobertura é de R$%.2f\n", taxa_cobertura);
    total = taxa_basica*48 + taxa_especial*48 + taxa_cobertura*16;
    printf("O síndico arrecadou R$%.2f no total\n", total);

    return 0;
}

int questaoExtra01(void) {

    int n1, n2, n3;
    printf("Os números que possuem a característica são:");
    for (int n=1000; n<10000; n++) {
        n1 = n / 100;
        n2 = n % 100;
        n3 = n1 + n2;
        if (n3*n3 == n) {
            printf(" %d", n);
        }
    }
    printf("\n");

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
    //questaoExtra01();

    return 0;
}
