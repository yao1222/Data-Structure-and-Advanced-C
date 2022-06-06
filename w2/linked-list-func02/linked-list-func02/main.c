//
//  main.c
//  linked-list-func02
//
//  Created by SIH-YU YAO on 2022/6/6.
//
/*
 input "i", insert new node with value;
 input "l", print the list;
 input "d", delete the value;
 input "f", find the value;
 input "g", print the total length;
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

node *getnode(void){
    // Create new node
    node *p;
    p = (node *)malloc(sizeof(node));
    if (p == NULL) {
        printf("Not Enough Memory!");
        exit(1);
    }
    return p;
}

void freeNode(node *p) {
    free(p);
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

node *findNode(node *head, int num){
    node *ptr;
    ptr = head; //pointer from the start
    while (ptr != NULL) {
        if (ptr->data == num) {
            return ptr;
        }
        ptr = ptr->next;
    }
    return ptr;
}

node *deleteNode(node *head, node *ptr)
{
    node *previous;
    if (ptr == head)
    {
        // at the first
        head = head->next;
    }
    else{
        previous = head;
        // find the previous node
        while (previous->next != ptr) {
            previous = previous->next;
        }
        if (ptr->next == NULL) {
            // in the end
            previous->next = NULL;
        }
        else {
            // in the middle
            previous->next = ptr->next;
            
        }
    }
    freeNode(ptr);
    return head;
}

int length(node *head) {
    int num=0;
    node *ptr = head;
    
    while (ptr != NULL) {
        num++;
        ptr = ptr->next;
    }
    return num;
}
int main(void) {
    char op;
    node *head, *ptr;
    node input;
    int num;
    
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
                if (head == NULL) {
                    head = insert_node (head, NULL, input);
                }
                else {
                    ptr = head;
                    while (ptr->next != NULL) {
                        ptr = ptr->next;
                    }
                    head = insert_node (head, ptr, input);
                }
                
                break;
            case 'l':
                printList(head);
                break;
            case 'f':
                scanf("%d", &num);
                ptr = findNode(head, num);
                if (ptr != NULL) {
                    printf("found %d\n", ptr->data);
                }
                else {
                    printf("Not Found\n");
                }
                break;
            case 'g':
                num = length(head);
                printf("%d", num);
                break;
            case 'd':
                scanf("%d", &num);
                ptr = findNode(head, num);
                if (ptr != NULL) {
                    head = deleteNode(head, ptr);
                    printf("Delete ok\n");
                }
                else{
                    printf("Can not delete\n");
                }
                
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
