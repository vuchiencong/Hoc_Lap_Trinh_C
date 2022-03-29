#include <stdio.h>

int main(){
	int n;
	do{
		printf(" quy khach hay nhap mot so duong : ");
		scanf("%d" ,&n);
		if(n <= 0){
			printf("quy khach nhap sai, vui long nhap lai\n");
		}else{
			printf("\nquy khach da nhap dung");
		}
		
	}while(n <= 0);
	
	    
}

