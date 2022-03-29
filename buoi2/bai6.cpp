// nhap vao diem 3 mon toan,li ,hoa cua 1 hoc sinh.viet chuong trinh dua ra xep loai cua hoc sinh
// [0; 4] loai D
// (4;7) laoi  C
// [7;8.5] loai B
// (8.5;10] loai A

#include <stdio.h>
#include <math.h>
int main(){
	float diemToan;
	float diemLy;
	float diemHoa;
	float diemTB;
	
	printf("diemToan : ");
	scanf("%f" ,&diemToan);
	printf("diemLy : ");
	scanf("%f" ,&diemLy);
	printf("diemHoa : ");
	scanf("%f" ,&diemHoa);
		diemTB = (diemToan + diemLy + diemHoa) / 3;
	printf("diemTB la %.2f" ,diemTB);
	
	if(diemTB >= 0 && diemTB <= 4){
		printf(" hoc sinh duoc %.2f la diem D" ,diemTB);
	}
	if(diemTB > 4 && diemTB < 7){
		printf(" hoc sinh duoc %.2f la diem C" ,diemTB);
	}
	if(diemTB >= 7 && diemTB <= 8.5){
		printf(" hoc sinh duoc %.2f la diem B" ,diemTB);
	}
	if(diemTB > 8.5 && diemTB <= 10){
		printf(" hoc sinh duoc %.2f la diem A" ,diemTB);
	}
	
}
