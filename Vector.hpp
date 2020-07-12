#ifndef VECTOR_HPP
#define VECTOR_HPP

#include <cstddef>
#include <cstdlib>
#include <iostream>
#include <string.h>

template <typename T>
class Vector{
public:

     Vector();
    Vector(const Vector& rhs);
    ~Vector();

    size_t getSize();
    size_t getCapacity();

    void insert(size_t idx, T element);
    void pushFront(T element);
    void pushBack(T element);
    
    void erase(size_t idx);
    void popFront();
    void popBack();

    T getElement(size_t idx);
    T getFront();
    T getBack();

    void setElement(size_t idx, T element);
    void setFront(T element);
    void setBack(T element);

    void clear();
    bool empty();
    void print();
    void reserve(size_t newCapacity);


private:
    size_t m_capacity;
    size_t m_size;
    T* m_data;

};

#include "Vector.tpp"
#endif  //VECTOR_HPP