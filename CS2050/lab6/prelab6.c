#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

typedef struct node_{
    int data;
    struct node_* next;
} node;

/**
 * list: The head of a linked list
 * data: An integer to be inserted at the head of the linked list
 *
 * return: The head of the updated linked list
 *
 * Imagine list points to the linked list 
 * 3 -> 2 -> 1 -> NULL
 *
 * then 
 *
 * insert_at_head(list, 4) will return the list
 *
 * 4 -> 3 -> 2 -> 1 -> NULL
 */
node* insert_at_head(node* list, int data);

int main(void) {

    node* start  = NULL;
    node* second = insert_at_head(start, 2);
	node* third = insert_at_head(second, 3);
    assert(second->data == 2);
    assert(second->next == start);

    
    assert(third->data == 3);
    assert(third->next == second);

    free(third);
    free(second);
    printf("You have successfully completed the prelab\n");
    return 0;
}

node* insert_at_head(node* list, int data){
	node* newhead=(node*)malloc(sizeof(node));
	newhead->data=data;
	newhead->next=list;
	list=newhead;
	return list;
}
