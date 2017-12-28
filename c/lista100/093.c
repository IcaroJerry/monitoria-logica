/*Fa�a um programa em C para ler valores e armazen�-los em uma matriz D 5 x 5. A seguir
o programa dever� calcular a soma dos valores que comp�em a diagonal principal e a
diagonal secund�ria da matriz.*/
#include <stdio.h>
int main(){
	int matriz[5][5];
	int somaPrincipal = 0, somaSecundaria = 0;
	for(int i = 0; i<5; i++){
		for(int j = 0; j<5; j++){
			scanf(" %d", &matriz[i][j]);
		}
	}
	for(int i = 0; i<5; i++)
	    somaPrincipal += matriz[i][i];
	for(int i = 0, j = 4; i<5; i++, j--)
		somaSecundaria += matriz[i][j];
	printf("Principal: %d\nSecundaria: %d\n", somaPrincipal, somaSecundaria);
	return 0;
}
