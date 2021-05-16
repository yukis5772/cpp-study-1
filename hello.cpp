#include <iostream>
#include <string>
using namespace std;

class Neko
{
  string name;

public:
  Neko(string s);
  void naku() const;
};

Neko::Neko(string s) : name(s) {}
void Neko::naku() const
{
  cout << "nya.oresama ha " << name << " da." << endl;
}

int main()
{
  string s;
  cout << "neko wo seisei simasu.namae wo nyuryoku site kudasai." << endl;
  cin >> s;
  Neko dora(s);
  cout << "anatano nazuketa neko ga memorijo ni seisei saremasita" << endl;
  cout << "neko ga naki masu" << endl;
  dora.naku();
}