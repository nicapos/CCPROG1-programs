#include <stdio.h>

void num1() {
    int i = 0;
    do
        printf("%d\n", i++);
    while (i <= 10);
}

void num2() {
    int i = 10;
    do
        printf("%d\n", i--);
    while (i >= 0);
}

void num3() {
    int i = 0;
    do {
        if (i % 2 == 0)
            printf("%d\n", i);
        i++;
    } while (i <= 10);
}

void num4() {
    int i = 0;
    do {
        if (i % 2 == 1)
            printf("%d\n", i);
        i++;
    } while (i <= 10);
}

void num5() {
    int i = 10;
    do {
        if (i % 2 == 0)
            printf("%d\n", i);
        i--;
    } while (i >= 0);
}

void num6() {
    int i = 10;
    do {
        if (i % 2 == 1)
            printf("%d\n", i);
        i--;
    } while (i >= 0);
}

int main() {

    num1();
    //num2();
    //num3();
    //num4();
    //num5();
    //num6();
    
    return 0;
}