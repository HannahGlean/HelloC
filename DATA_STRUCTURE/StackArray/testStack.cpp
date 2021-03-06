//Program to test the various operations of a stack

#include <iostream>
#include "myStack.h"

using namespace std;

void testCopyConstructor(stackType<string> otherStack);

int main()
{
        /// Declare 3 stacks
	stackType<string> stack(50);
	stackType<string> copyStack(50);
	stackType<string> dummyStack(100);

        /// Initialize 1st stack to empty state
	stack.initializeStack();

        /// Push elements: "Milk", "Butter", "Eggs"
	stack.push("Milk");
	stack.push("Butter");
	stack.push("Eggs");

        /// Copy stack into copyStack
	copyStack = stack;  
	cout << "The elements of copyStack: ";

        /// Print copyStack
	while (!copyStack.isEmptyStack()) 
	{
		cout << copyStack.top() << " ";
		copyStack.pop();
	}
	cout << endl;

	copyStack = stack;

	testCopyConstructor(stack); //test the copy constructor

	if (!stack.isEmptyStack())
	cout << "The original stack is not empty." << endl
	<< "The top element of the original stack: "
	<< copyStack.top() << endl;

	dummyStack = stack; //copy stack into dummyStack
	cout << "The elements of dummyStack: ";

	while (!dummyStack.isEmptyStack()) //print dummyStack
	{
		cout << dummyStack.top() << " ";
		dummyStack.pop();
	}
	cout << endl;
	return 0;
}

void testCopyConstructor(stackType<string> otherStack)
{
  if (!otherStack.isEmptyStack())
  cout << "otherStack is not empty." << endl
  << "The top element of otherStack: "
  << otherStack.top() << endl;
}
