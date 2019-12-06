#include "linkedlist.h"
#include <iostream>
using namespace std;


//Precondition: The address of a valid LinkedList and a int value 
//Postcondition: Adds a new node with data element set to value to the 
// head of the linked list. 
void addToHeadOfList(LinkedList*& list, int value) {
    Node* temp = new Node;
    temp->data = value;
    temp->next = NULL;

    if (list->head == NULL && list->tail == NULL){
        list->head = temp;
        list->tail = temp;
    } else {
        temp->next = list->head;
        list->head = temp;
    }
}

//Precondition: A int array with a given length 
//Postcondition: The address of a new LinkedList containing all the 
// integer of the input array in the same order, where each node of 
// the linked list contains one inteteger of the array.             
LinkedList* arrayToReversedLinkedList(int* arr, int len) {
    LinkedList* list = new LinkedList;
    for (int i = 0; i < len; i++) {
        addToHeadOfList(list, arr[i]);
    }
    return list;
}

//Precondition: The address of a valid LinkedList
//Postcondition:  deallocates all of its memory and sets its
// head and tail pointer to NULL  
void deleteList(LinkedList*& list){
    Node* current = list->head; // deref headRef to get the real hea
    Node* next;
    while (current != NULL) {
        next = current->next; // note the next pointer
        delete current; // delete the node
        current = next; // advance to the next node
    }
    list->head = NULL;
    list->tail = NULL;
}

//Precondition: The address of a valid LinkedList and 
//Postcondition: Prints outs all the values stored in the LinkedList
void printList(LinkedList* list) {
    Node* temp = list->head;
    while (temp != NULL) {
        if (temp->next != NULL){
            cout << temp->data << " -> ";
        } else {
            cout << temp->data << endl;
        }
        temp = temp->next;
    }
}
