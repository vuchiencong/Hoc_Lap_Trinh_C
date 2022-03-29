#include <stdio.h>

int main(){               //in ra cac so le nho hon 100 tru 5,7,97
	int i;
	for(int i=1; i < 100; i+=2){
		if((i == 5) || (i == 7) || (i== 93) )
           continue;
	    	printf("%5d" ,i );			
		
	}
	
}


