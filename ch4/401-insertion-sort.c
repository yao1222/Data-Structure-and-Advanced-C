#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
/*
   Insertion Sort;  
*/

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
	int data[5] = {50, 30, 40, 10, 20};
	int n=5;
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
	print(n, data);
	
	return 0;
}
