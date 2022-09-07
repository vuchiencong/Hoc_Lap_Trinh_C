#include <stdio.h>
#include <string.h>

int main(){
	char chuoi[100];
	char n;
	int dem;
	dem = 0;
	
	printf("nhap vao day chuoi ");
	gets(chuoi);
	printf("chuoi ban vua nhap la %s", chuoi);
	printf("\n hay nhap ki tu vao : ");
	scanf("%c", &n);
	
	for(int i = 0; i < strlen(chuoi); i++){
		if (chuoi[i] == n){
			dem++;
		}
	}
	if(dem > 0){
		printf(" ki tu %c xuat hien trong chuoi va xuat hien %d lan", n, dem);
		
	}
	if(dem == 0){
		printf("ki tu nay khong xuat hien trong chuoi ");
	}
	

	
}

