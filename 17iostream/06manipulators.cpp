#include <iostream>

using namespace std;

// Manipulators
  // endl is a manipulator. Changes the format of output

  // Integer manipulators
    // hex - hexidecimal
    // oct
    // dec

  // Float
    // fixed
    // scientific

  // Other
    // set()
    // left - Left Alignment
    // right - Right alignment
    // ws - White space

int main()
{
  cout << hex << 163 << endl; // Returns a3
  cout << fixed << 125.731 << endl; // Returns 125.731000
}