#define N 0x00CCAABB
#define M 0xDD
#define S 4
#define SHIFT (4-(S-1))*8

void allByte(){
	for(int i = 0; i<4; i++){
		printf("%d byte: 0x%x\n", i,  (N>>i*8) & 0xFF);
	}

}


void changeBit(){
	unsigned int temp = N;
	int c = ((temp<<SHIFT>>SHIFT) | (M<<(S-1)*8));
	printf("Number: 0x%x\n Change number: 0x%x\n bit: %d\n resault: 0x%x\n", N, M, S, c);
	
}
