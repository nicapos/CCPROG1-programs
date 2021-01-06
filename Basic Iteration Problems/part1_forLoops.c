#include <stdio.h>

void num1() {
    int i;
    for (i = 0; i <= 10; ++i)
        printf("%d\n", i);
}

void num2() {
    int i;
    for (i = 10; i >= 0; --i)
        printf("%d\n", i);
}

void num3() {
    int i;
    for (i = 0; i <= 10; ++i)
        if (i % 2 == 0)
            printf("%d\n", i);
}

void num4() {
    int i;
    for (i = 0; i <= 10; ++i)
        if (i % 2 == 1)
            printf("%d\n", i);
}

void num5() {
    int i;
    for (i = 10; i >= 0; --i)
        if (i % 2 == 0)
            printf("%d\n", i);
}

void num6() {
    int i;
    for (i = 10; i >= 0; --i)
        if (i % 2 == 1)
            printf("%d\n", i);
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