#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

string reverseWord(string &str, int n)
{
  reverse(str.begin(), str.end()); // first reverse complete string

  string ans = "";

  for (int i = 0; i < n; i++)
  {
    string word = "";
    while (i < n && str[i] != ' ')
    {
      word = word + str[i];
      i++;
    }

    reverse(word.begin(), word.end()); // reverse individual word

    if (word.length() > 0)
    {
      ans += " " + word; // add in ans
    }
  }

  return ans.substr(1); // first extra space remove
}

int main()
{
  string str = "hello world";

  int n = str.length();

  string result = reverseWord(str, n);

  cout << result << endl;
}