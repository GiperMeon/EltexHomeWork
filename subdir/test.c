#include <stdio.h>


int main(){
	char a[10];
	char *ptr;
	ptr = fgets(a, 10, stdin);
	for(int i =0; i<10; i++){
		printf("%c", *ptr);
		ptr++;	
	}

	
	return 0;
}
