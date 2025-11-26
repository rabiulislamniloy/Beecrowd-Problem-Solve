#include <stdio.h>

int main() {
    int A,B,C;
    scanf("%d %d %d", &A, &B, &C);
    if (A+ B<=C||A+C<=B||B+C<=A)
    {
        printf("Invalido\n");
        return 0;
    }

    if (A+=B&&B==C)
        printf("Valido-Equilatero\n");
    else if (A==B||A==C||B==C)
        printf("Valido-Isoceles\n");
    else
        printf("Valido-Escaleno\n");

    int ret=0;
    if (A*A==B*B+C*C) ret=1;
    if (B*B == A*A + C*C) ret=1;
    if (C*C == A*A + B*B) ret=1;

    if (ret)
        printf("Retangulo: S\n");
    else
        printf("Retangulo: N\n");

    return 0;
}

