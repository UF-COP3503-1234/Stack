#include <iostream>
using namespace std;

/*
 * Node Struct Prototype
 */

struct Node {
	/* Data Members */
	int value;  // Any integer value
	struct Node* next;  // Pointer to the next node
};


/*
 * Linked List Class Prototype
 */

class LinkedList {
	/* Data members */	
	private:
		Node *head;  // Pointer to the first node in the list
	
	/* Methods */	
	public:
		int getSize();  // Return size of list
		
		void insertAt(int value, int pos);  // Inserts a new value at pos
		void deleteAt(int pos);  // Deletes the node at pos
		int search(int value);  // Searches for a value then returns the index, returns -1 if not found
		int findAt(int pos); 	// Returns the value at a given position
		void print();		// Prints out all the node values in the list
		void updateAt(int newValue, int pos);  // Updates the node at pos to the newValue

		/*Constructor*/
		LinkedList() {
			head = NULL;		
		}
};
