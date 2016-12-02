#include <stdio.h>
#include <stdlib.h>
#include"udll.h"

/* creates a new node and inserts it into the specified index. 
Connects the previous node to it and connect itself to the next node */
/* size or head.length */
void insert(int index, union Data data){
	Node* newNode= (struct Node*)malloc(sizeof(struct Node));
	newNode->data = data;
	newNode->nextPtr= NULL;
	newNode->prevPtr = NULL;
	return newNode
	
  	if (head == NULL){
    		head = newNode;
    		last = newNode;
    		head->length = 1;
    		return;
  	}
  	else if (index == (size-1)) {
    		Node* temp = last;
    		last = newNode;
    		last->prevPtr = temp;
    		last->nextPtr = NULL;
    		head->length = size +1;
  	}
  	else if (index == 0 ) {
    		head->prevPtr = newNode;
    		newNode->nextPtr = head;
    		newNode->length = size;
    		head = newNode;
   		head->length = size +1;
  	}
 	else if (index <= (size -1) - 2){
    		if (index <= (size / 2)){
      			Node* temp = head;
      			Node* newTemp;
      			int i = 0;
      			while (i< index -1){
          			temp = temp->next;
          			i++;
      			}
      			newTemp = temp->nextPtr;
      			temp->next = newNode;
      			newNode->prevPtr = temp;
      			newNode->next = newTemp;
      		if (newTemp != NULL){
        		newTemp->prevPtr = newNode;
      		}
	else if (index > ((size -1)/2)){
		Node* temp = last;
		Node* newTemp;
		int i = size;
		while (i > index){
			temp  temp->prevPtr;
			i--;
		}
		newTemp = temp->prevPtr;
		temp->prevPtr = newNode;
		newNode->prevPtr = newTemp;
		newNode->nextPtr = temp;
		newTemp->nextPtr = newNode;
	}
	/*head->length = size +1*/
			
  }
      
}
/* deletes node in specific index. Connects the previous node to the next node*/
void removeNode (int index){
	
        if(index == 0) { 
                head->next->length = head->length;
                *head = *head->next;
                *head->prev = NULL;
        }
	
        else if(index <= head->length) { 
                Node *ptr = head;
                for(int i = 0; i < (index-1); i++) {
                        ptr = ptr->next;
                }
                Node *after = *ptr->next->next;
                ptr->next = *after;
                after->prev = *ptr;
        }
	
        else if(index == head->length) { 
                *last = *last->prev;
                last->next = NULL;
        }
        else { 
                printf("Index not valid");
        }
        head->length = head->length - 1;	
}

union Data get(int index){
  
	int i;
	if (index <= (length()) / 2) {
	  	ptr = &head;
	  	for (i = 0; i < index; i++) {
	  		  ptr=(*ptr).next;
		  } 
		  return (*ptr).data;
	} 
  else {
		  ptr = &last;
		  for (j = 0; j < length() - (index - j); j++) {
			    ptr=(*ptr).previous;
		  } 
		  return (*ptr).data;
	} 
  
}
  
/*returns the number of nodes in the list*/

int length(){
}

  
  
  
  
  
  
 
