#include <iostream>
#include <string>
using namespace std;

class Neko
{
private:
  string name;

public:
  Neko(string s)
  {
    name = s;
  }
  void naku()
  {
    cout << "nya.oresamaha " << name << " da." << endl;
  }
};

int main()
{
  string s;
  cout << "doraneko wo seisei simasu.namae wo nyuryoku site kudasai." << endl;
  cin >> s;
  Neko dora(s);
  cout << "anatano naduketa neko ga memorijo ni seisei saremasita" << endl;
  cout << "neko ga naki masu" << endl;
  dora.naku();
}