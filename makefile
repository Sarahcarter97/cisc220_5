//Assignment 5
//Sarah Carter 10193595
//Katherine DuQuesnay 10138898
//Adele McCallum 10093867
//Dean Wilkins-Reeves 10176758

#Rule 1
main.o: main.c
	      gcc -Wall -c main.c
        
#Rule 2
udll.o: udll.c udll.h
	      gcc -Wall -c udll.c
        
#Rule 3
universalDoubleLinkedList: main.o udll.o
	      gcc -Wall -o universalDoubleLinkedList main.o udll.o
