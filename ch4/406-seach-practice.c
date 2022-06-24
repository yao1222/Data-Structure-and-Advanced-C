#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

#define N 5

void print(int *, int );

int main(void) {
	int ary[N];
	int op, key, i, j, n=0;
	
	printf("Enter the 5 numbers: \n");
	for(i=0; i<N; i++){
		scanf("%d", &ary[i]);
	}
	
	while(1){
		printf("Enter operator(1/2/3/4/5): \n");
		scanf("%d", &op);
		switch(op){
			case 1:
				// insert number
				scanf("%d", &key);
				if(n==0){
					ary[0] = key;
					n++;
					break;
				}
				else{
					for(j=n-1; j>=0 && ary[j]>key; j--)
					ary[j+1] = ary[j];
					ary[j+1] = key;  //inserted
					n++;
				}
				break;
			case 2:
				//linear search
				//ssort();
				break;
			case 3:
				//binary search
				//bsort();
				break;
			case 4:
				//print array
				print(ary, N);
				break;
			case 5: 
				return 0;
				break;
			default:
				break;
		}
	}
	
	return 0;
}

void print(int *p, int n){
	int i;
	for(i=0; i<n; i++){
		printf("%d ", p[i]);
	}
	puts("");
}
