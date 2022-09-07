#include <stdio.h>

int main(){
	
	int n;
	int r;
	printf("nhap mot so bat ki ");
	scanf("%d" ,&n);
	
	while(n>0){
		r = n % 10;
		n /=10;
	
	}
	
	switch(r){
		case 1:
			printf("mot\t");
			
		case 2:
			printf("hai\t");
		
		case 3:
			printf("ba\t");
		
		case 4:
			printf("bon\t");
			
		case 5:
			printf("nam\t");
			
		case 6:
			printf("sau\t");
		
		case 7:
			printf("bay\t");
		
		case 8:
			printf("tam\t");
		
		case 9:
			printf("chin\t");
			
			
		case 0:
			printf("khong\t");
	
	}
}
