#include <iostream>
#include <stdlib.h>
#include <stdio.h>
int main() {
	int size;
	int matris[size][size];
	int yenimatris[size][size];
	int random=0;
    printf("Matris boyutunu giriniz :");
    scanf("%d",&size);
    for(int i=0;i<size;i++){
    	random=0;
    	for(int j=0;j<size;j++){
    		random=rand() %255;
    		matris[i][j]=random; 
    		random=0;
		}
	}
	printf("Eski matris :\n");
	for(int i=0;i<size;i++){
		for(int j=0;j<size;j++){
			printf("%d ",matris[i][j]);
		}
		printf("\n");
	}
	
	for(int x=0;x<size;x++){
    	for(int y=0;y<size;y++){
    		yenimatris[x][y]=matris[x][y-1]+matris[x][y+1]+matris[x-1][y]+matris[x+1][y];
    		
		}
		
	}
	printf("Yeni matris :\n");
	for(int i=0;i<size;i++){
		for(int j=0;j<size;j++){
			printf("%d ",yenimatris[i][j]);
		}
		printf("\n");
	}
}