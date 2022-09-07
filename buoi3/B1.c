#include<stdio.h>

char docSo (int so){
    
}

int main (){

    int so ;
    int tmp ;
    printf("\nNhap mot so bat ky = ");
    scanf("%d",&so);

   
    while (so >= 0){
        tmp = so % 10;
        switch (tmp)
            {
            case 0: {
                printf ("Khong");
                break;
            }
            case 1: {
                printf (" Mot");
                break;
            }
            case 2: {
                printf (" Hai");
                break;
            }
            case 3: {
                printf (" Ba");
                break;
            }
            case 4: {
                printf (" Bon");
                break;
            }
            case 5: {
                printf (" Nam");
                break;
            }
            case 6: {
                printf (" Sau");
                break;
            }
            case 7: {
                printf (" Bay");
                break;
            }
            case 8: {
                printf (" Tam");
                break;
            }
            case 9: {
                printf (" Chin");
                break;
            }
        }
        so = so / 10;
    }
    
}