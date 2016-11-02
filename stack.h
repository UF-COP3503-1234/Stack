#include "linkedlist.h"

class Stack {
  // Data members
private:
  LinkedList list;
  int topIndex = 0;
  // Methods
public:
  void push(int value); // insert new value to top of list
  int pop(); // Remove and return current top value
  int top(); // Return current top value WITHOUT removing it

  int size(); // return size of Stack
  bool isEmpty(); // Return true if the stack is empty
  void print(); // Prints stuff out
  // Constructor
  Stack() {
    list = LinkedList();
  }
};
