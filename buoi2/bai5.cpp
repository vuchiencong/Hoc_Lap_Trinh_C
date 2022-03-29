
#include <stdio.h>
 
int main(){
    int n ;
    int tmp;
    
    scanf("%d", &n);
    bool first = true;
    while(n > 0){
        tmp = n % 10;
        if(first == true){
            if(tmp != 0){
                printf("%d", tmp);
                first = false;
            }
        }else{
            printf("%d", tmp);
        }
        n = n / 10;
    }
}
