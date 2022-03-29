#include <stdio.h>
#include <math.h>


int main()
{
    int a;
    int b;
    int c;
    int delta;



    printf("nhap so a la : "); 
    scanf("%d" ,&a);
    printf("nhap so b la : ");
    scanf("%d" ,&b);
    printf("nhap so c la : "); 
    scanf("%d" ,&c);

    if (a == 0)
    {
        printf("\ngiai phuong trinh bac nhat");
        if (b == 0)
        {
            if (c == 0)
            {
                printf("\nphuong trinh vo so nghiem");
            }
            else
            {
                printf("\nphuong trinh vo nghiem");
            }
       
        }
        else
        {
            printf("\nphuong trinh co nghiem x= -%d", c/b);
        }
    }
    else
    {
        printf("\ngiai phuong trinh bac hai");
        if (delta < 0)
        {
           printf("\nphuong trinh vo nghiem");
        }
        else if (delta == 0)
        {
           printf("\nphuong trinh co nghiem kep x=-%d", b/(2*a));
        }
        else
        {
            delta = (b * b) - (4 * a * c);
           printf("\nphuong trinh co hai nghiem phan biet");
           printf("\nx1 = %d" , (-b + sqrt(delta))/(2*a));
           printf("\nx2 = %d" , (-b - sqrt(delta))/(2*a));    
        }
         
    }
         
}
     
