#include <stdio.h>

int main() {
	// your code goes here
	int T;             // Number Of Test Cases
	scanf("%d", &T);
	
	while (T--) {
	    int N;        // number of friends
	    int X;        // cost of one subscription
	    scanf("%d", &N);
	    scanf("%d", &X);
	    
	    //calculate the number of subscriptions needed
	    int subscriptions = (N+5)/6;  
	    
	    //calculate total cost
	    int total_cost = subscriptions * X;
	    
	    //output the result
	    printf("%d\n", total_cost);
	    
	    
	}
return 0;
}

