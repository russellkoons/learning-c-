#include <iostream>
#include <fstream>

using namespace std;

// Serialization

class Student
{
  public:
    string name;
    int roll;
    string branch;
    friend ofstream & operator << (ofstream &ofs, Student &s); 
    // Making a friend function to simplify adding to file
    friend ifstream & operator << (ifstream &ifs, Student &s);
    // Same but for reading the file
};

ofstream & operator << (ofstream &ofs, Student &s) // Building on the friend function
{
  ofs << s.name << endl;
  ofs << s.roll << endl;
  ofs << s.branch << endl;
}

ifstream & operator >> (ifstream &ifs, Student &s)
{
  ifs >> s.name >> s.roll >> s.branch;
  return ifs;
}

int main()
{
  Student s1;
  s1.name = "Russell"; s1.roll = 10; s1.branch = "CS";
  ofstream ofs("Student.txt", ios::trunc);

  ofs << s1; // This adds every part of the Student s1 to the file

  Student s2;

  ifstream ifs("Student.txt");
  ifs >> s2; // Builds the student class from the file

  cout << s2.name << " " << s2.roll << " " << s2.branch << endl;
  ifs.close();
}