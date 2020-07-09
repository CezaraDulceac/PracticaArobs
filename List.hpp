#include <cstddef>
#include "ListNode.hpp"

class List
{
public:
    List();
    ~List();

    void insert(size_t idx, int element);
    void pushFront(int element);
    void pushBack(int element);

    int getElement(size_t idx);
    int getFront();
    int getBack();
    int getSize();
    
    void setElement(size_t idx, int element);
    void setFront(int element);
    void setBack(int element);

    void clear();
    bool empty();
   
    
private:
    size_t m_size;
    ListNode* m_head;
    ListNode* m_tail;
};