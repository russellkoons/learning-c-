#include <iostream>
#include <fstream>

using namespace std;

class Item
{
  private:
    string name;
    float price;
    int qty;

  public:
    Item(){}
    Item(string n, float p, int q);
    friend ifstream & operator >> (ifstream &ifs, Item &i);
    friend ofstream & operator << (ofstream &ofs, Item &i);
    friend ostream & operator << (ostream &os, Item &i);
};

Item::Item(string n, float p, int q)
{
  name = n;
  price = p;
  qty = q;
}

ifstream & operator >> (ifstream &ifs, Item &i)
{
  ifs >> i.name >> i.price >> i.qty;
  return ifs;
}

ofstream & operator << (ofstream &ofs, Item &i)
{
  ofs << i.name << endl << i.price << endl << i.qty << endl;
  return ofs;
}

ostream & operator << (ostream &os, Item &i)
{
  os << i.name << endl << i.price << endl << i.qty << endl;
  return os;
}

int main()
{
  int n;
  string name;
  float price;
  int qty;

  cout << "Enter number of items: ";
  cin >> n;

  Item *list[n];

  cout << "Enter All Items" << endl;

  for (int i = 0; i < n; i++)
  {
    cout << "Enter Name, Price, and Quantity for item " << i + 1;
    cin >> name;
    cin >> price;
    cin >> qty;
    list[i] = new Item(name, price, qty);  
  }

  ofstream ofs("Items.txt");

  for(int i = 0; i < n; i++)
  {
    ofs << *list[i];
  }

  Item item;
  ifstream ifs("Items.txt");

  for(int i = 0; i < n; i++)
  {
    ifs >> item;
    cout << "Item " << i + 1 << item << endl;
  }
}