#include <stdio.h>
#include <math.h>


int nhap(int a[], int n){
	printf("\nnhap n = ");
	scanf("%d", &n);
	for(int i = 0; i < n; i++){
		printf("\nnhap a[%d] = ", i);
		scanf("%d", &a[i]);
	}

	for(int i = 0;i < n; i++){
		int count = 0;
		for(int j = 2; j < a[i]; j++){
			if(a[i] % j == 0){
				count++;
			}
		}
		if(count == 0){
			printf("a[%d] la so nguyen to\n", i);
		}
	
	}
	
}


int main(){
	int a[100]={0};
	int n;
	nhap(a, n);
	
}
