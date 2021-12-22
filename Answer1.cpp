

#include <iostream>
using namespace std;
int main(){
	
	int sayi;
	char car;
	do {
		printf("bir sayi giriniz : ");
		scanf_s("%d", &sayi);
		if (sayi == 0) {
			break;
		}
		
		printf("bir karakter giriniz: ");
		scanf_s(" %c",&car,1);

		printf(" cikti :");

		for (int i = 0; i < sayi; i++) {
			printf(" %c", car);
		}
		printf("\n");
		
		
	} while (sayi > 0);
	printf("program sonlandi");
}

