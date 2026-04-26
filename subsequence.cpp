#include <iostream>
using namespace std;

void solve(string str, int i, string temp)
{
  if(i == str.size())
  {
    cout << temp << endl;
    return;
  }
  temp.push_back(str[i]);
  solve(str, i+1, temp);

  temp.pop_back();
  solve(str, i+1, temp);

}
int main()
{
  string str;
  cout << "Enter the string : "<< endl;
  cin >> str;

  string temp = "";

  solve(str, 0, temp);
}