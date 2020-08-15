#include <stdio.h>
#define N 5
#define M 1

int mas[N];

void initMassive(){
	int bg = M;
       	printf("massive: ");
	for(int i=0; i<N; i+=1){
		mas[i]=bg;
		bg+=1;
		printf("%d ", mas[i]);
	}
	printf("\n");
}

void printRMassive(){
	printf("reverse massive: ");
	for (int i=N-1; i>=0; i-=1){
		printf("%d ", mas[i] );
	}
	printf("\n");
}


int main(){
	initMassive();
	printRMassive();
	return 0;

}
