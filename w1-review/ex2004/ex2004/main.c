//
//  main.c
//  ex2004
//
//  Created by SIH-YU YAO on 2022/5/31.
//

#include <stdio.h>

#define H 3
#define W 3

void Input2dAry(int [][3]);
void Print2dAry(int [][3]);
void MatrixMul2dAry(int [][3],int [][3],int [][3]);

int main(void) {
    int a[H][W] = {0};
    int b[H][W] = {0};
    int c[H][W] = {0};
    
    
    Input2dAry(a);
    Input2dAry(b);
    MatrixMul2dAry(a, b, c);
    Print2dAry(c);
    
    
    
    return 0;
}

void Input2dAry(int arr[][3]) {
    int i, j;
    for (i=0; i<H; i++) {
        for (j=0; j<W; j++) {
            scanf("%d", &arr[i][j]);
        }
    }
}

void MatrixMul2dAry(int a[][3],int b[][3],int c[][3]) {
    // 函數裡面其實沒有陣列
    // 他是指標，直接指向main傳進來的陣列
    // 直接操作陣列，所以不用return回傳值.
    int i, j, k;
    for (i=0; i<H; i++) {
        for (j=0; j<W; j++) {
            for (k=0; k<W; k++) {
                c[i][j] += a[i][k] * b[k][j];
            }
        }
    }
}

void Print2dAry(int arr[][3]) {
    int i, j;
    for (i=0; i<H; i++) {
        for (j=0; j<W; j++) {
            printf("%-5d", arr[i][j]);
        }
        puts("");
    }
}
