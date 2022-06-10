#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

#define N 6

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

int selectionSort(int data[], int n) {
	int *min, *pos;  // record the min's position
	int i, j;
	
	for(i=0; i<n-1; i++)
	{
		min = data+i;
		
		for(j=i+1; j<n; j++)
		{
			pos = &data[j];
			
			if(*pos < *min)
				min = pos; 
		}
		// change the min number with the ith number
		swap(&data[i], min);
		print(n, data);
	}
}

void insertionSort(int data[], int n) {
	int i, j;
	int key;  // record the value will be inserted
	int *cur, *keyp;
	
	for(i=1; i<n; i++)
	{
		key = data[i];
		keyp = &data[i];
		
		for(j=i-1; j>=0 && data[j]>key; j--)
		{
			cur = &data[j];
			data[j+1] = data[j];
			cur = &data[j+1];
		}
		data[j+1] = key;  // insert the key value
		print(n, data);
	}
}

void bubbleSort(int data[], int n) {
	int i, j;
	
	for (i=n; i>1; i--)
	{
		for (j=0; j<i-1; j++)
		{
			if (data[j] > data[j+1])
			{
				swap(&data[j], &data[j+1]);
			}
		}
		print(n, data);
	}
}

int main(void) {
	int ary[N];
	int i;
	int op;
	
	for(i=0; i<N; i++)
		scanf("%d", &ary[i]);
	
	scanf("%d", &op);
	
	switch(op){
		case 1:
			bubbleSort(ary, N);
			break;
		case 2:
			selectionSort(ary, N);
			break;
		case 3:
			insertionSort(ary, N);
			break;
		default:
			break;
	}
	
	print(N, ary);		
	return 0;
}
