#ifndef LIST_HPP
#define LIST_HPP

#include <cstddef>
#include "ListNode.hpp"

template <typename T>
class List
{
public:
    List();
    List(const List& rhs);
    ~List();

    void insert(size_t idx, T element);
    void pushFront(T element);
    void pushBack(T element);

    T getElement(size_t idx);
    T getFront();
    T getBack();
    size_t getSize();

    void erase(size_t idx);
    void popFront();
    void popBack();
    
    void setElement(size_t idx, T element);
    void setFront(T element);
    void setBack(T element);

    void clear();
    bool empty();
    void print();
   
    
private:
    size_t m_size;
    ListNode<T>* m_head;
    ListNode<T>* m_tail;
};

#include "List.tpp"
#endif  //LIST_HPP