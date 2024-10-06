#include <stdio.h>

int main() {
    int T;
    scanf("%d", &T); // Read number of test cases

    while (T--) {
        int X, Y;
        scanf("%d %d", &X, &Y); // Read rental cost per month and purchase cost

        if (X <= 0 || Y <= 0) {
            printf("0\n");
            continue;
        }

        // Calculate maximum number of months
        int max_months = (Y - 1) / X; // (Y-1) / X gives the number of months
        printf("%d\n", max_months);
    }

    return 0;
}
