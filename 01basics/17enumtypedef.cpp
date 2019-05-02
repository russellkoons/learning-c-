// // Enum

// enum day {mon, tue, wed, thu, fri, sat, sun};
// //         0    1    2    3    4    5    6

// enum day {mon = 1, tue, wed = 5, thu, fri, sat, sun};
// //           1      2      5      6    7    8    9

// // Typedef

// typedef int marks;
// typedef int rollno;

// int main()
// {
//   marks m1, m2, m3;
//   rollno r1, r2, r3;
// }

#include <iostream>

using namespace std;

// enum day {mon = 1, tue, wed, thu = 10, fri, sat, sun};
// // Constants. No incrementing!

// int main()
// {
//   day d;
//   d = tue;
//   cout << mon << endl;
//   cout << tue << endl;
//   cout << wed << endl;
//   cout << thu << endl;
//   cout << fri << endl;
// }

typedef int marks;

// Allows you to give you more descriptive names to generic variables

int main()
{
  marks m1, m2;
  m1 = 50;
  m2 = 90;
}