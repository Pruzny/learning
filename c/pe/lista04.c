#include <stdio.h>

void questao01() {

    struct prefeitura {
        float salario;
        int idade;
        int filhos;
    } pessoas[20];

    float media_sal=0.0, media_fil=0.0, maior_sal=0.0;

    for (int i=0; i<20; i++) {
        printf("====================\n");
        printf("PESSOA %02d\n\n", i+1);
        printf("Digite o salário: ");
        scanf("%f", &pessoas[i].salario);
        printf("Digite a idade: ");
        scanf("%d", &pessoas[i].idade);
        printf("Digite o número de filhos: ");
        scanf("%d", &pessoas[i].filhos);

        media_sal += pessoas[i].salario;
        media_fil += pessoas[i].filhos;
        if (pessoas[i].salario > maior_sal) {
            maior_sal = pessoas[i].salario;
        }
    }
    printf("====================\n");

    media_sal /= 20;
    media_fil /= 20;

    printf("A média de salário da população é igual a R$%.2f\n", media_sal);
    printf("A média de número de filhos é igual a %.1f\n", media_fil);
    printf("O maior salário é de R$%.2f\n", maior_sal);

}

void questao02() {

    struct transito {
        char estado[2];
        int veiculos;
        int acidentes;
        float indice;
    } brasil[20];

    int maior_veiculo=0, menor_indice=0, total_acidente=0;

    for (int i=0; i<5; i++) {
        printf("====================\n");
        printf("ESTADO %02d\n\n", i+1);
        printf("Digite a sigla do estado: ");
        scanf(" %s", brasil[i].estado);
        printf("Digite a quantidade de veículos: ");
        scanf("%d", &brasil[i].veiculos);
        printf("Digite a quantidade de acidentes: ");
        scanf("%d", &brasil[i].acidentes);

        total_acidente += brasil[i].acidentes;
        brasil[i].indice = 1.0*brasil[i].acidentes/brasil[i].veiculos;
        if (brasil[i].veiculos > brasil[maior_veiculo].veiculos) {
            maior_veiculo = i;
        }
        if (brasil[i].indice < brasil[menor_indice].indice) {
            menor_indice = brasil[i].indice;
        }
    }
    printf("===================\n\n");

    printf("O estado com maior quantidade de veículos é: %s\n", brasil[maior_veiculo].estado);
    printf("O estado com menor íncide de acidentes é: %s\n", brasil[menor_indice].estado);
    printf("O número total de acidentes é igual a %d\n", total_acidente);

}

void questao03() {

    struct salario {
        float inicial;
        float vendas;
        float final;
    } funcionario;

    int N;
    printf("Digite a quantidade de funcionários: ");
    scanf("%d", &N);

    for (int i=1; i<N+1; i++) {
        printf("Digite o salário do funcionário %d: ", i);
        scanf("%f", &funcionario.inicial);
        printf("Digite o valor das vendas do funcionário %d: ", i);
        scanf("%f", &funcionario.vendas);
        funcionario.final = funcionario.inicial + funcionario.vendas*0.06;
        printf("O salário final do funcionário %d é igual a %.2f\n", i, funcionario.final);
    }

}

void questao04() {

    struct form {
        int ordem;
        float valor;
        char tipo[20];
        char nome[20];
    };
    typedef struct form info;

    int N;
    printf("Digite a quantidade de ordens de serviço: ");
    scanf("%d", &N);

    float media=0.0;
    int maior_preco;
    info servicos[N];
    for (int i=0; i<N; i++) {
        printf("SERVIÇO %02d\n", i+1);
        printf("Digite o número da ordem: ");
        scanf("%d", &servicos[i].ordem);
        printf("Digite o valor: ");
        scanf("%f", &servicos[i].valor);
        printf("Digite o tipo de serviço: ");
        scanf(" %[^\n]s", servicos[i].tipo);
        printf("Digite o nome do cliente: ");
        scanf(" %[^\n]s", servicos[i].nome);

        media += servicos[i].valor;
        if (servicos[i].valor > servicos[maior_preco].valor) {
            maior_preco = i;
        }
    }
    printf("\n");

    media /= N;

    printf("A média dos serviços prestados é igual a %.2f\n", media);
    printf("O cliente que pagou mais caro foi: %s\n", servicos[maior_preco].nome);
    printf("Os clientes que pagaram acima da média foi: \n");
    for (int i=0; i<N; i++) {
        if (servicos[i].valor > media) {
            printf("%s\n", servicos[i].nome);
        }
    }

}

void questao05() {

    struct caracteristicas {
        float altura;
        int idade;
        char olho;
    } habitantes[50];

    float media_idade;
    int idade_acima, maior_altura=0, menor_altura=0, soma_idade=0;

    for (int i=0; i<50; i++) {
        printf("HABITANTE %02d\n", i+1);
        printf("Digite a altura: ");
        scanf("%f", &habitantes[i].altura);
        printf("Digite a idade: ");
        scanf("%d", &habitantes[i].idade);
        printf("Digite a cor dos olhos (A/V/C): ");
        scanf(" %c", &habitantes[i].olho);

        soma_idade += 1.0*habitantes[i].idade;
        if (habitantes[i].altura > habitantes[maior_altura].altura) {
            maior_altura = i;
        }
        if (habitantes[i].altura < habitantes[menor_altura].altura) {
            menor_altura = i;
        }
    }

    media_idade = soma_idade/50.0;
    for (int i=0; i<50; i++) {
        if (habitantes[i].olho == 'C' && habitantes[i].idade > media_idade) {
            idade_acima++;
        }
    }

    printf("A média das idades é igual a %.1f anos\n", media_idade);
    printf("A maior altura é igual a %.2fm\n", habitantes[maior_altura].altura);
    printf("A menor altura é igual a %.2fm\n", habitantes[menor_altura].altura);
    printf("A quantidade de pessoas de olhos castanhos e idade acima da média é igual a %d\n", idade_acima);

}

void questao06() {
    // Assumindo os meses com 30 dias e sem ano bissexto

    struct dma {
        int dia;
        int mes;
        int ano;
    } inicio, fim;

    int periodo_dias=0;

    printf("Digite a data inicial (DD MM AAAA): ");
    scanf("%d %d %d", &inicio.dia, &inicio.mes, &inicio.ano);
    printf("Digite a data final (DD MM AAAA): ");
    scanf("%d %d %d", &fim.dia, &fim.mes, &fim.ano);
    periodo_dias = (fim.ano-inicio.ano)*360 + (fim.mes-inicio.mes)*30 + fim.dia-inicio.dia;

    printf("Decorreram %d dias entre as duas datas\n", periodo_dias);

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
