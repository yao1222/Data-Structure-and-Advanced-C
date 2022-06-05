//
//  main.c
//  struct-ex01
//
//  Created by YAO on 2022/6/4.
//
/*
 Store 5 students' grades,
 and caluculate the average score for each subject.
 */

#include <stdio.h>

#define N 5

struct _student
{
    int math;
    int english;
    int computer;
};

typedef struct _student score;

int main(void) {
    // 宣告資料
    score s[N], sum={0};
    int i;
    
    // input
    for (i=0; i<N; i++) {
        //printf("Student %d scores \n", i+1);
        //printf("math score : ");
        scanf("%d", &s[i].math);
        //printf("english score : ");
        scanf("%d", &s[i].english);
        //printf("computer score : ");
        scanf("%d", &s[i].computer);
    }
    
    // calculation
    for (i=0; i<N; i++) {
        sum.math += s[i].math;
        sum.english += s[i].english;
        sum.computer += s[i].computer;
    }
    
    printf("%.2f\n", (double) sum.math/N);
    printf("%.2f\n", (double) sum.english/N);
    printf("%.2f", (double) sum.computer/N);
    
    return 0;
}
