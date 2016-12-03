#include <stdio.h>
#include <stdlib.h>
#include"udll.h"

/* Inserts a new node into a specific index
 */

void insert(int index, union Data data){
	Node* newNode= (struct Node*)malloc(sizeof(struct Node));
	newNode->data = data;
	newNode->next= NULL;
	newNode->previous = NULL;
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
    		last->previous = temp;
    		last->next = NULL;
    		head->length = size +1;
  	}
  	else if (index == 0 ) {
    		head->previous = newNode;
    		newNode->next = head;
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
      			newTemp = temp->next;
      			temp->next = newNode;
      			newNode->previous = temp;
      			newNode->next = newTemp;
      		if (newTemp != NULL){
        		newTemp->previous = newNode;
      		}
	else if (index > ((size -1)/2)){
		Node* temp = last;
		Node* newTemp;
		int i = size;
		while (i > index){
			temp  temp->previous;
			i--;
		}
		newTemp = temp->previous;
		temp->previous = newNode;
		newNode->previous = newTemp;
		newNode->next = temp;
		newTemp->next = newNode;
	}
	/*head->length = size +1*/
			
  }
      
}
/* deletes node in specific index. Connects the previous node to the next node*/
void removeNode (int index){
	
        if(index == 0) { 
                head->next->length = head->length;
                *head = *head->next;
                *head->previous = NULL;
        }
	
        else if(index <= head->length) { 
                Node *ptr = head;
                for(int i = 0; i < (index-1); i++) {
                        ptr = ptr->next;
                }
                Node *after = *ptr->next->next;
                ptr->next = *after;
                after->previous = *ptr;
        }
	
        else if(index == head->length) { 
                *last = *last->previous;
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

  
  
  
  
  
  
 
