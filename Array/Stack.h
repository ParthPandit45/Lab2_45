
class ArrayStack
{
    private:
        int *stack;
        int maxSize;
        int topIndex=-1;
    public:
        ArrayStack(int size);
        ~ArrayStack();
        void push (int element);
        void pop();
        bool isEmpty();
        bool isFull();
        int top();
};