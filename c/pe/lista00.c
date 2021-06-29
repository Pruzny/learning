#include <stdio.h>
#include <math.h>

int questao01(void) {

    float b, h;
    do {
        printf("Digite base e altura válidas (b h): ");
        scanf("%f %f", &b, &h);
    } while (b <= 0 && h <= 0);
    float area, perimetro, diagonal;
    area = b*h;
    perimetro = 2*b + 2*h;
    diagonal = sqrt(b*b + h*h);
    printf("A área do retângulo é: %.2f\n", area);
    printf("O perímetro do retângulo é: %.2f\n", perimetro);
    printf("A diagonal do retângulo é: %.2f\n", diagonal);

    return 0;
}

int questao02(void) {

    char nome[20];
    float consumo, preco, conta;
    printf("Digite seu primeiro nome: ");
    scanf("%s", &nome);
    printf("Digite o consumo mensal, em quilowatts: ");
    scanf("%f", &consumo);
    printf("Digite o preço de um quilowatt: R$");
    scanf("%f", &preco);
    conta = consumo * preco;
    printf("A conta de luz de %s foi de: R$%.2f\n", nome, conta);

    return 0;
}

int questao03(void) {

    float salario_minimo, preco_quilowatt, consumo, conta;
    printf("Digite o valor de um salário mínimo: ");
    scanf("%f", &salario_minimo);
    printf("Digite o consumo, em quilowatts: ");
    scanf("%f", &consumo);
    preco_quilowatt = salario_minimo/10.0;
    conta = consumo * preco_quilowatt;
    printf("O preço do quilowatt é de R$%.2f\n", preco_quilowatt);
    printf("A conta de energia do usuário é de R$%.2f\n", conta);

    return 0;
}

int questao04(void) {

    float salario_fixo, vendas, salario_final;
    printf("Digite o salário do funcionário: ");
    scanf("%f", &salario_fixo);
    printf("Digite o valor de suas vendas: ");
    scanf("%f", &vendas);
    salario_final = salario_fixo + 0.04*vendas;
    printf("O salário final do funcionário é de: R$%.2f\n", salario_final);

    return 0;
}

int questao05(void) {

    int horas, minutos, segundos;
    printf("Digite as horas e minutos (HH MM): ");
    scanf("%d %d", &horas, &minutos);
    minutos += horas*60;
    segundos = minutos * 60;
    printf("A conversão em minutos é de %d e em segundos é de %d\n", minutos, segundos);

    return 0;
}

int questao06(void) {

    float salario, contas, restante;
    printf("Digite o valor do salário em reais: ");
    scanf("%f", &salario);
    printf("Digite o valor das contas, em reais: ");
    scanf("%f", &contas);
    restante = salario - contas*1.02;
    printf("O resto do salário será de R$%.2f\n", restante);

    return 0;
}

int questao07(void) {

    float n1, n2, n3, media;
    printf("Digite as 3 notas na mesma linha: ");
    scanf("%f %f %f", &n1, &n2, &n3);
    media = (n1 + n2 + n3)/3.0;
    printf("A média é igual a %.2f\n", media);

    return 0;
}

int questao08(void) {

    float n1, p1, n2, p2, n3, p3, media;
    printf("Digite cada nota na mesma linha: ");
    scanf("%f %f %f", &n1, &n2, &n3);
    printf("Digite seus respectivos pesos na mesma linha: ");
    scanf("%f %f %f", &p1, &p2, &p3);
    media = (n1*p1 + n2*p2 + n3*p3)/(p1+p2+p3);
    printf("A média é igual a %.2f\n", media);

    return 0;
}

int questao09(void) {

    float salario;
    printf("Digite o salário do funcionário: ");
    scanf("%f", &salario);
    salario *= 0.9;
    printf("O novo salário será de R$%.2f\n", salario);

    return 0;
}

int questao10(void) {

    float grau_c, grau_f;
    printf("Digite a temperatura em graus Celsius: ");
    scanf("%f", &grau_c);
    grau_f = 1.8*grau_c + 32;
    printf("A temperatura em graus Fahrenheit será igual a %.2f\n", grau_f);

    return 0;
}

int questao11(void) {

    float salario_funcionario, salario_minimo, razao;
    printf("Digite o salário do funcionário: ");
    scanf("%f", &salario_funcionario);
    printf("Digite o salário mínimo: ");
    scanf("%f", &salario_minimo);
    razao = salario_funcionario/salario_minimo;
    printf("O funcionário recebe %.2f salários mínimos\n", razao);

    return 0;
}

int questao12(void) {

    int nascimento, anos, meses, semanas;
    printf("Digite seu ano de nascimento: ");
    scanf("%d", &nascimento);
    anos = 2021 - nascimento;
    meses = anos * 12;
    semanas = anos * 52.1429;
    printf("Você tem %d anos, ou %d meses, ou %d semanas\n", anos, meses, semanas);

    return 0;
}

int questao13(void) {

    int x, y;
    printf("Digite 2 números inteiros (x y): ");
    scanf("%d %d", &x, &y);
    printf("A soma é %d, a subtração é %d, a multiplicação é %d e a divisão é %.2f\n", x+y, x-y, x*y, 1.0*x/y);

    return 0;
}

int questao14(void) {

    int a, b;
    printf("Digite 2 números (A B): ");
    scanf("%d %d", &a, &b);
    printf("(Antes)  A = %d / B = %d\n", a, b);
    b += a;
    a = b-a;
    b -= a;
    printf("(Depois) A = %d / B = %d\n", a, b);

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

    return 0;
}
