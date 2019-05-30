#include <iostream>
#include <fstream>

using namespace std;

// Writing Data into a file 

int main()
{
  ofstream outfile("My.txt"); 
  // Whatever you include in this file gets put into a file called My.txt
  // ios::app appends into to the end of the file. 
  // If you don't include that it truncates automatically
  outfile << "Hello" << endl; // These add to the file.
  outfile << 25 << endl;
  outfile.close(); // This closes and saves the file.
}