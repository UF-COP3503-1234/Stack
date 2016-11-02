#include <iostream>
#include "stack.h"

using namespace std;


void Stack::push(int value) {
  list.insertAt(value, topIndex);
}

int Stack::pop() {
  int result = list.findAt(topIndex);
  list.deleteAt(topIndex);
  return result;
}

int Stack::top() {
  int result = list.findAt(topIndex);
  return result;
}

int Stack::size() {
  return list.getSize();
}

bool Stack::isEmpty() {
  if (list.getSize() == 0) {
    return true;
  } else {
    return false;
  }
}

void Stack::print() {
  // list.print(); Technically works
  Stack printList = Stack();
  while (!isEmpty()) {
    cout << top() << endl;
    printList.push(pop());
  }
  while (!printList.isEmpty()) {
    push(printList.pop());
  }
}
