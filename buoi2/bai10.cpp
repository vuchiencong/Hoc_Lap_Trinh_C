



#include <stdio.h>

int main(){
	int t;
	int m;
	int y;
	
	printf("nhap ngay hom nay : ");
	scanf("%d" ,&t);
	printf("nhap thang nay : ");
	scanf("%d" ,&m);
	printf("nhap nam nay : ");
	scanf("%d" ,&y);
	
	switch(m){
		case 2:
			if(t > 0 && t < 28){
				printf("ngay tiep theo la ngay %d thang %d nam %d" ,t +1 ,m ,y);
			}
			if(t == 28){
				printf("ngay tiep theo la ngay mung 1 thang %d nam %d" ,m +1 ,y);
			}
			break;
		case 12:
				if(t > 0 && t < 31){
				printf("ngay tiep theo la ngay %d thang %d nam %d" ,t +1 ,m ,y);
			}
			if(t == 31){
				printf("ngay tiep theo la ngay mung 1 thang 1 nam %d"  ,y + 1);
			}
			break;
		case 1: case 3 : case 5 : case 7 : case 8 : case 10 :
				if(t > 0 && t < 31){
				printf("ngay tiep theo la ngay %d thang %d nam %d" ,t +1 ,m ,y);
			}
			if(t == 31){
				printf("ngay tiep theo la ngay mung 1 thang %d nam %d" ,m + 1 ,y);
			}
			break;
		case 4 : case 6 : case 9 : case 11 :
				if(t > 0 && t < 30){
				printf("ngay tiep theo la ngay %d thang %d nam %d" ,t +1 ,m ,y);
			}
			if(t == 30){
				printf("ngay tiep theo la ngay mung 1 thang %d nam %d" ,m + 1 ,y);
			}
			break;
				
	}


}
