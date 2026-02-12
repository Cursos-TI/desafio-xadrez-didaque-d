#include <stdio.h>
int main(){
	int tabuleiro[10][10];
	for(int i = 0; i < 10; i++){
		for(int j = 0; j < 10; j++){
			if((i == 0 && j == 1) || (i == 1 && (j>= 0 && j <= 2))){
				tabuleiro[i][j] = 1;
			}else if((i == 2 && j == 6) || (i == 2 && (j >= 5 && j <=7)) || (i == 3 && (j > 5 && j < 7)) || (i == 1 && j == 6)){
				tabuleiro [i][j] = 2;
			}else if((i == 5 && j == 4)|| (i == 6 && (j > 1 && j < 7)) || (i == 7 && j == 4)){
				tabuleiro[i][j] = 3;
			}
			else{
				tabuleiro[i][j] = 0;
			}			
		}
	}
	for (int i = 0; i < 10; i++){
		for(int j = 0; j < 10; j++){
			printf("%d", tabuleiro[i][j]);
		}
		printf("\n");
	}
}
