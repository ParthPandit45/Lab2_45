#include <iostream>
#include "Stack.h"
ArrayStack::ArrayStack(int size) : maxSize(size), topIndex(-1) {
    stack = new int[maxSize];
}
ArrayStack::~ArrayStack() {

    delete[] stack;
}
bool ArrayStack::isEmpty()
{
    return (topIndex<0);
}
bool ArrayStack::isFull()
{
    return (topIndex==maxSize-1);
}
void ArrayStack::push(int element)
{
     if (isFull()) {
        std::cout<<"Stack Overflow"<<std::endl;
    }
    stack[++topIndex] = element;
}
void ArrayStack::pop()
{
    if (isEmpty()) {
        std::cout<<"Stack Underflow"<<std::endl;
    }
    --topIndex;
}
int ArrayStack::top()
{   if (!isEmpty())
        return stack[topIndex];
    else
        {
            std::cout<<"Empty stack"<<std::endl;  
            return -1;
        }
}
