//
//  main.c
//  tax.c
//
//  Created by YAO on 2022/5/15.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int income, disc;
    double pay, taxrate;
    
    scanf("%d", &income);
    
    if (income < 370001) {
        disc = 0;
        taxrate = 0.06;
        
    }
    else if (income < 990001) {
        disc = 25900;
        taxrate = 0.13;
    }
    else if (income < 1980001) {
        disc = 105100;
        taxrate = 0.21;
    }
    else if (income < 3720001) {
        disc = 283300;
        taxrate = 0.3;
    }
    else {
        disc = 283300;
        taxrate = 0.4;
    }
        
    printf("income %d\n", income);
    printf("tax rate %.0f%%\n", taxrate*100);
    printf("tax %.0f\n", income*taxrate);
    printf("discount %d\n", disc);
    printf("taxpay %.0f", taxrate * income - disc);
    return 0;
}
