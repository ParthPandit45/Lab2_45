#ifndef LINKEDLISTQUEUE_H
#define LINKEDLISTQUEUE_H
#pragma once
#include "LinkedList.h"
class Queue

{
private:
    LinkedList List;
public:
    Queue();
    ~Queue();
    void enqueue(int value);
    void dequeue();
    int front();
    int back();
    bool isEmpty();

};
#endif

