#include <iostream>
#include "Queue.h"
int main ()
{
   
    Queue q(5);  

    //Check if queue is empty
    std::cout << "Is the queue empty? " << (q.isEmpty() ? "Yes" : "No") << std::endl;

    // Enqueue elements
    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);
    q.enqueue(40);
    q.enqueue(50);

    // Check if the queue is full
    std::cout << "Is the queue full? " << (q.isFull() ? "Yes" : "No") << std::endl;

    // Get the front element
    if(!q.isEmpty())
        std::cout<<"Front element: "<<q.getFront()<<std::endl;


    // Get the rear element
    std::cout << "Rear element: " << q.getRear() << std::endl;

    // Dequeue elements
    q.dequeue();
    q.dequeue();

    
    std::cout << "Front element after dequeuing: " << q.getFront() << std::endl;
    std::cout << "Rear element after dequeuing: " << q.getRear() << std::endl;

    // Check if the queue is empty
    std::cout << "Is the queue empty after dequeuing? " << (q.isEmpty() ? "Yes" : "No") << std::endl;

    // Dequeue all elements
    while (!q.isEmpty()) {
        q.dequeue();
    }

    // Check if the queue is empty now
    std::cout << "Is the queue empty after dequeuing all elements? " << (q.isEmpty() ? "Yes" : "No") << std::endl;

    return 0;
}
