//
//  main.c
//  add-list-3
//
//  Created by YAO on 2022/6/4.
//

#include <stdio.h>
#include <stdlib.h>

struct _node {
    int data;
    struct _node *next;
};

typedef struct _node node;

int main(void) {
    node *head, *ptr;
    int value;
    
    head = NULL;

    while (1) {
        scanf("%d", &value);
        if (value==-1)
            break;

        if (head==NULL) {
            head = (node *)malloc(sizeof(node));
            head->data = value;
            head->next = NULL;
            ptr = head;
        }
        else {
            ptr->next = (node *)malloc(sizeof(node));
            ptr = ptr->next;
            ptr->data = value;
            ptr->next = NULL;
        }
    }
    
    ptr = head;
    while (ptr!=NULL) {
        printf("%d ", ptr->data);
        ptr = ptr->next;
    }
    
    free(head);
    free(ptr);
    return 0;
}
