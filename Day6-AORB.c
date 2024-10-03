#include <stdio.h>

int maxPoints(int X, int Y) {
    // Initial points of problem A and B
    int points_A = 500;
    int points_B = 1000;
    
    int score1 = (points_A - 2 * X) + (points_B - 4 * (X + Y));
    
    int score2 = (points_B - 4 * Y) + (points_A - 2 * (X + Y));
    
    
    return (score1 > score2) ? score1 : score2;
}

int main() {
    int T;
    
    
    scanf("%d", &T);
    
    
    for (int i = 0; i < T; i++) {
        int X, Y;
        
        
        scanf("%d %d", &X, &Y);
        
        
        printf("%d\n", maxPoints(X, Y));
    }

    return 0;
}
