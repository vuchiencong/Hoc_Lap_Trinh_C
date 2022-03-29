#include <stdio.h>

int main(){           // bai kiem tra so nguyen to
    int n;
    printf("nhap mot so bat ki : ");
    scanf("%d" ,&n);
    int count = 0;
    
    for( int i = 2 ;i < n ;i++){
    	if(n % i == 0){
    		count++;
    		printf("%d chia het cho %d\n" ,n ,i);
    		
		}
	}
	if(count == 0){
		printf("%d la so nguyen to" ,n);
	}else{
		printf("%d khong la so nguyen to" ,n);
	}

}
