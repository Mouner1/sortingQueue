#include "header.h"

void enqueue(tweet**head, tweet**tail,tweet*node) { //function to add node to the tail of the queue


    if(isEmpty(*head)) { //checking if the queue is empty

        *head=*tail=node; //setting the head and tail to the given node

    }

    else {

        (*tail)->next = node; //setting the new node at the end of the queue
	*tail= node; //making the tail point to the new last element

    }

}

void dequeue(tweet**head, tweet**tail) { //function to delete the top element from the queue

    tweet*counterTemp; //variables needed
    tweet *temp;
    counterTemp=*head;
    temp=*head;
    int counter=0;

    if(isEmpty(*head)) { //checking if the queue is empty

        printf("The Queue is empty\n");

    }

    while(counterTemp!=NULL) { //getting the number of nodes in the queue

	counter++;
	counterTemp= counterTemp->next;

    }

    if(counter==1) { //checking if there is only one node in the queue

	*head = *tail =NULL; //the queue will be empty after we delete the node

    }

    else {

	*head = temp->next; //mode the head pointer to the element after and ignore the top one

    }

    free(temp); //freeing memory
}

void printQueue(tweet *head) { //function to print contents of the queue

    tweet *temp;
    temp = head;

    while(temp!=NULL) {

        printf("%d Created by %s: %s\n", temp->id, temp->user, temp->text);
        temp= temp->next;

    }
}

int isEmpty (tweet*head) { //function to check if the queue is empty


    return (head==NULL);


}


