#include <stdio.h>

// dao nguoc so 

int Reverser (int n){
	int reNum;
	int last;
	reNum = n % 10;
	n /= 10;
	
	while(n > 0){
		last = n % 10;
		n /= 10;
		reNum = reNum * 10 + last;
	}
	return reNum;

}


int main(){
	int num;
	int r;

	printf("\nnhap so can dao nguoc : ");
	scanf("%d" ,&num);
	printf("so dao nguoc la %d " ,Reverser(num));
	
}
