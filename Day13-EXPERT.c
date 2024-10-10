#include <stdio.h>

int main() {
    int T; // Number of test cases
    scanf("%d", &T);

    while (T--) {
        long long X, Y; // X = problems submitted, Y = problems approved
        scanf("%lld %lld", &X, &Y);
        
        // Check if the number of approved problems is at least 50% of submitted problems
        if (Y * 2 >= X) {
            printf("YES\n");
        } else {
            printf("NO\n");
        }
    }

    return 0;
}

