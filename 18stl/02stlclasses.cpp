#include <iostream>
#include <vector> // Must include this for vector
#include <list>

using namespace std;

// Algorithms

  // search()
  // sort()
  // binary_search()
  // reverse()
  // concat()
  // copy()
  // union()
  // intersection()
  // merge()
  // heap()

// Containers

  // vector - An Array that can grow by itself
    // push_back() - insert last
    // pop_back() - remove last
    // insert()
    // remove()
    // size()
    // empty() - checks if empty or not

  // list - Doubly linked list
    // Same as above but also
    // push_front()
    // pop_front()
    // front()
    // back()

  // forward_list - singly linked list
    // Same methods as list

  // deque - Same as vector but can add and delete to the front
    // Same as list

  // priority_queue - Max Heap Data Structure - Deleting always maximum element
    // push()
    // pop()
    // empty()
    // size()

  // stack - last in first out
    // Same operations as priority

  // set - Unique elements only. Doesn't maintain order

  // multiset - Same as set but allows duplicates

  // map - stores <key: value> pairs
  // multimap - same as map but keys can be duplicated, different values doe

// Iterators



int main()
{
  vector<int> v = {10, 20, 40, 90}; // Automatically makes size 16
  v.push_back(25);
  v.push_back(70);
  v.pop_back();

  for(int x:v)
    cout << x << endl;

  vector<int>::iterator itr; // The iterator goes through all the elements

  for (itr = v.begin(); itr!=v.end(); itr++)
    cout << *itr << endl;

  list<int> l = {10, 20, 40, 90}; // Automatically makes size 16
  l.push_back(25);
  l.push_back(70);
  l.pop_back();

  for(int x:l)
    cout << x << endl;

  list<int>::iterator itr2; // The iterator goes through all the elements

  for (itr2 = l.begin(); itr2!=l.end(); itr2++)
    cout << *itr2 << endl;
}