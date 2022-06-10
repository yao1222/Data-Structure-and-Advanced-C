#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
/*
  Selection Sort: use one position to remember the smallest position.
                  n number -> (n-1)^2
                  O(n^2) 
*/

void swap(int *a, int *b)
{
	int temp;
	
	temp = *a;
	*a = *b;
	*b = temp;
}

void print(int n, int *p)
{
	int i;
	
	for(i=0; i<n; i++)
	{
		printf("%d ", p[i]);
	}
	puts("");
}

int main(void) {
	int data[5] = {5, 4, 3, 2, 1};
	int *min, *pos;  // record the min's position
	int i, j;
	int n=5;
	
	for(i=0; i<n-1; i++)
	{
		min = data+i;
		printf("i: %d \n", i);
		printf("min: %d \n", min);
		
		for(j=i+1; j<n; j++)
		{
			pos = &data[j];
			printf("pos: %d \n", pos);
			
			if(*pos < *min)
				min = pos; 
		}
		// change the min number with the ith number
		swap(&data[i], min);
	}
	print(n, data);
	
	return 0;
}
