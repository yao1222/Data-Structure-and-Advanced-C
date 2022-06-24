#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(void) {
	int ary[] = {11, 33, 44, 55, 77, 99};
	int pos;
	
	pos = BinarySearch(6, ary, 55);
	pos = BinarySearch(6, ary, 11);
	pos = BinarySearch(6, ary, 99);
	pos = BinarySearch(6, ary, 66);
	
	return 0;
}


int BinarySearch(int n, int *p, int value)
{
	int low=0, high=n;
	int mid;
	while(low<=high){
		mid = (low+high)/2;
		if(p[mid]==value){
			printf("%d \n", mid);
			return mid;
		}
		else if(p[mid]<value){
			low = mid+1;
		}
		else{
			high = mid-1;
		}
	}
	printf("Not Found!");
	return -1;
}
