#include "linkedlist.h"
#include <iostream>
using namespace std;

int main() {
    int arr[5] = {1,2,3,4,5};

    LinkedList *mylist = arrayToReversedLinkedList(arr, 5);
    cout << "After calling arrayToReversedLinkedList on [1,2,3,4,5],\nthe element stroed in the list are: " << endl;
    printList(mylist);
    deleteList(mylist);
    cout << "After deleting the list we have: " << endl;
    printList(mylist);

    // Node* p1 = null;
    // Node* p2 = NULL;
    // Node* p3 = Null;
    // Node* p4 = nullptr;

    return 0;
}