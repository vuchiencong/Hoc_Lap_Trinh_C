#include<stdio.h>
/* hàm kiểm tra năm nhuận */
int nhuan(int y)
{
    return ((y % 4 == 0 && y % 100 != 0) || y % 400 == 0);
}
/* hàm đếm số ngày trong tháng */
int songaytrongthang(int m,int y)
{
  switch(m)
  {
    case 1:case 3:case 5:case 7:case 8:case 10:case 12:
    {
      return 31;
      break;
    }
    case 2:
    {
      if(nhuan(y))
      {
        return 29;
      }
      return 28;
    }
    case 4:case 6:case 9:case 11:
    {
      return 30;
    }   
  }
}
/* hàm kiểm tra xem ngày tiếp theo là ngày nào, hàm có 3 tham số là y, m, d*/
void ngaytieptheo(int y,int m,int d)
{
  //ta cần khai báo các biến ny, nm, nd là ngày tháng năm tiếp theo
  int ny=y;int nm=m;int nd=d;
  //nếu ngày tháng năm thỏa mãn điều kiện của nó (nghĩa là tháng năm phải lớn hơn 0,....)
  if(y>0&&m>0&&m<13&&d>0&&d<=(songaytrongthang(m,y)))
  {
    // nd=d+1;
    //nếu tháng nhập vào không phải tháng 12 và số ngày bằng số ngày tối đa của tháng thì ta tăng tháng lên 1 và ngày = 1
    if(m!=12&&d==songaytrongthang(m,y))
    {
      nd=1;
      nm=m+1;
    }
    //nếu tháng nhập vào là tháng 12 và số ngày bằng số ngày bằng 31 thì ta tăng tháng, năm lên 1 và ngày sẽ bằng 1
    else if(m==12&&d==songaytrongthang(m,y))
    {
      nd=1;
      ny=y+1;
      nm=1;
    }
    else if(m==2)
    {
      //nếu tháng nhập vào là tháng 2 và năm nhuận thì ngày tối đa sẽ là 29
      if(nhuan(y))
      {
        //nếu người dùng nhập vào ngày 29 thì ta tăng tháng lên 1 và ngày bằng 1
        if(d==29)
        {
          nd=1;
          nm=m+1;
        }
      }
      //ngược lại nếu tháng 2 và không phải năm nhuận thì tháng 2 có 28 ngày
      else
      {
         //nếu người dùng nhập vào ngày 28 thì tăng tháng lên 1 và ngày bằng 1
        if(d==28)
        {
          nd=1;nm=m+1;
        }
      }
    }     
  }
    printf("\nNgày tiếp theo : %d:%d:%d",nd,nm,ny);
}
int main()
{
    int y;int m;int d;
    //sử dụng vòng lặp do..while để yêu cầu người dùng nhập vào đúng với điều kiện của ngày tháng năm
    do {
    printf( "\nNhập ngày: ");
    scanf("%d", &d);
    printf( "Nhập tháng: ");
    scanf("%d", &m);
    printf("Nhập năm: ");
    scanf("%d",&y);
  } while (y < 0 || m < 1 || m >12 || d < 0 || d > 31);
    ngaytieptheo(y,m,d);
}