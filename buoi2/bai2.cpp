#include <stdio.h>
 
 int main(){   // bai tap giai phuong trinh bac nhat
 	int a;
 	int b;
 	printf("nhap so a = ");
 	scanf("%d" ,&a);
 	printf("nhap so b = ");
 	scanf("%d" ,&b);
 	
 	if(a == 0){
 		if(b == 0){
 			printf("phuong trinh vo so nghiem ");
		 }else{
		 	printf("phuong trinh vo nghiem");
		 }
	 }else{
	 	if(b == 0){
	 		printf("phuong trinh co nghiem x = 0");
	
		 }else{
		 	printf("phuong trinh co nghiem x = %d" , -b/a);
		 }
	 }
	 return 0;
 }
