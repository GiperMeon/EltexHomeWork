#include <stdio.h>

#define N 10 

int tMatrix[N][N];

void trianMatrix(){
	int temp=N-2;
	for (int i=0; i<N; i++){
		for(int j =0; j<N; j++){
		
			if (j>temp){
				tMatrix[i][j]=1;
				continue;
			}
			tMatrix[i][j]=0;
		}	
		temp-=1;
	}
}

void printMatrix(){
	for(int i=0; i<N; i++){
		for(int j=0; j<N; j++){
			printf("%d ", tMatrix[i][j]);
		}
		printf("\n");
	}
}


int main(){
	trianMatrix();
	printMatrix();	
	return 0;
}
