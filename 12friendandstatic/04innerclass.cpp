#include <iostream>

using namespace std;

// Inner Class

class Outer
{
  public:
    int a = 10;
    static int b;
    void fun() // Can access fns and data in inner classes
    { 
      i.show();
      cout << i.x << endl;
    }

    class Inner
    {
      public:
        int x = 25;
        void show()
        {
          cout << b << endl;
        }
    };

    Inner i; // Must build the Inner object after class declaration
};

int Outer::b = 20;

int main()
{
  Outer o;
  o.fun(); 
}