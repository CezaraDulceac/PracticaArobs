#include "List.hpp" 
#include <iostream>

List::List()
{
    m_size = 0;
    m_head = NULL;
    m_tail = NULL;
}

List::~List()
{
    ListNode* current = m_head;
    ListNode* next;
    while( current != NULL ) 
    {
        next = current->getNext();
        delete current;
        current = next;
    }
    m_head = NULL;
    m_tail = NULL;
}


void List::insert(size_t idx, int element)
{
    ListNode* node = new ListNode(NULL,NULL,element);

    ListNode* p = m_head;
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
    
    m_size++;
}

void List::pushFront(int element)
{
    ListNode* node = new ListNode(NULL,NULL,element);

    if(m_head == NULL)
    {
        m_head = m_tail = node;
    }else
    {
        node->setNext(m_head);
        m_head->setPrev(node);
        m_head = node;
    }
    m_size++;
}

void List::pushBack(int element)
{
   ListNode* node = new ListNode(NULL,NULL,element);
   ListNode* p = m_head;
   if(m_head == NULL)
   {
       m_head = m_tail = node;
   }
   if(m_head == m_tail)
   {
       m_head->setNext(node);
       node->setPrev(m_head);
       m_tail = node;
   }
   while(p->getNext() != NULL)
   {
       p = p->getNext();
   }
    p->setNext(node);
    node->setPrev(p);
    m_tail = node;

    m_size++;
}


