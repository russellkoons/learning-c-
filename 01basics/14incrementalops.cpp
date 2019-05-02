// int i = 5;

// i = i + 1; // 6
// i += 1 // 6
// i++ // 6

// int x = 5, y;

// y = ++x; x = 6, y = 6 pre-increment - increment and then define y
// y = x++; x = 6, y = 5 post-increment - define y and then increment

// int x = 5, y = 10, z;

// z = x++ * y; x = 6, y = 10, z = 50;
// z = ++x * y; x = 6, y = 10, z = 60;

#include <iostream>
using namespace std;

int main()
{
  int i = 5, j;

  j = 2 * i++ + 2 * ++i;
  cout << i << " " << j << endl;

  return 0;
}