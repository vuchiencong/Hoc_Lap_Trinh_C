#include <stdio.h>

void selectionSort (int a[], int n);
void swap (int &a, int &b);
void outArray (int n, int a[]);


void outArray(int a[], int n){
	for(int i=0; i < n; i++){
		printf("%d\t", a[i]);
	}
}

int main(){
	
	
    // selection sort
    
    int a[] = { 12, 45, 67, 89, 1, 35, 79, 57};
    int n = sizeof(a)/sizeof(int);
    printf("n = %d" ,n);
    printf("\nnhap vao ");
    outArray(a, n);
    printf("\n");
    selectionSort(a, n);
    printf("\n\nday moi  ");
    outArray(a, n);
    
}


void selectionSort(int a[], int n){
	for(int i = 1; i < n; i++){
		int jmin = i - 1;
		for(int j=i - 1; j<n; j++){
			if(a[j] < a[jmin]){
				jmin = j;
			}
			if(jmin != i-1){
				swap(a[i - 1], a[jmin]);
			}
		}
			printf("\ni =%d  ", i);
			outArray(a, n);
	}
}

//void outArray(int a[], int n){
//	for(int i=0; i < n; i++){
//		printf("%d", a[i]);
//	}
//}

void swap(int &a, int &b){
	int tg =a;
	    a=b;
	    b= tg;
}
