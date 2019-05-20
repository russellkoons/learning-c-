#include <iostream>

using namespace std;

// Static members 2

class Car
{
  public:
    static int price;

    Car()
    {

    }

    static int getPrice()
    {
      return price;
    }
};

int Car::price = 20;

int main()
{
  cout << Car::getPrice() << endl; // Can call the function before creating an object

  Car my;

  cout << my.getPrice() << endl;
}