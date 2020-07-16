#ifndef LIST_HPP
#define LIST_HPP

#include <cstddef>
#include <iostream>
#include "ListNode.hpp"
#include "ListIterator.hpp"

template <typename T>
class List
{
public:
    List();
    List(const List& rhs);
    ~List();

    List<T>& operator=(const List<T>& rhs);

    std::size_t getSize();

    void insert(std::size_t idx, T element);
    void pushFront(T element);
    void pushBack(T element);

    void erase(std::size_t idx);
    void popFront();
    void popBack();
    
    const T& operator[](std::size_t idx) const;
    T getFront();
    T getBack();

    T& operator[](std::size_t idx);
    void setElement(std::size_t idx, T element);
    void setFront(T element);

    void clear();
    bool empty();

    template<typename U>
    friend std::ostream& operator<<(std::ostream& os, const List<U>& vec);

    ListIterator<T> begin();
    ListIterator<T> end();
    
private:

    std::size_t m_size;
    ListNode<T>* m_head;
    ListNode<T>* m_tail;
    
    void print();
    T getElement(std::size_t idx);
    void setBack(T element);
};

#include "List.tpp"
#endif  //LIST_HPP