// Combining conditions

// && and || or ! not

#include <iostream>

using namespace std;

int main()
{
  int hour;

  cout << "enter hour" << endl;
  cin >> hour;

  if (hour >= 9 && hour <= 18)
  {
    cout << "Working" << endl;
  }
  else
  {
    cout << "Leisure" << endl;
  } 
}