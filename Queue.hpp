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

    Queue<T,TContainer>& operator=(const Queue& rhs);

    template <typename U, template <typename> typename UTContainer>
    friend std::ostream& operator<<(std::ostream& os, const Queue<U,UTContainer>& vec);

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