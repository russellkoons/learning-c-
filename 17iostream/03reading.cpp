#include <iostream>
#include <fstream>

using namespace std;

int main()
{
  ifstream inf;
  inf.open("My.txt"); // Opens file
  // if (!inf.is_open) Checks if a file is open or not, returns true or false
  //   cout << "File cannot be opened" << endl;
  string str;
  int x;

  inf >> str; // Grabs a string from the file
  inf >> x; // Grabs an int
  cout << str << " " << x << endl;
  if (inf.eof()) // Checks if it has reached the end of the file
    cout << "End of file" << endl;
  inf.close(); // Closes file, of course
}