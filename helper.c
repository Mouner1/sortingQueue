#include "header.h"


tweet * createTweet(tweet *tweetList) {

    tweet * temp; //variables needed
    char userName[51];
    int sum=0;
    int lenName=0;
    int lenTweet=0;
    int num=0;

    temp = malloc(sizeof(tweet)); //mallocing space for the new node
    temp->next=NULL; //setting the next to NULL

    printf("Enter a username: "); //asking the user for a username

    fgets(temp->user, 51 , stdin);


    lenName= strlen(temp->user); //getting the length of the username

    if((lenName==0) || (lenName>51)) { //checking if it matches the bounds

    printf("Invalid input for a username\n");

    }

    if(temp->user[lenName-1]=='\n') { //removing the new line character from it

    temp->user[lenName-1]=0;

    }

    strcpy(userName, temp->user); //inserting it into the node

    printf("Enter the user's tweet: "); //prompting the user for a tweet

    fgets(temp->text, 141, stdin);

    lenTweet = (strlen(temp->text)); //getting the length of the tweet

    if((lenTweet==0) || (lenTweet>141)){ //checking if it matches the boundaries

    printf("Invaild input for a tweet\n");

    }

    if(temp->text[lenTweet-1]=='\n') { //removing the new line character from it

    temp->text[lenTweet-1]=0;

    }

    lenTweet = strlen(temp->text); //getting the new length of it

    for(int i=0; i<lenName; i++) { //finding the sum of the ASCII values of the username

	sum=sum+userName[i];
   }

    num= sum+lenTweet; //finding a temporary ID

    while(tweetList!=NULL) { //checking if the ID is unique

        if(tweetList->id==num) {

	    num= num + rand()%1000; //if it is not add a random number between 1 and 1000
        }
	tweetList = tweetList->next; //cycling through the whole list

    }

    temp->id= num; //setting the userID

    printf("Your computer-generated userid is %d\n",temp->id);

    return temp; //returning the node

}

