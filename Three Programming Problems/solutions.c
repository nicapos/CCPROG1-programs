int CountDigits(int n) {
    int x = 0;
    while (n > 0) {
        n /= 10;
        x += 1;
    }
    
    return x;
}

int SumDigits(int n) {
    int sum = 0;
    while (n != 0) {
        sum += n % 10;
        n /= 10;
    }
    
    return sum;
}

void displayReverse(int n) {
    while (n != 0) {
        printf("%d", n % 10);
        n /= 10;
    }
}
