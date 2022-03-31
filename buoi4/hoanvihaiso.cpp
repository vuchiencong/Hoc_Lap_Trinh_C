#include <stdio.h>


void swap(int &a, int &b){
	
	int temp = a;
	a = b;
	b = temp;
}

int main(){
	int soThuNhat;
	int soThuHai;
	printf("nhap so thu nhat : ");
	scanf("%d", &soThuNhat);
	printf("nhap so thu hai : ");
	scanf("%d", &soThuHai);
	
	swap(soThuNhat, soThuHai);
	printf("sau khi hoan vi\n\n");
	printf("so thu nhat la %d, so thu hai la %d", soThuNhat, soThuHai);
	
}
