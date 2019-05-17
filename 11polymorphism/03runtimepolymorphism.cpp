#include <iostream>

using namespace std;

// Runtime Polymorphism

class Car // Cannot make a straight object of this Abstract Class
{
  public:
    virtual void start() = 0; // Pure virtual function

    virtual void stop() = 0; // Must be overridden by derived classes
};

class Innova:public Car
{
  public:
    void start()
    {
      cout << "Innova started" << endl;
    }

    void stop()
    {
      cout << "Innova stopped" << endl;
    }
};

class Swift:public Car
{
  public:
    void start()
    {
      cout << "Swift started" << endl;
    }

    void stop()
    {
      cout << "Swift stopped" << endl;
    }
};

int main()
{
  Car *c = new Innova(); // c is a car pointer but points to Innova so calls Innova start
  c->start();
  c = new Swift(); // Making c a Swift calls Swift start
  c->start();
}