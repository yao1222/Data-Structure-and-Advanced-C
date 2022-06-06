//
//  main.c
//  linked-list-reverse
//
//  Created by SIH-YU YAO on 2022/6/5.
//
/*
 Create linked list and reverse printing values.
 */

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
        if (value == -1) {
            break;
        }
        if (head == NULL) {
            head = (node *)malloc(sizeof(node));
            head->data = value;
            head->next = NULL;
            ptr = head;
        }
        else {
            head = (node *)malloc(sizeof(node));
            head->data = value;
            head->next = ptr;
            ptr = head;
        }
    }
    
    ptr = head;
    while (ptr != NULL) {
        printf("%d ", ptr->data);
        ptr = ptr->next;
    }
    
    return 0;
}
