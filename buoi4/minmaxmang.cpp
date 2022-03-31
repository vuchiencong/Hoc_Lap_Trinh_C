#include <stdio.h>

int main(){
		int a[5];
		int min;
		int max;
		
		printf("nhap cac phan tu\n");
		for (int i =0; i< 5;i++){
		printf("so thu %d " ,i+1);
		scanf("%d" ,&a[i]);
		}
			min = a[0];
			max = a[0];
		for ( int j=1; j<5; j++){
			if(min > a[j]){
			min = a[j];
		}
		    if(max < a[j]){
		    	max = a[j];
			}
	     }
		
		printf("min cua mang la %d\n" , min);
		printf("max cua mang la %d\n" , max);
	}
	

