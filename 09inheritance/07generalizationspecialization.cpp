#include <iostream>

using namespace std;

// Generalization and Specialization

class Rectangle {};

class Circle {};

class Triangle {};

class Cuboid:public Rectangle {}; // This is a specialized version of Rectangle

class Shape {}; //If this thing inherits from the three shapes then it is Generalized

int main()
{
  
}