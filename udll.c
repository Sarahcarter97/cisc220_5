#include <stdio.h>
#include <stdlib.h>
#include"udll.h"

/* creates a new node and inserts it into the specified index. 
Connects the previous node to it and connect itself to the next node */
/* size or head.length */
void insert(int index, union Data data){
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
      Node* temp1;
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
  }
      
}
/* deletes node in specific index. Connects the previous node to the next node*/
void removeNode (int index){
}
/* returns the data value of the node of the specific index*/ 

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

  
  
  
  
  
  
 
