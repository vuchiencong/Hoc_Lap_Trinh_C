#include <stdio.h>

int main(){
	int n;
	int start;
	int end;
	n = 6;
	start = 0;
	end = n-1;
	int a[6] = {1, 2, 3, 4, 5, 6};
	printf("mang ban dau la : \n");
	for(int i; i < n; i++){
		printf("%d \t", a[i]);
	}
	while(start < end){
		int temp = a[start];
		a[start] = a[end];
		a[end] = temp;
		start++;
		end--;
	}
	printf("\nmang dao nguoc lai la : \n");
	for(int i; i < n; i++){
	    printf("%d \t", a[i]);
	}
}
