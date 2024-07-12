#include <iostream>

class Stack
{
private:
    class DynamicArray
    {
    private:
        int *array;
        int capacity;
        int size;

    public:
        DynamicArray() : capacity(1), size(0)
        {
            array = new int[capacity];
        }

        ~DynamicArray()
        {
            delete[] array;
        }

        void add(int item)
        {
            if (size == capacity)
            {
                capacity *= 2;
                int *newArray = new int[capacity];
                for (int i = 0; i < size; ++i)
                {
                    newArray[i] = array[i];
                }
                delete[] array;
                array = newArray;
            }
            array[size++] = item;
        }

        void remove(int index)
        {
            if (index < 0 || index >= size)
            {
                std::cerr << "Index out of bounds" << std::endl;
                return;
            }
            for (int i = index; i < size - 1; ++i)
            {
                array[i] = array[i + 1];
            }
            size--;
        }

        int get(int index) const
        {
            if (index < 0 || index >= size)
            {
                std::cerr << "Index out of bounds" << std::endl;
                return -1;
            }
            return array[index];
        }

        int getSize() const
        {
            return size;
        }
    };

    DynamicArray dynArray;

public:
    void push(int item)
    {
        dynArray.add(item);
    }

    int pop()
    {
        if (isEmpty())
        {
            std::cerr << "Stack underflow: Cannot pop from an empty stack" << std::endl;
            return -1;
        }
        int topElement = top();
        dynArray.remove(dynArray.getSize() - 1);
        return topElement;
    }

    int top() const
    {
        if (isEmpty())
        {
            std::cerr << "Stack is empty: No top element to retrieve" << std::endl;
            return -1;
        }
        return dynArray.get(dynArray.getSize() - 1);
    }

    bool isEmpty() const
    {
        return dynArray.getSize() == 0;
    }
};

int main()
{
    Stack stack;

    stack.push(10);
    stack.push(20);
    stack.push(30);

    std::cout << "Top element: " << stack.top() << std::endl;

    std::cout << "Pop: " << stack.pop() << std::endl;
    std::cout << "Top element after pop: " << stack.top() << std::endl;

    return 0;
}
