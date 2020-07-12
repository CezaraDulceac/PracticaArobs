#include "ListNode.hpp" 
#include <iostream>

template <typename T>
 ListNode<T>::ListNode(ListNode* prev, ListNode* next, T data)
 {
     m_data = data;
     m_next = next;
     m_prev = prev;
 }

template <typename T>
ListNode<T>::ListNode(const ListNode& rhs)
{
     m_data = rhs.m_data;
     m_next = rhs.m_next;;
     m_prev = rhs.m_prev;
}

template <typename T>
 ListNode<T>::~ListNode()
 {
     if(m_prev != NULL)
     {
        m_prev->m_next = m_next;
     } 
     if(m_next != NULL)
     {
        m_next->m_prev = m_prev;
     }
 }

template <typename T>
ListNode<T>* ListNode<T>::getPrev()
{
    if(m_prev != NULL)
        return m_prev;
    return NULL;
}

template <typename T>
ListNode<T>* ListNode<T>::getNext()
{
    if(m_next != NULL)
        return m_next;
    return NULL;
}

template <typename T>
void ListNode<T>::setPrev(ListNode* prev)
{
   m_prev = prev;
}

template <typename T>
void ListNode<T>::setNext(ListNode* next)
{
   m_next = next;
}

template <typename T>
T ListNode<T>::getData()
{
    return m_data;
}

template <typename T>
void ListNode<T>::setData(ListNode* data)
{
    m_data = data->m_data;
    m_prev = data->m_prev;
    m_next = data->m_next;
}

template <typename T>
void ListNode<T>::setDataT(T data)
{
     m_data = data;
}

template <typename T>
void ListNode<T>::print()
{
    std::cout << "prev: "
              << ((m_prev != NULL) ?  std::to_string(m_prev->m_data) : "NULL") << "\n";  
    std::cout << "data: " 
              << m_data << "\n"; 
    std::cout << "next: "
              << ((m_next != NULL) ?  std::to_string(m_next->m_data) : "NULL") << "\n";   
    
}

