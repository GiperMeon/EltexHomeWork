#include <stdio.h>
#include <stdlib.h>
#define N 100
#define M 100

int main(){
	unsigned char temp[1];
	struct abonent{
		unsigned char name[N];
		unsigned char phone[N];
		unsigned int id;
	};
	unsigned char sName[N];
	struct abonent subdir[M];
	struct abonent *next;
	struct abonent *begin;
	char *str;
	char tempID[4];
	int numID;
	str = &tempID[0];
	printf("Hello!\n 1 - add abonent\n 2 - search abonent\n 3 - all abonents\n 9 - delete abonent\n q - exit\n");
	gets(temp);
	int all = 0;
	while(temp[0] !='q' ){
		switch(temp[0]){
			case '1':
				printf("Enter Name (max %d simbols)\n", N);
				gets(subdir[all].name);
				printf("Enter Phone (max %d simbols)\n", N);
				gets(subdir[all].phone);
				subdir[all].id=all;
				all++;

				break;
			case '2':
				printf("Search Name (max %d simbols)\n", N);
				gets(sName);
				for(int i = 0; i < all; i++){
					int search =0;
					int count =0;
					for(int j = 0; j < N; j++){
						if( sName[j] == subdir[i].name[j] ){
						       	if( sName[j] == (char)0 ){
								search=i;
								count++;
							}
							
							continue;
						
						}
						else break;
					}
					if( count > 0 ){

						printf("%d ", subdir[search].id);
						for(int j = 0; j < N; j++){
        	                                        printf("%c", subdir[search].name[j]);
						} 
                        	                printf(" ");
                                	        for(int j = 0; j < N; j++){
                                               	 	printf("%c", subdir[search].phone[j]);
                                       		}
                                        	printf("\n");

					}
				}
					
				break;
			case '3':
				for(int i = 0; i < all; i++){
					printf("%d ", subdir[i].id);
					for(int j = 0; j < N; j++){
						//if(sibdir[i].name[j]==0)
						printf("%c", subdir[i].name[j]);
					} 
					printf(" ");
					for(int j = 0; j < N; j++){
						//if(sibdir[i].name[j]==0)
						printf("%c", subdir[i].phone[j]);
					}
					printf("\n");
				}
				break;
			case '9':
					
				printf("Enter ID contacts\n");
				gets(tempID);
				numID = atoi(str);
				/*for(int j =0; j<N; j++){
                                                //if(sibdir[i].name[j]==0)
                                        subdir[numID].name[j] = (char)0;
                                }
                                for(int j =0; j < P; j++){
                                                //if(sibdir[i].name[j]==0)
                                        subdir[numID].phone[j] = (char)0;
                                }*/
				for(int i = numID; i<all-1; i++){
					
					for(int j =0; j<N; j++){
                                                //if(sibdir[i].name[j]==0)
                                        	subdir[i].name[j] = subdir[i+1].name[j];
                                	}
					
					for(int j =0; j<N; j++){
                                                //if(sibdir[i].name[j]==0)
                                        	subdir[i].phone[j] = subdir[i+1].phone[j];
                                	}
					subdir[i].id = subdir[i+1].id-1;
				}
				all--;
				break;
				
		}

		printf(" all conacts: %d/%d\n 1 - add abonent\n 2 - search abonent\n 3 - all abonents\n 9 - delete abonent\n q - exit\n", all, M);
		gets(temp);
	}
	return 0;
}

