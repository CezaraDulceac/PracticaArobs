#include "ListNode.hpp" 
#include <iostream>

 ListNode::ListNode(ListNode* prev, ListNode* next, int data)
 {
     m_data = data;
     m_next = next;
     m_prev = prev;
 }

 ListNode::~ListNode()
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

ListNode*  ListNode::getPrev()
{
    if(m_prev != NULL)
        return m_prev;
    return NULL;
}

ListNode*  ListNode::getNext()
{
    if(m_next != NULL)
        return m_next;
    return NULL;
}

void ListNode::setPrev(ListNode* prev)
{
   m_prev = prev;
}

void ListNode::setNext(ListNode* next)
{
   m_next = next;
}

int ListNode::getData()
{
    return m_data;
}

void ListNode::setData(ListNode* data)
{
    m_data = data->m_data;
    m_prev = data->m_prev;
    m_next = data->m_next;
}

void ListNode::setDataInt(int data)
{
     m_data = data;
}

