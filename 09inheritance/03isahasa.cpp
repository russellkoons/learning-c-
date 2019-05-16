#include <iostream>

using namespace std;

// isA and hasA

class Rectangle
{

};

class Cuboid:public Rectangle // This Class isA Rectangle
{

};

class Table // this class hasA Rectangle
{
  Rectangle top;
};

int main()
{

}