#include <iostream>

using namespace std;

int main()
{
  int *p; // Uninitialzied Pointers: must be initialized before they are assigned!
  // Memory leak: You must delete the pointer before making it NULL
  // Dangling pointers: If you have two pointers pointing to the same allocation
  // you cannot delete one pointer because it'll fuck everything up
}