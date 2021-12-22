#include <iostream>


using namespace std;

int main(int argc, char** argv) {
	int a=17424;
	int b=14568;
	int t=0;
	for(int i =0; i<100; i++)
	{
		if(b<0){
			break;
		}
		else{
		t=b;
		b=a%b;
		a=t;
		}
	cout<< a <<" "<<b<<" "<< t<<endl;
		
	}
	
		
	}
	
	
