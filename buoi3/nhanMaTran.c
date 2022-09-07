#include<stdio.h>

void nhapMaTran1 (int a[][100],int m, int n){
    for (int i; i < m; i++){
        for(int j; j < n; j++){
            printf("A[%d][%d] = ",i,j);
            scanf("%d",&a[i][j]);
        }
    }
}
void nhapMaTran2 (int b[][100],int m, int n){
    for (int i; i < m; i++){
        for(int j; j < n; j++){
            printf("B[%d][%d] = ",i,j);
            scanf("%d",&b[i][j]);
        }
    }
}
int nhanMaTran(int a[][100], int b[][100]){
    
}