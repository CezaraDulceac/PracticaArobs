#include "List.hpp" 
#include <iostream>

template <typename T>
List<T>::List()
{
    m_size = 0;
    m_head = NULL;
    m_tail = NULL;
}

template <typename T>
List<T>::List(const List& rhs)
{
    m_size = 0;
    m_head = NULL;
    m_tail = NULL;

   ListNode<T>*p = rhs.m_head;
   while(p != NULL)
   {
       pushBack(p->getData());
       ++m_size;
       p = p->getNext();
   }
}

template <typename T>
List<T>::~List()
{
    ListNode<T>* current = m_head;
    ListNode<T>* next;
    while( current != NULL ) 
    {
        next = current->getNext();
        delete current;
        current = next;
    }
    m_head = NULL;
    m_tail = NULL;
}

template <typename T>
void List<T>::insert(size_t idx, T element)
{
    if(idx < 0 || idx > m_size) return;

    ListNode<T>* node = new ListNode<T>(NULL,NULL,element);

    ListNode<T>* p = m_head;
    if(idx == 0) 
    {
        pushFront(element);
    }
    if(idx == m_size)
    {
        pushBack(element);
    }
    while(idx)
    {
        p = p->getNext();
        --idx;
    }

    p->getPrev()->setNext(node);
    node->setPrev(p->getPrev());
    p->setPrev(node);
    node->setNext(p);
    
    ++m_size;
}

template <typename T>
void List<T>::pushFront(T element)
{
    ListNode<T>* node = new ListNode<T>(NULL,NULL,element);

    if(m_head == NULL)
    {
        m_head = m_tail = node;
    }else
    {
        node->setNext(m_head);
        m_head->setPrev(node);
        m_head = node;
    }
    ++m_size;
}

template <typename T>
void List<T>::pushBack(T element)
{
   ListNode<T>* node = new ListNode<T>(NULL,NULL,element);
   ListNode<T>* p = m_tail;
   if(m_head == NULL)
   {
       m_head = m_tail = node;
       return;
   }

    p->setNext(node);
    node->setPrev(p);
    m_tail = node;

    ++m_size;
}

template <typename T>
T List<T>::getElement(size_t idx)
{
    if(idx < 0 || idx > m_size) return 0;
    ListNode<T>* p = m_head;
    if(idx == 0) 
    {
        return m_head->getData();
    }
    if(idx == m_size)
    {
        return m_tail->getData();
    }
    while(idx)
    {
        p = p->getNext();
        --idx;
    }
    return p->getData();
}

template <typename T>
T List<T>::getFront()
{
   return m_head->getData();
}

template <typename T>
T List<T>::getBack()
{
  return m_tail->getData();
}

template <typename T>
size_t List<T>::getSize()
{
    if(m_head == NULL) return 0;
    if(m_head == m_tail) return 1;

    size_t size = 0;
    ListNode<T>* p = m_head;
    while(p != NULL)
    {
        p = p->getNext();
        ++size;
    }

    return size;
}

template <typename T>
void List<T>::erase(size_t idx)
{
    if(idx < 0 || idx > m_size) return;

    ListNode<T>* p = m_head;
    if(idx == 0) 
    {
        popFront();
    }
    if(idx == m_size)
    {
        popBack();
    }
    while(idx)
    {
        p = p->getNext();
        --idx;
    }

    // p->getPrev()->setNext(p->getNext()); --facut in destructor
    // p->getNext()->setPrev(p->getPrev());
    delete p;
    --m_size;
}

template <typename T>
void List<T>::popFront()
{
    ListNode<T>*p = m_head;
    m_head = m_head->getNext();
    delete p;
    --m_size;

    if(m_size == 0)
    {
        m_head = m_tail = NULL;
    }
}

template <typename T>
void List<T>::popBack()
{
    if(m_head != NULL)
    {
        ListNode<T>*p = m_tail;
        m_tail = m_tail->getPrev();
        delete p;
        --m_size;

        if(m_size == 0)
        {
            m_head = m_tail = NULL;
        }
    }
    
}

template <typename T>
void List<T>::setElement(size_t idx, T element)
{
    if(idx < 0 || idx > m_size) return;

    ListNode<T>* p = m_head;
    if(idx == 0) 
    {
       setFront(element);
    }
    if(idx == m_size)
    {
       setBack(element);
    }
    while(idx)
    {
        p = p->getNext();
        --idx;
    }

    p->setDataT(element);
}

template <typename T>
void List<T>::setFront(T element)
{
    m_head->setDataT(element);
}

template <typename T>
void List<T>::setBack(T element)
{
     m_tail->setDataT(element);
}

template <typename T>
void List<T>::clear()
{
    ListNode<T>* p = m_head;
    ListNode<T>* q;
    while(p != NULL)
    {
        q = p->getNext();
        free(p);
        p = q;
    }

    m_head = m_tail = NULL;
    m_size = 0;
}

template <typename T>
bool List<T>::empty()
{
   if(m_size == 0) return true;
   return false;
}


template <typename T>
void List<T>::print()
{
   ListNode<T>*p = m_head;
   while(p != NULL)
   {
       std::cout<< std::to_string(p->getData()) << " ";
       p = p->getNext();
   }
    std::cout<< "\n";
}




