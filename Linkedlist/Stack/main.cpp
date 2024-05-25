#include <iostream>
#include "LinkedListStack.h"

int main() {
    LinkedListStack stack;
    std::cout << "Stack operations:" << std::endl;

    // Push elements onto the stack
    stack.push(10);
    stack.push(20);
    stack.push(30);

    // Display the top element
    std::cout << "Top element is: " << stack.top() << std::endl;

    // Pop the top element and display the new top element
    stack.pop();
    std::cout << "Top element after pop is: " << stack.top() << std::endl;

    // Push another element
    stack.push(40);

    // Pop all elements while displaying the top element each time
    while (!stack.isempty()) {
        std::cout << "Top element is: " << stack.top() << std::endl;
        stack.pop();
    }

    return 0;
}
