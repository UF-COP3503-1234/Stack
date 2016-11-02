#include <iostream>
#include "stack.h"

using namespace std;

int main(int argc, char const *argv[]) {
  Stack testStack = Stack();

  testStack.push(5);
  testStack.push(4);
  testStack.push(3);
  testStack.push(2);
  testStack.push(1);

  testStack.print();

  testStack.pop();
  testStack.push(5);
  cout << testStack.top() << endl; // Should be 5
  cout << testStack.size() << endl; // Should also be five

  testStack.print();
  return 0;
}
