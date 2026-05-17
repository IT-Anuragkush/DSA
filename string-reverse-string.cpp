#include <iostream>
#include <string>
using namespace std;

void reverseString(string &str)
{
  int start = 0;
  int end = str.length() - 1; // str.size()-1

  while (start < end)
  {
    swap(str[start], str[end]);
    start++;
    end--;
  }

  cout << "after reverse string : " << str << endl;
}

int main()
{
  string str = "Anurag";

  reverseString(str);
}