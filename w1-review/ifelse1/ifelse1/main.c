//
//  main.c
//  ifelse1
//
//  Created by YAO on 2022/5/14.
//

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(int argc, const char * argv[]) {
    int guess, keyin;
    // the random number will always be the same when only use rand,
    // Cause it's from the start in C language.
    // So need use random seed, srand(),
    // and we need the different number at each time.
    // How can we do? Use Time! Time is changing number.
    // srand(3433);
    
    srand((unsigned)time(NULL));
    guess = rand()%5 + 1;
    printf("Please enter the number (1-5) : ");
    scanf("%d", &keyin);
    
    if (keyin==guess) {
        printf("bingo answer is %d\n", guess);
    } else {
        printf("wrong answer, answer is %d\n", guess);
    }
    
    return 0;
}
