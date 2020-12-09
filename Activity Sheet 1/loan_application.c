#include <stdio.h>

int main() {
    float fAmt, fMs, fMd;
    char cStat;
    int nYrs;

    printf("Enter amount of loan being applied for: ");
    scanf("%f", &fAmt);
    printf("Enter monthly salary: ");
    scanf("%f", &fMs);
    printf("Enter monthly deduction: ");
    scanf("%f", &fMd);
    printf("Enter status (R if regular, C otherwise): ");
    scanf(" %c", &cStat);
    printf("Enter years of service on the current job: ");
    scanf("%d", &nYrs);

    if (!(fAmt > 2 * fMs) && !(fMd > fMs / 3) && (cStat == 'R' || nYrs >= 3))
        printf("Your loan application is APPROVED.\n");
    else
        if (fAmt > 3 * fMs || fMd > fMs / 2)
            printf("Your loan application is DISAPPROVED.\n");
        else
            printf("Your loan application is UNDER REVIEW.\n");
    
    return 0;
}