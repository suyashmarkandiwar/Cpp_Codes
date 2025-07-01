#include <iostream>

class Vector
{

public:
    Vector(int newSize)
    {
        m_arr = new int[newSize];
        m_size = newSize;
        m_count = 0;
    }

    void print()
    {
        std::cout << "Vector Contents:\n";
        for (int i = 0; i < m_count; ++i)
        {
            std::cout << m_arr[i] << ", ";
        }
        std::cout << std::endl;
    }

    int size()
    {
        return m_size;
    }

    int count()
    {
        return m_count;
    }

    void push_back(int new_element)
    {
        if (m_count >= m_size)
        {
            m_size *= 2;
            int* newArr = new int[m_size];

            for (int i = 0; i < m_count; ++i)
            {
                newArr[i] = arr[i];
            }
            delete[] arr;
            arr = newArr;
        }

        arr[m_count] = new_element;
        m_count += 1;
    }

    int& operator[](int index)
    {
        return m_arr[index];
    }

    /*
    int operator[](int index)
    {
        return m_arr[index];
    }
    */

    // Homework:
    // After uncommenting non-ampersand operator[], try doing this:
    // A[0] = 111;
    // std::cout << A[0]; // expected value 111?
    // if you do not get 111, figure out why

    Vector operator+(Vector& other)
    {
        for (int i = 0; i < other.count(); ++i)
        {
            this->push_back(other[i]);
        }
    }

private:
    int * m_arr;
    int m_size;
    int m_count;

};

int main()
{
    Vector A;
    Vector B;
    A.push_back(3);
    A.push_back(5);
    B.push_back(1);
    B.push_back(511);
    A.print(); //3, 5
    B.print(); // 1, 511

    A = A + B;
    A.print(); // 3, 5, 1, 511

    int* a = new int[3]; 
    a[0] = 4;
    a[1] = 5;

    std::cout << a[0]; // output 4
    std::cout << A[0]; // output 3

}