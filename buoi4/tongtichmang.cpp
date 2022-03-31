#include <stdio.h>

int hamTinhTong (int tong, int a[]){
	tong = 0;
	for (int i =0; i< 5;i++){
		return tong = tong + a[i];
	}
}

int hamtinhTich (int tich, int a[]){
	tich = 1;
	for (int i =0; i< 5;i++){
		return tich = tich * a[i ];
	}
}

int hamTinhgttb (int gttb, int tong){
	    
		return gttb = (tong)/5;
	
}
	


int main(){
	int a[5];
	int tong;
	int gttb;
	int tich;

	printf("nhap cac phan tu\n");
		    
	for (int i =0; i< 5;i++){
		printf("so thu %d " ,i+1);
		scanf("%d" ,&a[i]);
	}
	 hamTinhTong (tong,a);
	printf("tong cua mang la %d\n" ,tong);
	 hamtinhTich (tich,a);
	printf("tich cua mang la %d\n" ,tich);
     hamTinhgttb (gttb , tong);
	printf("gia tri trung binh cua mang la %d\n" ,gttb);
}




	   
	   

