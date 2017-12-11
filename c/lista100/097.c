/* Escrever um algoritmo e implement�-lo em linguagem C que leia uma matriz de valores
inteiros 5 por 5 e a exiba. A seguir, leia dois n�meros x e y e em seguida troque a x-
�sima linha pela y-�sima linha, a x-�sima coluna com a y-�sima coluna, a diagonal
principal com a secund�ria e, por fim mostre a matriz assim modificada. */
#include <stdio.h>
int main(){
	int matriz[5][5];
	int x, y, troca;
	for(int i = 0; i<5; i++){
		for(int j = 0; j<5; j++){
			scanf(" %d", &matriz[i][j]);
		}
	}
	printf("X: ");
	scanf(" %d", &x);
	printf("Y: ");
	scanf(" %d", &y);
	for(int i = 0; i<5; i++){
		troca = matriz[x][i];
		matriz[x][i] = matriz[y][i];
		matriz[y][i] = troca;
	}
	for(int i = 0; i<5; i++){
		troca = matriz[i][x];
		matriz[i][x] = matriz[i][y];
		matriz[i][y] = troca;
	}
	for(int i = 0, j = 4; i<5; i++, j--){
		troca = matriz[i][i];
		matriz[i][i] = matriz[i][j];
		matriz[i][j] = troca;
	}
	for(int i = 0; i<5; i++){
		for(int j = 0; j<5; j++){
			printf("%d ", matriz[i][j]);
		}
		printf("\n");
	}
	return 0;
}
