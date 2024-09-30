#include <stdio.h>

int main() {
	// your code goes here
	int T; // number of test cases
    scanf("%d", &T);
    
    while(T--) {
        int X;   // working hours from Monday to Thursday
        int Y;  // working hours on Friday
        scanf("%d", &X);
        scanf("%d", &Y);
        
        // Total working hours = 4 * X (Monday to Thursday) + Y (Friday)
        int total_hours = 4 * X + Y;
        printf("%d\n", total_hours);
    }

}

