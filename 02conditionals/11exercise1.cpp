#include <iostream>

using namespace std;

int main()
{
  float bill;
  cout << "Enter bill amount: " << endl;
  cin >> bill;
  cout << "Bill amount: " << bill << endl;

  if (bill < 100) 
  {
    cout << "Discount: " << 0.0 << endl;
    cout << "Amount after discount: " << bill << endl;
  }
  else if (bill >= 100 && bill < 500)
  {
    cout << "Discount: " << 10.0 << endl;
    cout << "Amount after discount: " << bill * 0.9 << endl;
  }
  else
  {
    cout << "Discount: " << 20.0 << endl;
    cout << "Amount after discount: " << bill * 0.8 << endl;
  }
}