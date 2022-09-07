#include <stdio.h>


int nhap(int a[], int n){
	printf("\nnhap n = ");
	scanf("%d", &n);
	for(int i = 0; i < n; i++){
		printf("\nnhap a[%d] = ", i);
		scanf("%d", &a[i]);
	}
	int sum;
	sum = 0;
	for(int j = 0; j < n; j+=2){
		
		if(a[j] % 2 != 0){
			printf("\vi tri %d = ", a[j]);
			sum =sum + a[j];
		}
	}
		printf("tong cua cac so le tai vi tri chan la %d", sum);
	
	
}


//	for(int i = 0; i < n; i++){
//		int c = i % 2;
//		int sum;
//		sum = 0;
//		if(i % 2 == 0){
//			if(a[c] % 2 != 0){
//				sum =sum + a[c];
//			}
//		}
//	return sum;	
//	}
//	
	


int main(){
	int a[100]={0};
	int n;
	int sum;
	sum = 0;
	nhap(a, n);
	
}
