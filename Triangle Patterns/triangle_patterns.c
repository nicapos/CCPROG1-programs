/* UNFINISHED */

#include <stdio.h>

void pattern1(int N) {
    int nRow, nCol;
    
    for (nRow = 1; nRow <= N; ++nRow) {
        for (nCol = 1; nCol <= nRow; ++nCol) {
            printf("*");
        }
        printf("\n");
    }
}

void pattern2(int N) {
    int nRow, nCol;
    
    for (nRow = 1; nRow <= N; ++nRow) {
        for (nCol = 1; nCol <= nRow; ++nCol) {
            if (nRow == nCol)
                printf("%d", nRow);
            else
                printf("*");
        }
        printf("\n");
    }
}

void pattern3(int N) {
    int nRow, nCol;
    
    for (nRow = 1; nRow <= N; ++nRow) {
        for (nCol = 1; nCol <= nRow; ++nCol) {
            printf("%d", nRow);
        }
        printf("\n");
    }
}

void pattern4(int N) {
    int nRow, nCol;
    int i = 1;
    
    for (nRow = 1; nRow <= N; ++nRow) {
        for (nCol = 1; nCol <= nRow; ++nCol) {
            printf("%d", i % 10);
            i += 1;
        }
        printf("\n");
    }
}

void pattern5(int N) {
    int nRow, nCol;
    
    for (nRow = 1; nRow <= N; ++nRow) {
        for (nCol = 1; nCol <= N; ++nCol) {
            if (nCol > N - nRow)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
}

void pattern6(int N) {
    int nRow, nCol;
    int nLineLength = N * 2 - 1;
    
    for (nRow = 1; nRow <= N; ++nRow) {
        for (nCol = 1; nCol <= nLineLength; ++nCol) {
            if (nCol <= N - nRow || nCol > nLineLength - N + nRow)
                printf(" ");
            else
                printf("*");
        }
        printf("\n");
    }
}

void pattern7(int N) {
    int nRow, nCol;
    int nLineLength = N * 2 - 1;
    
    for (nRow = 1; nRow <= N; ++nRow) {
        for (nCol = 1; nCol <= nLineLength; ++nCol) {
            if (nCol <= N - nRow || nCol > nLineLength - N + nRow)
                printf(" ");
            else
                printf("%d", nRow);
        }
        printf("\n");
    }
}

void pattern8(int N) {
    int nRow, nCol;
    int i = 1;
    int nLineLength = N * 2 - 1;
    
    for (nRow = 1; nRow <= N; ++nRow) {
        for (nCol = 1; nCol <= nLineLength; ++nCol) {
            if (nCol <= N - nRow || nCol > nLineLength - N + nRow)
                printf(" ");
            else {
                printf("%d", i % 10);
                i += 1;
            }
        }
        printf("\n");
    }
}

void pattern9(int N) {
    int nRow, nCol;
    int i;
    int nLineLength = N * 2 - 1;
    
    for (nRow = 1; nRow <= N; ++nRow) {
        i = 1;
        for (nCol = 1; nCol <= nLineLength; ++nCol) {
            if (nCol <= N - nRow || nCol > nLineLength - N + nRow) {
                printf(" ");
            } else {
                if (i % 2 == 0)
                    printf("A");
                else
                    printf("*");
                i += 1;
            }
        }
        printf("\n");
    }
}

void pattern10(int N) {
    int nRow, nCol;
    int nLineLength = N * 2 - 1;
    
    for (nRow = N; nRow >= 1; --nRow) {
        for (nCol = 1; nCol <= nLineLength; ++nCol) {
            if (nCol <= N - nRow || nCol > nLineLength - N + nRow)
                printf(" ");
            else
                printf("*");
        }
        printf("\n");
    }
}

void pattern11(int N) {
    int i, j;
    for (i = 1; i <= N; ++i) {
        for (j = 1; j <= N; ++j)
            printf("*");
        printf("\n");
    }
}

void pattern12(int N) {
    int i, j;
    for (i = 1; i <= N; ++i) {
        for (j = 1; j <= N; ++j) {
            if (i == 1 || i == N)
                printf("*");
            else
                if (j == 1 || j == N)
                    printf("*");
                else
                    printf(" ");
        }
        printf("\n");
    }
}

void pattern13(int N) {
    int X, Y;
    for (X = 1; X <= N; ++X) {
        for (Y = 1; Y <= N; ++Y) {
            if (X > N / 2) {
                if (Y <= N - X || Y > X)
                    printf(" ");
                else
                    printf("*");
            } else {
                if (Y > N - X + 1 || Y < X)
                    printf(" ");
                else
                    printf("*");
            }
        }
        printf("\n");
    }
}

void pattern14(int N) {
    int X, Y;
    int i = 0;
    for (X = 1; X <= N; ++X) {
        for (Y = 1; Y <= N; ++Y) {
            if (X > N / 2) {
                if (Y <= N - X || Y > X) {
                    printf("%d", i % 10);
                    i += 1;
                } else
                    printf("*");
            } else {
                if (Y > N - X + 1 || Y < X) {
                    printf("%d", i % 10);
                    i += 1;
                } else
                    printf("*");
            }
        }
        printf("\n");
    }
}

int main() {
    int N;

    printf("Enter N: ");
    scanf("%d", &N);
    
    pattern1(N);
    //pattern2(N);
    //pattern3(N);
    //pattern4(N);
    //pattern5(N);
    //pattern6(N);
    //pattern7(N);
    //pattern8(N);
    //pattern9(N);
    //pattern10(N);
    //pattern11(N);
    //pattern12(N);
    //pattern13(N);
    //pattern14(N);

    return 0;
}
