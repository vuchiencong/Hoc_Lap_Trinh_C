#include <stdio.h>

int main(){
	int a[7] ={6 ,2 ,1 ,4 ,7 ,3 ,5};
	int min;
	min = a[0];
	for( int i = 1; i <7; i++){
		
		if(min>a[i]){
			min=a[i];
			
		}
	}
	printf(" min cua mang la %d" ,min);
}
