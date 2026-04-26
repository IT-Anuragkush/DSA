// print natural number using recursion
#include <iostream>
using namespace std;

void fun_printNo(int n)
{
  if (n == 1)
  {
    cout << "1" << endl;
    return;
  }
  cout << n << " ";
  fun_printNo(n - 1);
}
int main()
{
  int n;

  cout << "Enter a number : ";
  cin >> n;

  if(n == 0)
  {
    cout << "it's not a natural number" << endl;
    return 0;
  }
  fun_printNo(n);
}