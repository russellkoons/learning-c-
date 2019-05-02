#include <iostream>

using namespace std;

int main()
{
  float sal, all, ded, net;

  cout << "Enter total Salary, Allowances, and Deductions" << endl;
  cin >> sal >> all >> ded;
  net = sal + sal * all - sal * ded;
  cout << "Net Salary is " << net << endl;
}