#include <iostream>

using namespace std;

typedef int marks;

int main()
{
  marks m1, m2, m3;
  float Avg;

  cout << "Enter marks of 3 subjects" << endl;
  cin >> m1 >> m2 >> m3;
  Avg = (m1 + m2 + m3) / 3;
  if (Avg >= 60)
    cout << "A" << endl;
  else if (Avg >= 35 && Avg < 60)
    cout << "B" << endl;
  else
    cout << "C" << endl;  
}