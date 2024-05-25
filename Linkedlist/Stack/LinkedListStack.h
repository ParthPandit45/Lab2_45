
#include "LinkedList.h"
class LinkedListStack
{
    private:
        LinkedList List;
    public:
        LinkedListStack();
        ~LinkedListStack();
        void push (int element);
        void pop();
        bool isempty();
        int top();
};