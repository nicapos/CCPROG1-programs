#include <stdio.h>

int main() {
    /*
    4% tax on net income
    net income = gross income - (3000 * dependents)
    tax = (gross income - 3000 * dependents) * 0.04
    print different between tax owed and tax deducted
        positive - send check
        negative - refund
    */
    float fGrossIncome, fTDeducted, fTOwed;
    int nDependents;

    printf("Enter gross income: ");
    scanf("%f", &fGrossIncome);
    printf("Enter number of dependents: ");
    scanf("%d", &nDependents);
    printf("Enter amount of deducted tax: ");
    scanf("%f", &fTDeducted);

    fTOwed = (fGrossIncome - 3000 * nDependents) * 0.04;
    if (fTOwed > fTDeducted)
        printf("SEND CHECK for %.2f\n", fTOwed - fTDeducted);
    else
        if (fTOwed < fTDeducted)
            printf("REFUND %.2f\n", fTDeducted - fTOwed);

    return 0;
}