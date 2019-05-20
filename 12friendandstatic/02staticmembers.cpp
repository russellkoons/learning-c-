#include <iostream>

using namespace std;

// Static Members

class Test
{
  private:
    int a;
    int b;

  public:
    static int count;
    Test()
    {
      a = 10;
      b = 10;
      count++;
    }

    static int getCount()
    {
      return count;
    }
};

int Test::count = 0; // Static vars have to declared outside the class in scope res.

int main()
{
  Test t1;
  Test t2;

  cout << t2.getCount() << endl;
}