#include <iostream>
#include <stdlib.h>
#include <stdio.h>
int main() {
	int dizi[8][8]={{0,0,0,0,0,0,0,0},
	{0,0,1,1,1,0,0,0},
	{0,0,0,1,0,0,0,0},
	{0,0,0,1,0,0,0,0},
	{0,0,0,0,0,0,0,0},
	{0,0,0,0,0,0,0,0},
	{0,0,0,0,0,0,0,0},
	{0,0,0,0,0,0,0,0}};

for(int i=0;i<8;i++){
	for(int j=0;j<8;j++){
		if(dizi[i][j]==1){
			if(dizi[i][j+1]==1){
				if(dizi[i][j+2]==1){
					dizi[i][j+1]=1;
					dizi[i-1][j+1]=1;
					dizi[i+1][j+1]=1;
					dizi[i+2][j+1]=0;
					dizi[i][j+2]=0;
					dizi[i][j]=1;
					dizi[i][j-1]=1;					
					}
				}
				
			}
		}
	}
for(int i=0;i<8;i++){
	for(int j=0;j<8;j++){
		printf("%d",dizi[i][j]);
	}
	printf("\n");	
}	
}

	

