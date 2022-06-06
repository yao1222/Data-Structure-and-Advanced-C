//
//  main.c
//  linked-list-func01
//
//  Created by SIH-YU YAO on 2022/6/6.
//
/*
 input "i", insert new node with value;
 input "l", print the list;
 input "q", quit.
 */

#include <stdio.h>
#include <stdlib.h>

struct _node {
    int data;
    struct _node *next;
};

typedef struct _node node;

void printList(node *ptr) {

    while (ptr != NULL) {
        printf("%d ", ptr->data);
        ptr = ptr->next;
    }
    puts("");
}

node *getnode(){
    // Create new node
    node *p;
    p = (node *)malloc(sizeof(node));
    if (p == NULL) {
        printf("Not Enough Memory!");
        exit(1);
    }
    return p;
}

node *insert_node (node *head, node *ptr, node input){
    node *new_node;
    new_node = getnode();
    *new_node = input;
    new_node->next = NULL;
    
    if (ptr == NULL) {
        // insert new node at the first position
        new_node->next = head;
        head = new_node;
    }
    else {
        if (ptr->next == NULL) {
            // insert at the end
            ptr->next = new_node;
        }
        else {
            // insert in the middle
            new_node->next = ptr->next;
            ptr->next = new_node;
        }
    }
    return head;
}


int main(void) {
    char op;
    node *head, *ptr;
    node input;
    head = ptr = NULL;
    
    // user selection
    while (1) {
        //puts("i insert");
        //puts("l list");
        //puts("q quit");
        //printf(">");
        
        scanf(" %c", &op);  //add a space before %, means
                            //it can igore TAB, space, Enter..all spaces.
        switch (op) {
            case 'i':
                scanf("%d", &input.data);
                head = insert_node (head, ptr, input);
                if (ptr == NULL) {
                    ptr = head;
                }
                else {
                    ptr = ptr->next;
                }
                break;
            case 'l':
                printList(head);
                break;
            case 'q':
                return 0;
                break;

            default:
                break;
        }
        //printf("press ENTER to exit...");
        //system("read -n 1 -s -p \"Press any key to continue...\"" );
        //system("clear");
    }
    return 0;
}
