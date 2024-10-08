#include <stdio.h>

int main() {
    int T;
    scanf("%d", &T); // Read the number of test cases

    for (int i = 0; i < T; i++) {
        int X, Y;
        scanf("%d %d", &X, &Y); // Read positions of policeman (X) and thief (Y)

        // Calculate the time taken for the policeman to catch the thief
        if (X >= Y) {
            // Policeman is ahead or at the same position as the thief
            // The relative speed is 1 unit per second
            int time = (X - Y) / (2 - 1);
            printf("%d\n", time);
        } else {
            // Thief is ahead
            // Calculate how long it takes for the policeman to catch the thief
            int time = (Y - X) / (2 - 1);
            printf("%d\n", time);
        }
    }

    return 0;
}