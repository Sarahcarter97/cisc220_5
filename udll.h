//Assignment 5
//Sarah Carter 10193595
//Katherine DuQuesnay 10138898
//Adele McCallum 10093867
//Dean Wilkins-Reeves 10176758

#ifndef UDLL_H
#define UDLL_H

union Data {
  int i;
  int *iPtr;
  float f;
  float *fPtr;
  char c;
  char *cPtr;
};

typedef scruct Node {
  struct Node *next;
  struct Node *previous;
  union Data data;
} Node;

void linkedList_insert(int index, union Data data);
void linkedList_remove(int index);
union Data linkedList_get(int index);
int linkedList_length();

#endif
