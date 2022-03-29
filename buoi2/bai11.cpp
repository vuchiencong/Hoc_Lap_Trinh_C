#include <stdio.h>

int main(){          //bang cuu chuong
	printf("\nbang cuu chuong\n");
	for(int i = 1; i <= 10; i++){
		printf("\nbang nhan %d\n" ,i);
		for(int j = 0; j <= 9; j++){
			
			printf("\n%d * %d = %d" ,i ,j ,i*j);
		}
	}

}
