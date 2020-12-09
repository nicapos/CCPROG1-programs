#include <stdio.h>

int main() {
    int nInput, nHundreds, nThousands, nMillions;

    printf("**********NUMBER SEPARATOR**********\n");
    printf("Please input a 9 digit number! (or less)\n");
    scanf("%d", &nInput);

    nHundreds = nInput % 1000;
    nThousands = nInput / 1000 % 1000;
    nMillions = nInput / 1000000;

    printf("You would write that normally as\n");

    if (nMillions) {
        printf("%d,", nMillions);
        if (nThousands >= 100)
            printf("%d,", nThousands);
        else
            if (nThousands >= 10)
                printf("0%d,", nThousands);
            else
                printf("00%d,", nThousands);
        if (nHundreds >= 100)
            printf("%d", nHundreds);
        else
            if (nHundreds >= 10)
                printf("0%d", nHundreds);
            else
                printf("00%d", nHundreds);
    } else {
        if (nThousands) {
            printf("%d,", nThousands);
            if (nHundreds >= 100)
                printf("%d", nHundreds);
            else
                if (nHundreds >= 10)
                    printf("0%d", nHundreds);
                else
                    printf("00%d", nHundreds);
        } else {
            printf("%d", nHundreds);
        }

    }

    printf("\nThank You!\n");
    printf("************************************\n");

    return 0;
}