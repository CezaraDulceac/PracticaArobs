#include "Vector.hpp"
#include "List.hpp"
#include "ListNode.hpp"
#include "Queue.hpp"
#include "PriorityQueue.hpp"
#include "SynchronizedPriorityQueue.hpp"
#include "Task.hpp"
#include "TaskScheduler.hpp"
#include "Algorithms.hpp"
#include <iostream>

int main()
{
  TaskScheduler scheduler(5);

  TaskArgument arg(1, 2);
  TaskArgument arg1(2, 2);

  auto future = scheduler.schedule(arg, 0);
  auto future1 = scheduler.schedule(arg1, 1);

  std::cout << future.get().sum << std::endl;
  //std::cout << future1.get().sum << std::endl;

  //std::cout << "forth\n";
  // SPriorityQueue<int> s;
  // s.push(1);
  // s.push(1);
  // s.push(1);
  // std::cout << s;
  // int array[10] = { 0, 6, 5, 3, 1, 5, 26, 3, 8, 0 };
  // Vector<int> vec;
  // vec.resize(10);

  // std::cout <<  vec << std::endl;

  // pdv::copy(array, array + 10, vec.begin());

  // std::cout << vec << std::endl;

  // pdv::sort(vec.begin(),vec.end(), [](int a, int b){return a < b;});

  // std::cout << vec << std::endl;

  // int sum = pdv::reduce(vec.begin(), vec.end(), 0, [](int a, int b) {return a + b;});
  // std::cout << sum << "\n";

  // vec.insert(vec.begin(), 2);
  // std::cout << vec << std::endl;

  // Vector<int> vec1;
  // vec1.resize(10);

  // pdv::transform(vec.begin(),vec.end(), vec1.begin(), [](int a){ return ++a;});
  // std::cout << vec1 << "\n";

  // TaskScheduler ts(3);
  // ts.schedule(TaskArgument(2,3),2);

  // Vector<int> vec;
  // vec.pushBack(1);
  // vec.pushBack(2);
  // vec.pushBack(3);
  // std::cout << vec[0] << std::endl;
  // std::cout << vec[1] << std::endl;
  // vec[0] = 10;
  // std::cout << vec[0] << std::endl;
  // std::cout << vec[1] << std::endl;

  // Vector<int> vec1;
  // // vec1 = vec;
  // vec1.resize(5);
  // vec1[0] = 0;
  // vec1[1] = 1;
  // vec1[2] = 2;
  // vec1[3] = 3;
  // vec1[4] = 4;

  // vec1.insert(vec1.begin() + 5, 10);
  // std::cout << vec1;
  // vec1.erase(vec1.begin() + 2);
  // vec1.pushBack(11);
  // vec1.pushFront(1);
  // std::cout << vec1;
  // vec1.popBack();
  // std::cout << "popB " << vec1;
  // vec1.popFront();
  // std::cout << "popFront " << vec1;

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

  // ListNode<int> l(NULL, NULL, 2);
  // l.getData() = 1;
  // std::cout << l << "Miau\n";
  // ListNode<int> lp(NULL, NULL, 1);

  // std::cout << l;
  // l = lp;
  // std::cout << l;
  // ListNode<int> ln(NULL, NULL, 3);
  // ListNode<int> l1(NULL, NULL, 4);

  // std::cout << ln;

  // l.setNext(&ln);
  // l.setPrev(&lp);

  // l1.setData(&l);
  // l.print();
  // l1.print();

  // List<int> list;
  // list.pushFront(11);
  // list.pushFront(12);
  // list.pushFront(13);
  // list.pushFront(14);
  // std::cout <<list;
  // list.insert(list.end(), 10);
  // std::cout <<list;
  // list.insert(list.begin(), 15);
  // std::cout <<list;
  // //std::cout << "begin + 1 :\n";
  // ListIterator<int> it2(list.begin() + 1);
  // std::cout << *it2 << "\n";
  // list.insert(list.begin() + 1, 11);
  // std::cout <<list;

  // std::cout << "erase:\n";
  // list.erase(list.begin());
  // list.erase(list.end());
  // list.erase(list.begin() + 1);
  // std::cout <<list;

  // std::cout << "-----------------------------------\n";

  // ListIterator<int> it(list.begin());
  // ListIterator<int> it1(list.end());

  // std::cout << *it << " " << *it1 << "\n";
  // std::cout <<list;

  // if(it != it1) std::cout << "< --- true\n";
  // if(it1 < it) std::cout << "< --- false\n";

  // std::cout <<list;

  // List<int> list1;
  // list1 = list;
  // list1[0] = 10;
  // std::cout <<list1 << " si " << list1[0] << "\n";

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

  // Queue<int, List> q;
  // q.push(5);
  // q.push(6);
  // q.push(7);
  // q.print();
  // q.pop();
  // std::cout << q;
}