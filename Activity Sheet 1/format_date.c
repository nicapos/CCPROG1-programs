#include <stdio.h>

int main() {
    int nDate, nDay, nMonth, nYear;

    printf("Enter a date following the format ddmmyyyy:\n");
    scanf("%d", &nDate);

    nDay = nDate / 1000000;
    nMonth = nDate / 10000 % 100;
    nYear = nDate % 10000;

    if (nDay > 0 && nDay < 32 && nMonth > 0 && nMonth < 13 && nYear) {
        printf("Formatted to mm/dd/yyyy: \n");
        
        /* print month */
        printf("%d/", nMonth);

        /* print day */
        if (nDay < 10)
            printf("%0d/", nDay);
        else
            printf("%d/", nDay);

        /* print year */
        if (nYear < 10)
            printf("000%d", nYear);
        else
            if (nYear < 100)
                printf("00%d", nYear);
            else
                if (nYear < 1000)
                    printf("0%d", nYear);
                else
                    printf("%d", nYear);
    } else {
        printf("Invalid date.\n");
    }

    return 0;
}