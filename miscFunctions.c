#include "header.h"

void sortID(tweet**head, tweet **tail) { //function to sort the queue by ID using bubble sort

    tweet *counterTweet=*head; //variables needed
    tweet *current=*head;
    tweet *prev=*head;
    tweet *temp;
    int counter =0;

    if(isEmpty(*head)) { //checking if the queue is empty

	printf("The queue is empty\n");
	return;
    }

    while(counterTweet!=NULL) { //getting the number of nodes in the queue

	counter++;
	counterTweet=counterTweet->next;

    }

    for(int i=0; i<counter;i++) { //bubble sort algorithm

	current = *head; //making current and previous pointer point to the start
	prev    =*head;

	while(current!=NULL && current->next!=NULL) { //moving the current pointer when its not null also 
	//making sure there is more than one node in the queue

	    if(current->id > current->next->id) { //comparing the IDs

		temp = current->next; //set a temp pointer to the node after current
		current->next =current->next->next; //make the current skip one node and link to the one after it
		temp->next=current; //make temp point to the current (swap happens here)
		if(*head == current) { //updating the head if the first two nodes need to be swapped

		    *head = prev=temp;

		}

		else {

		    prev->next= temp; //linking the previous node to the new temp node in the place
		    current = temp; //setting current equal to temp
		}
	    }
	    prev = current; //moving onto the next node
	    current = current->next; //moving onto the next node

	}
    }
}

void sortUsername(tweet**head, tweet **tail) { //function to sort the queue based on usernames

    tweet *counterTweet=*head; //variables needed
    tweet *current=*head;
    tweet *prev=*head;
    tweet *temp;
    int counter =0;

    if(isEmpty(*head)) { //checking if the queue is empty

        printf("The queue is empty\n");
        return;
    }

    while(counterTweet!=NULL) { //counting the number of nodes

        counter++;
        counterTweet=counterTweet->next;

    }

    for(int i=0; i<counter;i++) { //same algorithm for sortID

        current = *head;
        prev    =*head;

        while(current!=NULL && current->next!=NULL) { //making sure there is more than one node in the queue

            if(strcmp(current->user,current->next->user)>0 ) { //checking usernames instead of IDs thus using strcmp

                temp = current->next;
                current->next =current->next->next;
                temp->next=current;
                if(*head == current) {

                    *head = prev=temp;

                }

                else {

                    prev->next= temp;
                    current = temp;
                }
            }
            prev = current;
            current = current->next;

        }
    }
}

void reverse(tweet**head,tweet**tail) { //function to reverse the order of a queue

    tweet*prev = NULL; //pointers to  previous current and next needed
    tweet* current = *head;
    tweet*after = NULL;

    while(current!=NULL) { //cycling through current

	after = current->next;//setting after equal to the node after current

	current->next = prev; //Storing the address of the previous node
	//initially will store NULL then it will keep updating

	prev = current; // updating the previous node, it will point to the same node as current

	current = after; //updating the current node, it will point to the same node as after
    }

    *head= prev; //setting head to the new reversed queue called prev
}
