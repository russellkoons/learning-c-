#include <iostream>

using namespace std;

class Student
{
  private:
    int roll;
    string name;
    int math;
    int physics;
    int chemistry;

  public:
    Student(int r, string n, int m, int p, int c)
    {
      roll = r;
      name = n;
      math = m;
      physics = p;
      chemistry = c;
    }

    int total()
    {
      return math + physics + chemistry;
    }

    char grade()
    {
      float average = total() / 3;
      if (average > 60)
        return 'A';
      else if (average >= 40 && average < 60)
        return 'B';
      else
        return 'C';
    }
};

int main()
{
  int roll;
  string name;
  int m, p, c;
  cout << "Enter Roll number of Student: ";
  cin >> roll;
  cout << "Enter Name: ";
  cin >> name;
  cout << "Enter marks in 3 subjects: ";
  cin >> m >> p >> c;
  Student s(roll, name, m, p, c);
  cout << "Total marks: " << s.total() << endl;
  cout << "Grade of Student: " << s.grade() << endl;
}