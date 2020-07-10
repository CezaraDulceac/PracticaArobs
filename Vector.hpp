
#include <cstddef>
#include <cstdlib>
#include <iostream>
#include <string.h>

template <typename T>
class Vector{
public:

    Vector()
    {
        m_capacity = 0;
        m_size = 0;
        m_data = NULL;
    }

    Vector(const Vector& rhs) 
    { 
        m_size = rhs.m_size;
        m_capacity = rhs.m_capacity; 
        m_data = new T[m_capacity]; 
        memcpy(m_data, rhs.m_data, m_capacity * sizeof(T));

        std::cout << "miau\n";
    } 

    ~Vector() 
    { 
        delete[] this->m_data; 
    }

    size_t getSize()
    {
        return this->m_size;
    }

    size_t getCapacity()
    {
        return this->m_capacity;
    }

    void insert(size_t idx, T element)
    {
        if(idx >= 0 && idx <= this->m_size){
            for(size_t i = idx; i < this->m_size - 1; ++i){
                this->m_data[i+1] = this->m_data[i];
                this->m_size++;
            }
            this->m_data[idx] = element;
        }
    }

    void pushFront(T element)
    {
        if(this->m_capacity <= this->m_size) 
        {
            reserve((m_capacity + 1) * 2);
        }
        
        for(size_t i = m_size; i > 0; --i)
        {
            this->m_data[i] = this->m_data[i-1];
        }
        this->m_data[0] = element;
        this->m_size++;
        
    }

    void pushBack(T element)
    {
        if(this->m_capacity <= this->m_size) 
        {
            reserve((m_capacity + 1) * 2);
        }

        this->m_data[m_size++] = element;
    }

    T getElement(size_t idx)
    {
        return this->m_data[idx];
    }

    T getFront()
    {
        return this->m_data[0];
    }

    T getBack()
    {
        return this->m_data[this->m_size-1];
    }

    void setElement(size_t idx, T element)
    {
        if(idx < this->m_size)
            this->m_data[idx] = element;
    }

    void setFront(T element)
    {
        this->m_data[0] = element;
    }

    void setBack(T element)
    {
        this->m_data[this->m_size] = element;
    }

    void clear()
    {
        for(size_t i = 0; i < this->m_size; ++i){
            this->m_data[i] = 0;
        }
    }

    bool empty()
    {
        bool ok = 1;
        while(ok)
        {
            for(size_t i = 0; i < this->m_size; ++i){
                if(m_data[i] == NULL){
                    ok = 0;
                }
            }
            return true;
        }
        return false;
    }

    void reserve(size_t newCapacity)
    {
        if(this->m_capacity < newCapacity)
        {
            T* newData = new T[newCapacity]; 
            this->m_capacity = newCapacity;

            for(size_t i = 0; i < this->m_size; ++i){
                newData[i] = this->m_data[i];
            }

            delete[] this->m_data; 
            this->m_data = newData;
        }
    }

    void print()
    {
        for(size_t i = 0; i < this->m_size; ++i)
            std::cout << m_data[i] << " \n";
    }


private:
    size_t m_capacity;
    size_t m_size;
    T* m_data;

};
