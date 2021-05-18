#include <stdio.h>

struct Ponto {
    double x;
    double y;
};

struct Reta {
    struct Ponto p1;
    struct Ponto p2;
};

int intersecao(struct Reta r1, struct Reta r2) {
    double a1 = (r1.p2.y - r1.p1.y) / (r1.p2.x - r1.p1.x);
    double a2 = (r2.p2.y - r2.p1.y) / (r2.p2.x - r2.p1.x);
    if (a1 == a2) {
        if (r1.p1.x != r2.p1.x) {
            if (((r1.p1.y - r2.p1.y) / (r1.p1.x - r2.p1.x) != a1) || ((r1.p1.y - r2.p1.y) / (r1.p1.x - r2.p1.x) != -a1)) {
                return 0;
            }
        }
        else {
            if (r1.p2.x != r2.p2.x) {
                if (((r1.p2.y - r2.p2.y) / (r1.p2.x - r2.p2.x) != a1) || ((r1.p2.y - r2.p2.y) / (r1.p2.x - r2.p2.x) != -a1)) {}
                return 0;
            }
        }
    }
    return 1;
}

int main() {

    struct Reta reta1, reta2;
    printf("RETA 1\n");
    printf("Ponto 1 (x y):\n");
    scanf("%lf %lf", &reta1.p1.x, &reta1.p1.y);
    printf("Ponto 2 (x y):\n");
    scanf("%lf %lf", &reta1.p2.x, &reta1.p2.y);
    printf("\nRETA 2\n");
    printf("Ponto 1 (x y):\n");
    scanf("%lf %lf", &reta2.p1.x, &reta2.p1.y);
    printf("Ponto 2 (x y):\n");
    scanf("%lf %lf", &reta2.p2.x, &reta2.p2.y);

    if (intersecao(reta1, reta2)) {
        printf("As retas se intersectam.\n");
    }
    else {
        printf("As retas NÃO se intersectam.\n");
    }

    return 0;
}
