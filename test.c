#include "headerA4.h"

int main() {

    tweet * tweetList=NULL; //varaibles needed to make three different queues for testing
    tweet* test1=NULL;
    tweet* test2=NULL;

    tweet *head=NULL;
    tweet*headTest1=NULL;
    tweet*headTest2=NULL;

    tweet *tail=NULL;
    tweet* tailTest1=NULL;
    tweet* tailTest2=NULL;

    tweet*test=NULL;
    tweet *node;
    node = malloc(sizeof(tweet));
    int emptyTest;

    printf("Initializing a queue\n"); //initializing a queue

    for(int i=0; i<5; i++) { //inserting 5 nodes at the start for the queue

    node = createTweet(tweetList);
    enqueue(&head, &tail, node);

    }

    printf("\n");
    printf("Verifying queue contents via printQueue\n"); //printing the queue
    printQueue(head);
    printf("\n");

    printf("Testing [Enqueue] function\n"); //testing enqueue

    for(int i=0; i<3;i++) { //asking the user for 3 new nodes to add

	printf("Iteration[%d]: " ,i+1);
        node=createTweet(tweetList);
	enqueue(&head,&tail,node);

	printf("After enqueue, queue looks like this\n"); //providing an update of the queue after every node added
        printQueue(head);
	printf("\n");

    }

    printf("Testing [Dequeue] function\n"); //testing dequeue function

    for(int i=0; i<3; i++) { //dequeue 3 times

        printf("Iteration[%d]\n",i+1);
	dequeue(&head,&tail);

	printf("After dequeue, queue looks like this\n"); //providing the state of the queue after every node deleted
	printQueue(head);
	printf("\n");


    }

    printf("Testing [isEmpty] function\n"); //testing isEmpty function

    printf("Testing with list, expecting !isEmpty\n"); //testing with the current list expecting is not empty
    emptyTest= isEmpty(head);

    if(emptyTest==0) {

	printf("SUCCESS: list is not empty\n"); //printing the result to the user

    }

    else {

	printf("Test failed\n");

    }

    printf("Using print queue to verify queue contents\n"); //printing queue content to verify results
    printQueue(head);
    printf("\n");


    printf("Testing with list after two dequeues, expecting !isEmpty\n"); //testing the function after dequeue 2 times
    dequeue(&head,&tail);
    dequeue(&head,&tail);
    emptyTest= isEmpty(head);

    if(emptyTest==0) {

	printf("SUCCESS:list is not empty\n"); //printing the resul to the user

    }

    else {

    	printf("Test failed\n");

    }

    printf("Using print queue to verify queue contents\n"); //printing the queue contents to verify results
    printQueue(head);
    printf("\n");


    printf("Testing with empty queue, expecting isEmpty\n"); //testing with an empty queue
    emptyTest=isEmpty(test);

    if(emptyTest==1) {

	printf("SUCCESS: empty list declared as empty\n"); //printing the results

    }

    else {


	printf("Test failed\n");

    }

    printf("Using print queue to verify queue contents\n"); //proving to the user an empty queue was used
    printQueue(head);
    printf("\n");

    printf("Testing [PrintQueue] function\n"); //skip testing printQueue already used a lot
    printf("printQueue was used in the verification process already\n");
    printf("\n");

    printf("Testing the miscFunctions on the qeueu we already have\n"); //testing the misc funcs with the queue we have
    printf("\n");

    printf("Testing [sortID] function\n"); //testing sort by ID
    sortID(&head, &tail);
    printQueue(head); //printing the queue after sorted
    printf("\n");


    printf("Testing [sortUsername] function\n");//testing sort by Username
    sortUsername(&head,&tail);
    printQueue(head); //printing the queue after sorted
    printf("\n");


    printf("Testing [reverse] function\n");//testing reverse queue
    reverse(&head,&tail);
    printQueue(head);//printing the queue after reversed
    printf("\n");

    printf("Testing the miscFunctions on a new queue\n"); //testing the misc func on a fresh queue with 3 nodes
    printf("Testing them with a queue with 3 nodes\n");

    for(int i=0; i<3; i++) { //getting the 3 nodes from the user

	node=createTweet(test1);
        enqueue(&headTest1,&tailTest1,node);


    }

    printf("\n");
    printf("Verifying queue contents\n"); //verifying the contents of the queue
    printQueue(headTest1);
    printf("\n");

    printf("Testing [sortID] function\n"); //testing sort by ID on the new queue
    sortID(&headTest1, &tailTest1);
    printQueue(headTest1); //printing the queue after it is sorted
    printf("\n");


    printf("Testing [sortUsername] function\n"); //testing sort by username on the new queue
    sortUsername(&headTest1,&tailTest1);
    printQueue(headTest1);//printing the queue after it is sorted
    printf("\n");


    printf("Testing [reverse] function\n"); //testing reverse on the new queue
    reverse(&headTest1,&tailTest1);
    printQueue(headTest1); //printing the reversed queue
    printf("\n");

    printf("Testing the miscFunctions with a new queue with 4 nodes\n"); //making a new queue with 4 nodes

    for(int i=0; i<4;i++) { //getting the nodes from the user

	node=createTweet(test2);
        enqueue(&headTest2,&tailTest2,node);

    }


    printf("\n");
    printf("Verifying queue contents\n"); //printing the new queue contents to the user
    printQueue(headTest2);
    printf("\n");

    printf("Testing [sortID] function\n"); //testing sort by ID on the new queue
    sortID(&headTest2, &tailTest2);
    printQueue(headTest2); //printing the sorted queue
    printf("\n");


    printf("Testing [sortUsername] function\n"); //testing sort by username on the new queue
    sortUsername(&headTest2,&tailTest2);
    printQueue(headTest2); //printing the sorted queue
    printf("\n");


    printf("Testing [reverse] function\n"); //testing reverse on the new queue
    reverse(&headTest2,&tailTest2);
    printQueue(headTest2);//printing the reversed queue
    printf("\n");

    free(tweetList); //freeing memory
    free(head);
    free(tail);
}
