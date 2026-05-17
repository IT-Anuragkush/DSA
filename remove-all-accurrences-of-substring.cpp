#include <iostream>
#include <string>
using namespace std;

void removeOccurrences(string str, string part)
{

  while (str.length() > 0 && str.find(part) < str.length())
  {
    str.erase(str.find(part), part.length());
  }

  cout << "after remove all accurencess : " << str << endl;

  // output - dab
}
int main()
{
  string str = "daabcbaabcbc";
  string part = "abc";

  removeOccurrences(str, part);
}