#include <stdio.h>

int Minmang (int min, int a[i]){
		min = a[0];
	for( int i = 1; i <5; i++){
		
		if(min>a[i]){
			min=a[i];
			
		}
	}
	
}





int main(){
	int a[5];
	int min;
	
	printf("nhap vao mang :");
	for (int i =0; i< 5;i++){
		printf("so thu %d " ,i+1);
		scanf("%d" ,&a[i]);
	}
	Minmang ( min, a){
	 printf(" min cua mang la %d" ,min);
	}
	
	
}
