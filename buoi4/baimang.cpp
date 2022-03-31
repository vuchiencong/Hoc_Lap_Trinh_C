#include <stdio.h>

int main(){
	
	int a[9]={1 ,3 ,2 ,4 ,5 ,6 ,8 ,7 ,9};
	int sum;
	sum = 0;
	int gtb;
	int tich;
	tich = 1;
	for(int i = 0; i<9 ; i++){
		sum = sum + a[i ];
		
		tich = tich * a[i];
	}
		gtb = (sum)/9;
	printf("tong cua mang la %d\n" ,sum);
	printf("gia tri trung binh cua mang la %d\n" ,gtb);
	printf("tich cua mang la %d" ,tich);
	
	
	
}

