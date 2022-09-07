#include <stdio.h>
#include <string.h>

int main(){
	char str[100];
	int word;

	
	printf("nhap chuoi : ");
	fgets(str, sizeof str, stdin); //nhap duoc khoang trang
	int length = strlen(str) - 1;
	str[length] = '\0'; // loai bo \n
	
	word = (str[0] != ' ');
	for(int i = 0; i < length; i++){
		if(str[i] == ' ' && str[i + 1] != ' '){
			word++;
		}
	}
	printf("so tu cua chuoi la %d", word);
	


}
