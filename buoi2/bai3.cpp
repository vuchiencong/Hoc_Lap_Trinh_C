#include <stdio.h>
#include <math.h>

void phuongTrinhBac1(int b ,int c){
 	printf("giai phuong trinh bac nhat %d * x + %d = 0\n" ,b ,c);
		if(b == 0){
			printf("khi b = 0 , giai phuong trinh 0 * x + %d = 0\n" ,c);
			if(c == 0){
				printf("khi c=0, phuong trinh vo so nghiem\n");
			}else{
				printf("khi c=%d, phuong trinh ten vo nghiem\n" ,c);
			}
		}else{
			if(c == 0){
				printf("khi c=0,phuong trinh co nghiem x = 0\n");
			}else{
				printf("khi c khac 0,phuong trinh co nghiem x = -%d\n" ,c/b);
			}
		}
		
 }
 
 int tinhNghiem1(int b ,int a ,int delta){

	return (-b + sqrt(delta))/(2 * a);
}
 
 
 int tinhNghiem2(int b ,int a ,int delta){
	return (-b - sqrt(delta))/(2 * a);
}

int tinhNghiemKep(int b ,int a){
	
	printf("phuong trinh co nghiem kep x = -%d\n" ,b/(2*a));
}
 
  void phuongTrinhBac2(int a ,int b ,int c ){
  	  int nghiem1;
 printf("giai phuong trinh bac hai\n");
          int delta;
 
			delta = (b * b) - (4 * a * c);
		if(delta < 0)
		{
			printf("phuong trinh vo nghiem\n");
		}else if (delta == 0)
		 {  tinhNghiemKep(b,c);
			
		}
		else
		{ 
		int nghiem1 = tinhNghiem1(b,a,delta);
			printf("x1 = %d\n" ,nghiem1);
		int nghiem2 =  tinhNghiem2(b,a,delta);
			printf("x1 = %d\n" ,nghiem2);
		}
}



 
 

int main(){
	int a;
	int b;
	int c;
	int delta;
	
	printf("nhap vao so a : ");
	scanf("%d" ,&a);
	printf("nhap vao so b : ");
	scanf("%d" ,&b);
	printf("nhap vao so c : ");
	scanf("%d" ,&c);
	
	if(a == 0){
	 phuongTrinhBac1(b,c);
		
	}else{
		phuongTrinhBac2(a,b,c);
		
    }
  

}


