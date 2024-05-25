#include <iostream>
#include "LinkedListStack.h"
LinkedListStack::LinkedListStack(){}
LinkedListStack::~LinkedListStack(){}
bool LinkedListStack::isempty()
{
    return List.isEmpty();
}
void LinkedListStack::pop()
{
   if (List.isEmpty()) {
        std::cout << "Stack underflow: Unable to pop from an empty stack." << std::endl;
        return;
    }
    List.removeFromHead();
}

void LinkedListStack::push (int element)
{
    List.addToHead(element);
}

int LinkedListStack::top()
{
    if (List.isEmpty()) {
        std::cout << "Stack is empty." << std::endl;
        return -1; 
    }
    Node* head = List.getHead(); 
    return head->info;
}