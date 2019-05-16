#include <iostream>

using namespace std;

class Employee
{
  private:
    int eid;
    string name;

  public:
    Employee(int e, string n)
    {
      eid = e;
      name = n;
    }

    int getEid() { return eid; }
    string getName() { return name; }
};

class FullTime:public Employee
{
  private:
    int salary;

  public:
    FullTime(int e, string n, int s):Employee(e, n)
    {
      salary = s;
    }
    int getSalary() { return salary; }
};

class PartTime:public Employee
{
  private:
    int wage;

  public:
    PartTime(int e, string n, int w):Employee(e, n)
    {
      wage = w;
    }
    int getWage() { return wage; }
};

int main()
{
  FullTime e1(1, "Russell", 60000);
  PartTime e2(2, "Stevie", 30);

  cout << "Salary of " << e1.getName() << " is $" << e1.getSalary() << " per year" << endl;
  cout << "Wage of " << e2.getName() << " is $" << e2.getWage() << " per hour" << endl;
}