#include <cstddef>
#include <cstdlib>
class Vector{
public:

    Vector(std::size_t elem);
    ~Vector();

    size_t getSize();
    size_t getCapacity();

    //void setSize(size_t idx);
    //void setCapacity(size_t idx);

    void insert(size_t idx, int element);
    void pushFront(int element);
    void pushBack(int element);

    int getElement(size_t idx);
    int getFront();
    int getBack();
    
    void setElement(size_t idx, int element);
    void setFront(int element);
    void setBack(int element);

    void clear();
    bool empty();
    void print();
    void reserve(size_t newCapacity);

private:
    size_t m_capacity;
    size_t m_size;
    int* m_data;

    

};