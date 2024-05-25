#include "Queue.h"
#include <iostream>

Queue::Queue(int cap) :  maxQueueSize(cap), front(-1), rear(-1){
    arr = new int[maxQueueSize];
}

Queue::~Queue() {
    delete[] arr;
}

bool Queue::enqueue(int value) {
    if (isFull()) {
        return false;
    }
    front=0;
    rear = (rear + 1) %  maxQueueSize;
    arr[rear] = value;
  
    return true;
}

bool Queue::dequeue() {
    if (isEmpty()) {
        return false;
    }
    front = (front + 1) %  maxQueueSize;
   
    return true;
}

int Queue::getFront()   {
    if (isEmpty()) 
    {
        std::cout<<"Queue is empty"<<std::endl;
        return -1;
    }
    return arr[front];
}

int Queue::getRear() {
    if (isEmpty()) 
    {
        std::cout<<"Queue is empty"<<std::endl;
        return -1;
    }
    return arr[rear];
}

bool Queue::isEmpty()   {
    return (front == rear);
}

bool Queue::isFull()   {
    if (rear==maxQueueSize-1)
        return true;
    else
        return false;
}


