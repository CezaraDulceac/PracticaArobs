#include "Vector.hpp"
#include "List.hpp"
#include "ListNode.hpp"
#include "Queue.hpp"

#include <iostream>

int main() 
{ 
  Vector<int> vec;
  vec.pushBack(1);
  vec.pushBack(2);
  vec.pushBack(3);
  std::cout << vec[0] << std::endl; 
  std::cout << vec[1] << std::endl; 
  vec[0] = 10;
  std::cout << vec[0] << std::endl; 
  std::cout << vec[1] << std::endl; 

  Vector<int> vec1;
  vec1 = vec;
   
   std::cout << vec1;
  // vec.pushBack(0);
  // vec.pushBack(1);
  // vec.pushBack(2);
  // vec.pushBack(3);
  // vec.pushBack(4);
  // vec.pushFront(5);

  // Vector<int> vec2 = vec; //copy constructor

  // vec.print();
  // std::cout<< vec.getFront() << " " << vec.getBack() << " " << vec.getElement(1) <<" " << std::endl;

  // std::cout << vec.getCapacity() << std::endl;
  // vec.reserve(15);
  // std::cout << vec.getCapacity() << std::endl;
  //vec.erase(2);
  //vec.print();


  // vec.popBack(); 
  // vec.popBack(); 
  //vec.popFront();
  // std::cout << "\n";
  // vec.print();


  ListNode<int> l(NULL, NULL, 2);
  l.getData() = 1;
  std::cout << l << "Miau\n";
  // ListNode<int> lp(NULL, NULL, 1);

  // std::cout << l;
  // l = lp;
  // std::cout << l;
  // ListNode<int> ln(NULL, NULL, 3);
  // ListNode<int> l1(NULL, NULL, 4);

  // std::cout << "Data from l: " << l.getData() << "\n";

  // l.setNext(&ln);
  // l.setPrev(&lp);

  // l1.setData(&l);
  // l.print();
  // l1.print();

  List<int> list;
  list.pushBack(18);
  list.pushBack(19);
  list.pushFront(17);
  std::cout <<list;

  List<int> list1;
  list1 = list;
  list1[0] = 10;
  std::cout <<list1 << " si " << list1[0] << "\n";
 
  // List<int> list1(list);
  // list1.print();
  // list.pushBack(4);
  // list.pushBack(5);
  // list.print();
  // std::cout<< list.getElement(2) << " " 
  //          << list.getFront() << " "
  //          << list.getBack() << " " 
  //          << list.getSize() << std::endl;
  // list.popFront();
  // list.print();
  // list.popBack();
  // list.print();

  // list.setElement(2, 10);
  // list.setBack(11);
  // list.setFront(11);
  // list.print();
  // list.erase(1);
  // list.print();
  // list.erase(2);
  // list.print();

  Queue<int, List> q;
  q.push(5);
  q.push(6);
  q.push(7);
  q.print();
  q.pop();
  std::cout << q;












}