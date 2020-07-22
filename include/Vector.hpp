#ifndef VECTOR_HPP
#define VECTOR_HPP

#include <cstddef>
#include <ostream>
#include "VectorIterator.hpp"


template <typename T>
class Vector{
    using Iterator = VectorIterator<T>;
public:

    Vector();
    Vector(const Vector& rhs);
    Vector(Vector&& rhs);
    ~Vector();

    Vector<T>& operator=(const Vector& rhs);
    Vector<T>& operator=(Vector&& rhs);

    std::size_t getSize();
    std::size_t getCapacity();

    void insert(std::size_t idx, T element);
    void pushFront(T element);
    void pushBack(T element);
    
    void erase(std::size_t idx);
    void popFront();
    void popBack();

    T getFront();
    T getBack();

    const T& operator[](std::size_t idx) const;
    T& operator[](std::size_t idx);

    void setFront(T element);
    void setBack(T element);

    void clear();
    bool empty();

    template<typename U>
    friend std::ostream& operator<<(std::ostream& os, const Vector<U>& vec);

    void reserve(std::size_t newCapacity);
    void resize(std::size_t newSize);

    VectorIterator<T> begin();
    VectorIterator<T> end();

private:
    std::size_t m_capacity;
    std::size_t m_size;
    T* m_data;

};

#include "Vector.tpp"
#endif  //VECTOR_HPP