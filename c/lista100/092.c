/* Elabore um programa em C, para ler valores e armazen�-los em uma matriz 5 x 5. Ap�s o
programa dever� responder se a matriz � ou n�o uma matriz sim�trica. Uma matriz
sim�trica possui a mesma composi��o de valores abaixo e acima da diagonal principal. */
#include <stdio.h>
int main(){
	int matriz[5][5];
	int simetrica = 1;
	for(int i = 0; i<5; i++){
		for(int j = 0; j<5; j++){
			scanf(" %d", &matriz[i][j]);
		}
	}
	for(int i = 0; i<5; i++){
		for(int j = i+1; j<5; j++){
			if(matriz[i][j] != matriz[j][i])
			    simetrica = 0;
		}
	}
	if(simetrica == 1)
	    puts("Ok");
	else
	    puts("Nao");
	return 0;
}
