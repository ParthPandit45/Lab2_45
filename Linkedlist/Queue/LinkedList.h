
#include "Node.h"


class LinkedList
{
    private:
        Node *Head;
        Node *Tail;
    
    public:
        LinkedList();
        ~LinkedList();
        bool isEmpty();
        void addToHead(int data);
        void addToTail(int data);
        void add(int data, int pred);
        void removeFromHead();
        void removeFromTail();
        void remove(int data);
        bool retrieve (int data, Node * &outputNodepointer);
        bool search (int data);
        void traverse();
        Node* getHead() ;
        Node* getTail();

};
