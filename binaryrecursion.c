#include<stdio.h>

int array[100],n,c,first,last,middle,i;

void main()
{
	printf("Enter The Number Of Elements: ");
	scanf("%d",&n);
	
	printf("Enter The Elements: ");
	for(i=0;i<n;i++)
	scanf("%d",&array[i]);
	
	printf("Enter The Element You want to Search: ");
	scanf("%d",&c);
	int first =0 , last = n-1;
	BinarySearch(array, c, first, last);
}
void BinarySearch(int array[], int num, int first, int last){
    if(first > last){
        printf("Number is not found");
   } 
   else
    {
         int mid;
         mid = (first + last)/2;				
         if(array[mid]==num){
 		printf("Element is found at index %d ",mid+1);
            exit(0);
 
        }else if(array[mid]>num){
 
            
            BinarySearch(array, num, first, mid-1);
 
        }else{
 
           
            BinarySearch(array, num, mid+1, last);
        }
 
    }
 
}
