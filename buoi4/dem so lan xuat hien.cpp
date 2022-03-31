#include <stdio.h>

void nhap(int a[], int &n){
	printf("\nnhap n = ");
	scanf("%d", &n);
	for(int i = 0; i < n; i++){
		printf("\nnhap a[%d] = ", i+1);
		scanf("%d", &a[i]);
	}
}

void demSolan(int a[], int b[], int n){
	for(int i = 0; i < n; i++){
		for(int j = i; j < n; j++){
			if(a[j] == a[i]) 
			b[i]++;
		}
	}
}

void xuat(int a[], int b[], int n){
	int max = 1;
	for(int i = 0; i< n; i++){
		if(b[i] > max)
		max = b[i];	
	}
	for(int i = 0; i< n; i++){
		if(b[i] == max){
			printf("\nphan tu xuat hien max la %d", a[i]);
		printf("\nxuat hien %d lan", b[i]);
		}
		
	}
}

int main(){
	int a[100] = {0};
	int b[100] = {0};
	int n;
	nhap(a, n);
	demSolan(a, b, n);
	xuat(a, b, n);
	
}
