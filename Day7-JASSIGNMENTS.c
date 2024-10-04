#include <stdio.h>

int main() {
    int T, X;
    
    // Read the number of test cases
    scanf("%d", &T);
    
    for (int i = 0; i < T; i++) {
        // Read the starting time X
        scanf("%d", &X);
        
        // Check if Janmansh can finish all assignments by 10 pm
        if (X + 3 <= 10) {
            printf("Yes\n");
        } else {
            printf("No\n");
        }
    }
    
    return 0;
}

