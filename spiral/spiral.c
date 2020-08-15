#include <stdio.h>
#define N 3
int mas[N][N];

int main(){
	int numQ = N/2+1;
	int count =1;
	int left = 0;
	int right = N-1;
	int smesh =0;
	while(numQ!=0){
			
		for(int i=left; i<=right; i++){
			mas[left][i] = count;
			count++;
 

		}
		
		for(int i=left+1; i<=right; i++){
			mas[i][right] = count;	
			count++;
		}
	
		for(int i=right-1; i>=left; i--){
			mas[right][i] = count;
			count++;
		}
		for(int i=right-1; i>left; i--){
			mas[i][left] = count;
			count++;
		}
		
		smesh=1;
		right-=smesh;
		left+=smesh;
		numQ--;
	}
	
	for(int i =0; i<N; i++){
		for(int j =0; j<N; j++){
			printf("%3d ", mas[i][j]);
		}
		printf("\n");	
	}

	return 0;

}
