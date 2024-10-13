#include <stdio.h>

int main() {
    int T; // Number of test cases
    int pagesPerKg = 1000; // Pages that can be made from 1 kg of pulp
    int pagesPerNotebook = 100; // Pages in one notebook

    // Input the number of test cases
    scanf("%d", &T);

    for (int i = 0; i < T; i++) {
        int N; // Amount of pulp in kg
        scanf("%d", &N);

        // Calculate the total pages from N kg of pulp
        int totalPages = N * pagesPerKg;

        // Calculate the number of notebooks
        int numberOfNotebooks = totalPages / pagesPerNotebook;

        // Output the result for the current test case
        printf("%d\n", numberOfNotebooks);
    }

    return 0;
}
