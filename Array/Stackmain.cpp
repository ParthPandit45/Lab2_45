#include <iostream>
#include"Stack.h"

int main()
{
    ArrayStack stack(5);
    // Push elements onto the stack
    stack.push(10);
    stack.push(20);
    stack.push(30);
    std::cout << "Top element is: " << stack.top() << std::endl;
    stack.pop();
        std::cout << "Top element after pop is: " << stack.top() << std::endl;
    stack.push(40);
    stack.push(50);
    stack.push(60);
    stack.push(70);
    stack.pop();
        std::cout << "Top element after pop is: " << stack.top() << std::endl;//Since stack is full the element won't be pushed
    return 0;
    
} 