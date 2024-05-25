#include <iostream>
#include "LinkedListQueue.h"

int main() {
    Queue queue;
    std::cout << "Queue operations:" << std::endl;

    // Enqueue elements into the queue
    queue.enqueue(100);
    queue.enqueue(200);
    queue.enqueue(300);

    // Display the front element
    std::cout << "Front element is: " << queue.front() << std::endl;

    // Dequeue an element and display the new front element
    queue.dequeue();
    std::cout << "Front element after dequeue is: " << queue.front() << std::endl;

    // Enqueue another element
    queue.enqueue(400);

    // Dequeue all elements while displaying the front element each time
    while (!queue.isEmpty()) {
        std::cout << "Front element is: " << queue.front() << std::endl;
        queue.dequeue();
    }

    return 0;
}
