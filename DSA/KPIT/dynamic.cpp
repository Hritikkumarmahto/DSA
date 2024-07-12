#include <iostream>

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

    int get(int index)
    {
        if (index < 0 || index >= size)
        {
            std::cerr << "Index out of bounds" << std::endl;
            return -1;
        }
        return array[index];
    }
};

int main()
{
    DynamicArray dynArray;

    dynArray.add(10);
    dynArray.add(20);
    dynArray.add(30);

    std::cout << "Element at index 0: " << dynArray.get(0) << std::endl;
    std::cout << "Element at index 1: " << dynArray.get(1) << std::endl;
    std::cout << "Element at index 2: " << dynArray.get(2) << std::endl;

    return 0;
}
