#ifndef QUEUE_HPP
#define QUEUE_HPP


#include <cstddef>
template <typename T, template <typename> typename TContainer>
class Queue
{
public:
    Queue();
    Queue(const Queue& rhs);
    ~Queue();

    size_t getSize();

    void push(T element);
    T pop();

    void clear();
    bool empty();
    void print();

private:

    TContainer<T> m_container;
};


#include "Queue.tpp"
#endif  //QUEUE_HPP