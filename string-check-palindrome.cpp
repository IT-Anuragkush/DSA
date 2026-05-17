#include <iostream>
#include <string>
using namespace std;

bool checkPalindrome(string &str)
{
  int start = 0;
  int end = str.length() - 1;

  while (start < end)
  {
    // alpha numeric - (0-9),(a-z),(A-Z).
    // check alphanumeric or not
    if (!isalnum(str[start]))
    {
      start++;
      continue;
    }
    if (!isalnum(str[end]))
    {
      end--;
      continue;
    }

    if (tolower(str[start]) != tolower(str[end])) // if (str[start] != str[end])
    {
      return false;
    }
    start++;
    end--;
  }
  return true;
}
int main()
{
  string str = "abcbA";

  if (checkPalindrome(str) == true)
  {
    cout << "palindrome string";
  }
  else
  {
    cout << "Not palindrome string";
  }
}

// second way - we can simply reverse string and check after reverse string is same before reverse string then that string is pandrome or not
