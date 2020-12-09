#include <stdio.h>

int main() {
    float f1, f2, fAnswer = 0;
    char cOperator;

    printf("What do you want to compute?\n");
    scanf("%f%c%f", &f1, &cOperator, &f2);

    switch (cOperator) {
        case '+':   fAnswer = f1 + f2;
                    break;
        case '-':   fAnswer = f1 - f2;
                    break;
        case '*':   fAnswer = f1 * f2;
                    break;
        case '/':   fAnswer = f1 / f2;
    }

    printf("%f%c%f is equal to %f\n", f1, cOperator, f2, fAnswer);
    return 0;
}