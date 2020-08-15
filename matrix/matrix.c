#include <stdio.h>
#define N 3


void matrix(void){
	int matrix[N][N];
	int num =1;
	for(int i =0; i<N; i+=1){
		for(int j =0; j<N; j+=1){
			matrix[i][j]=num;
			num+=1;
			printf("%d ", matrix[i][j]);
		}
		printf("\n");
	}

}
