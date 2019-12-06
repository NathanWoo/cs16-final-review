//filename: linkedlist.h
#ifndef LINKEDLIST_H
#define LINKEDLIST_H
#include "node.h"
//IMPORTANT: In all the functions the linked-list may only contain 
//letters of the alphabet in either lower or upper case

//Precondition: The address of a valid LinkedList and a int value 
//that may be an alphabet in either lower or upper case
//Postcondition: Adds a new node with data element set to value to the 
//end of the linked list. 
void addToHeadOfList(LinkedList*& list, int value);

//Precondition: A int array with a given length 
//Postcondition: The address of a new LinkedList containing all the 
// integer of the input array in the reversed order, where each node of 
// the linked list contains one inteteger of the array.          
LinkedList* arrayToReversedLinkedList(int* arr, int len);

//Precondition: The address of a valid LinkedList
//Postcondition:  deallocates all of its memory and sets its
// head pointer to NULL    
void deleteList(LinkedList*& list);


//Precondition: The address of a valid LinkedList and a char value  
//that is a letter of the alphabet
//Postcondition: Prints outs all the values stored in the LinkedList
void printList(LinkedList* list);

#endif
