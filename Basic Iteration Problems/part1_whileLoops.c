#include <stdio.h>

void num1() {
    int i = 0;
    while (i <= 10)
        printf("%d\n", i++);
}

void num2() {
    int i = 10;
    while (i >= 0)
        printf("%d\n", i--);
}

void num3() {
    int i = 0;
    while (i <= 10) {
        if (i % 2 == 0)
            printf("%d\n", i);
        i++;
    }
}

void num4() {
    int i = 0;
    while (i <= 10) {
        if (i % 2 == 1)
            printf("%d\n", i);
        i++;
    }
}

void num5() {
    int i = 10;
    while (i >= 0) {
        if (i % 2 == 0)
            printf("%d\n", i);
        i--;
    }
}

void num6() {
    int i = 10;
    while (i >= 0) {
        if (i % 2 == 1)
            printf("%d\n", i);
        i--;
    }
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