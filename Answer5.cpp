// C++ program to Count of n digit numbers 
// whose sum of digits equals to given sum 
#include <bits/stdc++.h> 
#include <iostream> 
using namespace std; 
void findCount(int n, int sum) { 
		
		//in case n = 2 start is 10 and end is (100-1) = 99 
		int start = pow(10, n-1); 
		int end = pow(10, 5)-1; 
	
		int count = 0; 
		int i = start; 
		
				while(i <= end) { 
			
			int cur = 0; 
			int temp = i; 
			
			while( temp != 0) { 
				cur += temp % 10; 
				temp = temp / 10;
				
			} 
			 
			if(cur == sum) {
						 
				count++;
				cout<<i<<endl;			 
				i += 9;		 
			}else
				i++; 
			
		}	 
			cout << count; 
			
		/* This code is contributed by Anshuman */
	} 
int main() { 
		int n = 1; 
		int sum = 12;	 
		findCount(n,sum); 
		
	
	return 0; 
} 
