#include <stdio.h>

int main() {
    int T;
    scanf("%d", &T); // Read number of test cases

    while (T--) {
        int P, Q, R, S;
        scanf("%d %d %d %d", &P, &Q, &R, &S); // Read profits of companies A, B, C, D

        // Calculate total profit of other companies
        int total_other = Q + R + S;

        // Check for monopoly condition for each company
        if (P > total_other || Q > (P + R + S) || R > (P + Q + S) || S > (P + Q + R)) {
            printf("YES\n");
        } else {
            printf("NO\n");
        }
    }

    return 0;
}

