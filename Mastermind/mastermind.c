#include <stdio.h>

void MasterMind(int N, int X) {
    int n1, n2, n3, x1, x2, x3;

    n1 = N / 100;
    n2 = N / 10 % 10;
    n3 = N % 10;
    x1 = X / 100;
    x2 = X / 10 % 10;
    x3 = X % 10;

    if (x1 == n1)
        printf("*");
    else
        if (x1 == n2 || x1 == n3)
            printf("+");
        else
            printf("-");

    if (x2 == n2)
        printf("*");
    else
        if (x2 == n1 || x2 == n3)
            printf("+");
        else
            printf("-");
    
    if (x3 == n3)
        printf("*");
    else
        if (x3 == n1 || x3 == n2)
            printf("+");
        else
            printf("-");
}

int main() {
    int N;
    int X;

    scanf("%d", &N);
    scanf("%d", &X);

    MasterMind(N, X);
    return 0;
}