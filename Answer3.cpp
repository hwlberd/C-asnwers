
#include <iostream>
using namespace std;
int main() {
	int sayi;
	int satir;
	int sutun;
	int matris[3][3];
	int matris2[2][2];
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			printf("%d - %d  matris elamanini girin: ", i+1, j+1);
			scanf_s("%d", &sayi);
			matris[i][j] = sayi;
		}

	}
	printf("silinecek satiri giriniz :");
	scanf_s("%d", &satir);
	if (satir > 2 || satir < 0) {
		printf("satir sayisi 2den fazla 0dan az girilemez");
		return false;
	}
	printf("silinecek sutunu giriniz :");
	scanf_s("%d", &sutun);
	if (sutun > 2 || sutun < 0) {
		printf("satir sayisi 2den fazla 0dan az girilemez");
		return false;
	}
	int a = 0;
	int b = 0;
	for (int i = 0; i < 3; i++) {
		
		
		
		for (int j = 0; j < 3; j++) {
			if (i == satir) {
				i = i + 1;
			}

			if (j == sutun) {
				j = j + 1;
			}
			
				matris2[a][b] = matris[i][j];
				
				
			
			b++;
		}
		b = 0;
		a++;
	}
	printf("2x2 matris : \n");
	for (int i = 0; i < 2; i++) 
	{
		for (int j = 0; j < 2; j++)
		{
			printf("%d ", matris2[i][j]);
		}
		printf("\n");
	}
	

}
	
	
	
