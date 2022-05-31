//
//  main.c
//  guess.c
//
//  Created by YAO on 2022/5/15.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int ans;
    int keyin[5] = {100, 30, 40, 50, 10};
    int ct = -1;
    int guess;
    int min=1, max=100;
    scanf("%d", &ans);
    
    while (1) {
        printf("%d < ? < %d\n", min, max);
        ct++;
        scanf("%d", &guess);
        // Not in the range, restart
        if (guess <= min || guess >= max) {
            puts("out of range");
            continue;
        }
        if (guess < ans) {
            puts("wrong answer, guess larger");
            min = guess;
        }
        else if (guess > ans) {
            puts("wrong answer, guess smaller");
            max = guess;
        }
        else {
            printf("bingo answer is %d", ans);
            break;
        }
    }
    
    return 0;
}
