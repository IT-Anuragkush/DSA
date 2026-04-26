#include <iostream>
using namespace std;

int sum(int n)
{
  if(n == 0)
  {
    return 0;
  }
  return n + sum(n-1);

}
int main()
{
  int num;
  cout << "Enter number : "<< endl;
  cin >> num;
  
  if(num < 0)
  {
    cout << "please enter non negative value" << endl;
    return 0;
  }
  else
  {
    int result = sum(num);

    cout << "sum of natural number is : " << result << endl;
  }

}