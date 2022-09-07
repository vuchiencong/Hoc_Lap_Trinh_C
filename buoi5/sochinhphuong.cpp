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
		float N = sqrt(a[i]);
		if(N == (int)N){
			printf("%g la so chinh phuong\n", N);
		}
	}
	
}


int main(){
	int a[100]={0};
	int n;
	nhap(a, n);
	
}
