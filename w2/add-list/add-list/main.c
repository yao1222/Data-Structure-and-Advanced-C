//
//  main.c
//  add-list
//
//  Created by YAO on 2022/6/4.
//

#include <stdio.h>
#include <stdlib.h>

struct _node {
    // data tye, variable name
    int data;
    struct _node *next;
};

typedef struct _node node;

int main(int argc, const char * argv[]) {
    node *head, *ptr;
    
    head = (node *)malloc(sizeof(node));
    ptr = head;
    //printf("head => %d\n", head);
    //printf("ptr => %d\n", ptr);
    int value;
    int i;
    int n=5;
    
    for (i=0; i<n; i++) {
        scanf("%d", &value);
        ptr->data = value;
        if (i==(n-1)) {
            ptr->next = NULL;
        }
        else{
            ptr->next = (node *)malloc(sizeof(node));
            ptr = ptr->next;
        }
    }
    
    ptr = head;
    while (ptr!=NULL) {
        printf("%d ", ptr->data);
        ptr = ptr->next;
    }
    
    return 0;
}
