#ifndef SPRIORITYQUEUE_HPP
#define SPRIORITYQUEUE_HPP
#include <cstddef>
#include <iostream>
#include <mutex>
#include "Vector.hpp"

template <typename T, template <typename> typename TContainer, typename TLock = std::mutex>
class SPriorityQueue
{
public:
    SPriorityQueue();
    SPriorityQueue(const SPriorityQueue& rhs);
    ~SPriorityQueue();

    SPriorityQueue<T,TContainer,TLock>& operator=(const SPriorityQueue& rhs);

    size_t getSize();

    void push(T element);
    T pop();

    void clear();
    bool empty();

    template <typename U, template <typename> typename UTContainer, typename UTLock>
    friend std::ostream& operator<<(std::ostream& os, const SPriorityQueue<U,UTContainer, UTLock>& pq);

    typename TContainer<T>::TIterator begin();
    typename TContainer<T>::TIterator end();

private:

    TContainer<T> m_container;
    TLock m_lock;
};
#endif //SPRIORITYQUEUE_HPP