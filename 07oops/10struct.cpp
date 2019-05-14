#include <iostream>

using namespace std;

// In Structures everything is public by default, besides that they're basically classes

struct Demo
{
  int x;
  int y;

  void Display()
  {
    cout << x << " " << y << endl;
  }
};

int main()
{
  Demo d;
  d.x = 10;
  d.y = 20;
  d.Display();
}