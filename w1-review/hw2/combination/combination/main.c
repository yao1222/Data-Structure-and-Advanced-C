//
//  main.c
//  combination
//
//  Created by SIH-YU YAO on 2022/5/31.
//

#include <stdio.h>

int comb(int, int);

int main(int argc, const char * argv[]) {
    int n, m, ans;
    printf("請輸入要計算組合的兩個數。\n");
    printf("請輸入第一個數 n:");
    scanf("%d", &n);
    printf("請輸入第二個數 m:");
    scanf("%d", &m);
    if (n<m) {
        printf("\n 數值 n 必須大於 m \n\n");
        return 0;
    }
    printf("\n 組合公式 comb(%d, %d)=%d\n\n", n, m, comb(n, m));
    return 0;
}

int comb(int n, int m) {
    int a, b;
    
    if (n==m || m==0) {
        return 1;
    }
    
    a = comb(n-1, m);
    b = comb(n-1, m-1);
    return a+b;
    
}


