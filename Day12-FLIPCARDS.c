#include <stdio.h>

int main() {
    int T; // Number of test cases
    scanf("%d", &T);

    while (T--) {
        int N, X; // N - total cards, X - face-up cards
        scanf("%d %d", &N, &X);

        // Calculate the number of face-down cards
        int Y = N - X;

        // The minimum flips needed to make all cards face the same direction
        // Either flip all face-up to face-down or all face-down to face-up
        int min_flips = (X < Y) ? X : Y;

        printf("%d\n", min_flips);
    }

    return 0;
}

