#include <iostream>
#include "LinkedListQueue.h"
Queue::Queue (){}
Queue::~Queue(){}   
void Queue::enqueue(int value)
{
    List.addToTail(value);
}
void Queue::dequeue()
{   if (!List.isEmpty())
        List.removeFromHead();
    else    
        std::cout<<"Queue is empty."<<std::endl;
}
bool Queue::isEmpty()
{
    return (List.isEmpty());
}
int Queue::front()
{
    if(!isEmpty())
        return (List.getHead()->info);
    else    
    {   std::cout<<"Empty queue"<<std::endl;
        return 0;
    }
}
int Queue::back()
{   
    if (!isEmpty())
        return (List.getTail()->info);
    else    
    {
        std::cout<<"Empty queue"<<std::endl;
        return -1;
    }

}