#include <stdio.h>

int main(){   // bai tap in ra cac so
    int n;
    printf("nhap vao mot so n bat ki : ");
    scanf("%d" ,&n);
    
    if(n < 1){
    	printf("%d la so nho hon 1 " ,n);
	}
	if(n > 1 && n < 3){
		printf("Linh");
	}
	if(n > 4 && n < 6){
		printf("giang");
		
	}
	return 0 ;
	}
	
	
