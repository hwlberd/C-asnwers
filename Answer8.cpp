#include <stdio.h>
#include <iostream>
int main() {
    int i, n, t1 = 0, t2 = 1, nextTerm,sum;
    
    printf("Enter the number of terms: ");
    scanf("%d", &n);
    printf("Fibonacci Series: ");
do{
	
        printf("%d, ", t2);
        nextTerm = t1 + t2;
        t1 = t2;
        t2 = nextTerm;
        sum=sum+t1;
    
    
    if(sum==n){
    	break;
	}
	
    
}
while(sum<=n);
    
}