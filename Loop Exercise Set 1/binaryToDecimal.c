// Write a program that accepts as input a binary number and displays its corresponding decimal equivalent. Declare your integer variables as long. A long declaration accommodates 8 digits for a number. 

#include <stdio.h>

int main() {
    long int bin, n = 0;
    int power = 1;

    printf("Enter a binary number: ");
    scanf("%ld", &bin);

    while (bin) {
        n += bin % 10 * power;
        bin /= 10;
        power *= 2;
    }

    printf("Decimal equivalent: %ld\n", n);
    return 0;
}