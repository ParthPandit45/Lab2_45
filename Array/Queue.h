
class Queue {
private:
    int* arr;
    int front;
    int rear;
    int maxQueueSize;
   
public:
    Queue(int maxQueueSize);
    ~Queue();

    bool enqueue(int value);
    bool dequeue();
    int getFront();
    int getRear();
    bool isEmpty();
    bool isFull();
   
};


