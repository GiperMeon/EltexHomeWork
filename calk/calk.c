#include <stdio.h>
#include <stdlib.h>
#define N 100
void sum(double *resault, double a, double b);
void minus(double *resault, double a, double b);
void division(double *resault, double a, double b);
void mult(double *resault, double a, double b);
void power(double *resault, int a, int b);
void scanElement(double *num1, double *num2);



void printHelp();

int main(){
	double resault = 0;
	char read[2];
	double num1=0, num2=0;
       	unsigned char temp[N];
	/*unsigned char *ptr;
	ptr = &temp[0];*/
	printHelp();
	gets(read);
	while(read[0] != 'q'){
		switch(read[0]){
			case '1':
				scanElement(&num1, &num2);
				sum(&resault, num1, num2);
				printf("%.1lf + %.1lf = %.1lf\n", num1, num2, resault);
				break;
			case '2':
				
				scanElement(&num1, &num2);
				minus(&resault, num1, num2);				
				printf("%.1lf + %.1lf = %.1lf\n", num1, num2, resault);
				break;
			case '3':
				scanElement(&num1, &num2);
				division(&resault, num1, num2);				
				printf("%.3lf + %.3lf = %.3lf\n", num1, num2, resault);
				break;
			case '4':
				scanElement(&num1, &num2);
				mult(&resault, num1, num2);				
				printf("%.1lf + %.1lf = %.1lf\n", num1, num2, resault);
				break;
			case '5':
				scanElement(&num1, &num2);
				power(&resault, (int)num1, (int)num2);				
				printf("%.3lf ^ %.3lf = %.3lf\n", num1, num2, resault);
				break;
			case '9':
				break;
			case 'h':
				printHelp();
				break;
		
		}
		gets(read);
	
	}
	return 0;
}

void printHelp(){
	printf(" 1 - add\n 2 - minus\n 3 - division\n 4 - multiplication\n 5 - exponentiation\n 9 - clean\n q - exit\n h - help\n");
}

void sum(double *resault, double a, double b){
	*resault = a + b;
}

void minus(double *resault, double a, double b){
	*resault = a - b;
}

void division(double *resault, double a, double b){
	*resault = a / b;
}

void mult(double *resault, double a, double b){
	*resault = a * b;
}

void power(double *resault, int a, int b){
	double temp = 1;
	if(b > 0){
		for(int i = 0; i<b; i++){
			temp*=a;
		}
	}
	if(b<=0){
		for(int i = b; i<0; i++){
			temp /= (double)a;
		}
		
	}
	*resault = (double) temp;
}
void scanElement(double *num1, double *num2){
	unsigned char temp[N];
	char *ptr;
	ptr = &temp[0];
	printf("a=\n");
	gets(temp);			
	*num1 = atof(ptr);
	printf("b=\n");
	gets(temp);
	*num2 = atof(ptr);

}
