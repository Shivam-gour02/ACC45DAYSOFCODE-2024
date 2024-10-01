#include <stdio.h>

int main() {
	// your code goes here.
	 int A;
	 int B;
	 int C;
	 int X;

    // Read the input values
    scanf("%d",&A);
    scanf("%d",&B);
    scanf("%d",&C);
    scanf("%d",&X);

    // Check if X matches any of the prepared topics
    if (X == A || X == B || X == C) {
        printf("Yes\n");
    } else {
        printf("No\n");
    }

return 0;

}

