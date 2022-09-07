#include<stdio.h>
#include<math.h>

void gptb1(float b , float c){
    if(b == 0){
            if(c == 0)
                printf("Vo so nghiem");
            else
                printf("Vo nghiem");
        }
        else
            printf("Nghiem cua phuong trinh la %0.2f", -c/b);
            
}
float tinhDenta (float a, float b, float c){
    return (b*b - 4*a*c);
}
float tinhNghiem1 ( float a, float b, float c, float denta){
    return ((-b + sqrt(denta)) / (2*a));
}

float tinhNghiem2 ( float a, float b, float c, float denta){
    return ((-b - sqrt(denta)) / (2*a));
}

void gptb2 (float a, float b, float c){
    float denta;
        denta = tinhDenta(a,b,c);
        if (denta > 0){
            float x1 ;
            float x2 ;
            x1 = tinhNghiem1(a,b,c,denta);
            x2 = tinhNghiem2(a,b,c,denta);
            printf("\nPt co 2 nghiem phan biet x1 = %0.2f, x2 = %0.2f",x1,x2);
        }
        else if (denta < 0)
            printf("Vo nghiem");
        else{
            printf("Pt co nghiem kep %0.2f", -b / (2*a));
        }
}


int main(){

    float a;
    float b;
    float c;

    printf("\nNhap a = ");
    scanf("%f", &a);
    printf("\nNhap b = ");
    scanf("%f", &b);
    printf("\nNhap c = ");
    scanf("%f", &c);

    if (a == 0){
        printf("\nGiai pt b1");
        gptb1(b,c);
    }
    else{
        printf("\nGiai pt b2");
        gptb2(a,b,c);
    }
    return 0;
}