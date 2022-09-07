#include <stdio.h>
#define MAX 100

void nhap (int arr[], int &n)
{
	do
	{
		printf("\nNhap so phan tu: ");
		scanf("%d", &n);
		if(n <= 0 || n > MAX)
		{
			printf("\nSo phan tu khong hop le. Xin kiem tra lai !");
		}
	}while(n <= 0 || n > MAX);
	for(int i = 0; i < n; i++)
	{
		printf("\nNhap a[%d]: ", i);
		scanf("%d", &arr[i]);
	}
}

//------------------------------------------------------------------

void xuat(int arr[], int n)
{
		printf("cac phan tu cau mang la: ");
	for(int i = 0; i < n; i++)
	{
		printf("%d\t", arr[i]);
	}
}

//--------------------------------------------------------------------
void timCapSoCong(int arr[], int n)
{
	printf("\nbo ba cap so cap so cong la: \n");
  	for (int i = 0; i < n; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			for(int k = j + 1; k < n; k++)
			{
				if ((arr[j] - arr[i]) == (arr[k] - arr[j]))
			{
				printf(" (%d, %d, %d)", arr[i], arr[j],arr[k]);
			}
			}
			
		}
	} 
}

//------------------------------------------------------------------------
int main()
{
	
	int n;
	int arr[MAX];

	nhap(arr, n);
	xuat(arr, n);
	timCapSoCong(arr, n);

 
}
