#include <stdio.h>
#define N 270533154
#define BYT 3
#define CH 66
int main(){
	int num = N;
	char *ptr;
	ptr = &num;
	printf("Start number\n");	
	for (int i=0; i<sizeof(int); i++){
                printf("%d byte: %d\n", i, *ptr);
		ptr++;
	}
	ptr=&num;
	ptr+=BYT-1;
	*ptr=CH;
	ptr=&num;
	printf("Change number\n");
	for (int i=0; i<sizeof(int); i++){
                printf("%d byte: %d\n", i, *ptr);
                ptr++;
        }
	


	return 0;

}
