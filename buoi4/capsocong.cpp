#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define FILE_URL "C:\\Users\\Cong Cong\\Downloads\\data_set_ss2.txt"
#define COUNT 1000

int removeDuplicates(int* nums, int numsSize){
    if (numsSize == 0) { return 0;}
    int count = 1;  // counts the number of unique elements
    int j = 0;      // counts the number of duplicates between unique elements
    int i;
    for (i=0; i< numsSize-1; i++)  {
        if (nums[i] != nums[i+1]) {
            count++;
            nums[i+1-j] = nums[i+1];
        }
        else j++;
    } 
    
    return count;  //sau khi loai bo phan tu trung lap

}


void quickSort (int *a, int n) {
	
    if (n < 2)
        return;
    int p = a[n / 2];
    int *l = a;
    int *r = a + n - 1;
    while (l <= r) {
        if (*l < p) {
            l++;
        }
        else if (*r > p) {
            r--;
        }
        else {
            int t = *l;
            *l = *r;
            *r = t;
            l++;
            r--;
        }
    }
    quickSort(a, r - a + 1);   //de quy
    quickSort(l, a + n - l);
}

// convert file to array
int *file() {
    FILE *myFile; 
    myFile = fopen(FILE_URL, "r");    //read file

    int *numberArray =  (int*) malloc(COUNT * sizeof(int));
 
    if (myFile == NULL){
        printf("Error Reading File\n");    //check file
        exit (0);
    }

  	int i;
    for (i = 0; i < COUNT; i++){
        fscanf(myFile, "%d,", (numberArray+i));
    }
    
    fclose(myFile);
    return numberArray; 
}

// Print all arithmetic progression
void arithmeticProgression(int *A, int n)
{
	clock_t tic = clock();
	
	int ketqua[100000][3];
    int j,x=0;
    int count;
    for (j = 1; j < n - 1; j++)
    {
        int i = j - 1, k = j + 1;
 
        while (i >= 0 && k < n)
        { 
		
              if (*(A+j) - *(A+i) == *(A+k) - *(A+j))
            {
                ketqua[x][0] = *(A+i);
				ketqua[x][1] = *(A+j);
				ketqua[x][2] = *(A+k);
				
				k++, i--;
                x++;
               	count++;
            }
            else if (*(A+j) - *(A+i) > *(A+k) - *(A+j)){
                k++;
            } else {
                i--;
            }
        }
    }
    clock_t toc = clock();

    printf("Elapsed: %f ms\n", ((double)(toc - tic) / CLOCKS_PER_SEC) * 1000);
    
    printf("\n -------count %d \n", count);
     
//    int q;
//    int p;
//    for(q = 0; q < count; q++){
//        for(p = 0; p < 3; p++)
//           printf("%d\t", ketqua[q][p]);
//    printf("\n");
//   }
}

int main(){
	clock_t tic = clock();   //time
	
   	int *p = file();
 
 	// sort array
	quickSort(p,COUNT);
	
	int dup = removeDuplicates(p,COUNT);
	
	printf("%d \t", dup);
	
	int i;
//    for(i = 0; i < dup; i++)
//    	printf("%d \t", *(p+i));
	// cap so cong
   	arithmeticProgression(p, COUNT);
   	
    clock_t toc = clock();

    printf("ALL: %f ms\n", ((double)(toc - tic) / CLOCKS_PER_SEC) * 1000);
    
    return 0;
}


