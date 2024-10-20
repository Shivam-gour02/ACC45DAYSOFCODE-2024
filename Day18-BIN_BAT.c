#include <stdio.h>

int main() {
    int T; // Number of test cases
    scanf("%d", &T);

    while (T--) {
        int N, A, B; // N: number of teams, A: duration of each round, B: length of breaks
        scanf("%d %d %d", &N, &A, &B);

        // Calculate the number of rounds
        int rounds = 0;
        while (N > 1) {
            N /= 2;
            rounds++;
        }

        // Total time = (number of rounds * duration of each round) + (number of breaks * length of breaks)
        int total_time = (rounds * A) + ((rounds - 1) * B);
        
        printf("%d\n", total_time);
    }

    return 0;
}

