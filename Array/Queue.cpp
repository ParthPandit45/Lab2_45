#include "Queue.h"
#include <iostream>

Queue::Queue(int cap) :  maxQueueSize(cap), front(-1), rear(-1), size(0) {
    arr = new int[maxQueueSize];
}

Queue::~Queue() {
    delete[] arr;
}

bool Queue::enqueue(int value) {
    if (isFull()) {
        return false;
    }
    rear = (rear + 1) %  maxQueueSize;
    arr[rear] = value;
    size++;
    return true;
}

bool Queue::dequeue() {
    if (isEmpty()) {
        return false;
    }
    front = (front + 1) %  maxQueueSize;
    size--;
    return true;
}

int Queue::getFront()   {
    if (isEmpty()) {
        throw std::runtime_error("Queue is empty");
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
    return (size == 0);
}

bool Queue::isFull()   {
    if (rear==maxQueueSize-1)
        return true;
    else
        return false;
}


