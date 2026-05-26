#include <iostream>
using namespace std;

int sumOfTwoInt(int a, int b)
{
  int curSum = a ^ b;
  int carry = (unsigned int)(a & b) << 1;

  while(carry != 0)
  {
    int sum = curSum ^ carry;
    carry = (unsigned int)(curSum & carry) << 1;

    curSum = sum;
  }

  return curSum;
}
int main()
{
  int result = sumOfTwoInt(10,20);

  cout << result <<endl;
}