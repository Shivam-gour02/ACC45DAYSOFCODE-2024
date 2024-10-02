#include <stdio.h>

int main() {
	// your code goes here
	int T;
	scanf("%d", &T);
	
	while (T--){
	    int B1;
	    int B2;
	    int B3;
	    
	    scanf("%d",&B1);
	    scanf("%d",&B2);
	    scanf("%d",&B3);
	    
	    // count the number of empty bottles
	    
	    int Empty_Count = (B1 == 0) + (B2 == 0) + (B3 == 0);
	    
	    if (Empty_Count >= 2) {
	        printf("Water filling time\n");
	    } else {
	        printf("Not now\n");
	        
	    }
	        
	    }
	    return 0;

}

