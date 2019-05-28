#include <iostream>

using namespace std;

// Preprocessor Directives/Macros

#ifndef PI // If not defined, define
  #define PI 3.1425 // Creates a macro that can be used in functions to simplify code
#endif // Ends the ifndef

#define C cout
#define SQR(x) (x * x)

int main()
{
  C << SQR(5) << endl;
  C << PI << endl;
}