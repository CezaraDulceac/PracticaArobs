#include "Vector.hpp"
#include "base.hh"

void testResize()
{
    Vector<int> vec;
    ALEPH_ASSERT_EQUAL(vec.getCapacity(), 10); //test for constructor
    vec.resize(10); 
    ALEPH_ASSERT_EQUAL(vec.getSize(), 10);
}

void testReserve()
{
    Vector<int> vec;
    ALEPH_ASSERT_EQUAL(vec.getCapacity(), 10); //test for constructor
    vec.reserve(20); 
    ALEPH_ASSERT_EQUAL(vec.getCapacity(), 20);
}

void testInsert()
{
    Vector<int> vec;
    vec.resize(10);

    vec.insert(3,2);
    ALEPH_ASSERT_EQUAL(vec.getSize(), 10);
    ALEPH_ASSERT_EQUAL(vec.getCapacity(), 22);
    ALEPH_ASSERT_EQUAL(vec[3], 2);
}
