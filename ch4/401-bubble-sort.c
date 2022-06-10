#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

/*
	Bubble Sort: use 2 for-loop.
	             if n numbers, it need to compare (n-1) times. --> (n-1)^2
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
	
	for (i=0; i<n; i++)
	{
		printf("%d ", p[i]);
	}
	puts("");
}
	
	
int main(void) {
	int data[5] = {34, 12, 5, 66, 1};  // initial number list
	int i, j, k;
	int n = 5;
	
	for (i=n; i<1; i--)
	{
		for (j=0; j<i-1; j++)
		{
			if (data[j] > data[j+1])
			{
				swap(&data[j], &data[j+1]);
			}
		}
	}
	
	print(n, data);	
	
	return 0;
}
