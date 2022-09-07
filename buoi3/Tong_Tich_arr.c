#include<stdio.h>
#include<math.h>

const int MAX = 100;
int sum(int a[], int n){
    int sum;
     sum = 0;
    for(int i = 0 ; i < n; i++){
       
        sum = sum + a[i];
    }
    return sum;
}
int mul(int a [], int n){
    int mul;
    mul = 1;
    for(int i = 0 ; i < n; i++){
        mul = mul*a[i];
    }
    return mul;
}
float avg( int n, int sum){
    float avg;
    avg = (float)sum / n;
    return avg;
}
float TB_le(int a[],int n){
    float TBle;
    int count;
    int sum;
    sum = 0;
    count = 0;
    for (int i = 0; i<n;i++){
        if(i % 2 == 0){
             if(a[i] % 2 != 0){
                  sum = sum + a[i];
                  count++;
             }    
        }
    }
    TBle = (float)sum / count;
    return TBle;
}
int max(int a[],int n){
    int max;
    max = a[0];
    for (int i = 1; i<n;i++){
        if (a[i] > max)
            max = a[i];
    }
    return max;
}
int min(int a[],int n){
    int min;
    min = a[0];
    for (int i = 1; i<n;i++){
        if (a[i] < min)
            min = a[i];
    }
    return min;
}
int chinhPhuong(int a[], int n){
    int count;
    count = 0;
     for (int i = 0; i<n;i++){
         if (sqrt(a[i]) == (int)sqrt(a[i])){
             count++;
         }
     }
    return count;
}
int ktSNT(int N){
    if (N < 2)
         return 0;
    else{
        for (int i =2; i < N; i++){
            if (N % i == 0){
                return 0;
                break;
            }
            else{
                return 1;
                break;
            }        
        }
    }
}
int soNguyenTo(int a[], int n){
    int arr[MAX];
    int j = 0;
    for (int i = 0; i<n; i++){
         if(ktSNT(a[i]) == 1) {
            arr[j] = a[i];
            j++;
         }
    }
    if (j != 0){
        printf("\nCac so nguyen to trong mang la : ");
        for (int m=0; m< j; m++)
    
            printf("%d ",arr[m]);
    
    }  
}
void timSoAm(int a[],int n){
    int arr[MAX];
    int j = 0;
    for(int i = 0; i < n; i++){
        if(a[i] < 0){
            arr[j] = a[i];
            j++;
        }
    }
}
int thayTheAm(int a[],int n){
    int count = 0;
    for(int i = 0; i < n; i++){
        if(a[i] < 0){
            a[i] = 0;
            count++;
           
        }
        printf("\nMang sau khi da thay the so am bang 0 la: ");
        printf()
    }
}
int main(){
     
     int arr[MAX];
     int n;
     

     printf("\nNhap so luong phan tu cua mang : ");
     do{
         scanf("%d",&n);
         if (n<=0 || n>MAX)
            printf("\nNhap lai so luong phan tu");
     }
     while(n<=0 || n>MAX);
     for (int i = 0 ; i < n ; i++){
        printf("A[%d] = ",i);
        scanf("%d",&arr[i]);
    }
    

//      printf("\nTong cac phan tu = %d", sum(arr,n));
//      printf("\nTich cac phan tu = %d",mul(arr,n));
//      printf("\nTrung binh cac phan tu = %0.2f",avg(n,sum(arr,n)));
//      printf("\nTrung binh cong cac so le o vi tri chan = %0.2f",TB_le(arr,n));
//      printf("\nMax cac phan tu = %d",max(arr,n));
//      printf("\nMin cac phan tu = %d",min(arr,n));
//      printf("\nCo %d so chinh phuong trong mang",chinhPhuong(arr,n));
     soNguyenTo(arr,n);
// }
}