

#include <iostream>
using namespace std;
int main(){
	
	int sayi;
	int sayi2 = 1;
	do {
		printf("\n%d. sayiyi giriniz : ",sayi2);
		scanf_s("%d", &sayi);
		if (sayi == 0) {
			break;
		}
		printf("cikti :");
			
			if (sayi % 2 == 0) {
				for (int i = 0; i <= sayi; i=i+sayi2) {
					printf("%d ", i);
													}
								}
			else {
				for (int i = sayi; i > 0; i = i - sayi2) {
					printf("%d ", i);
															}
					}
			sayi2 = sayi2 + 1;
	} while (sayi > 0);
	printf("program sonlandi");
}

