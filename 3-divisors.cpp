#include <iostream>
using namespace std;

int count3Divisors(int N)
{
  int divisors = 0;

  for (int j = 1; j <= N; j++)
  {
    if (N % j == 0)  //three divisors num - 4,9,25,49
    {
      divisors++;
    }
  }

  if (divisors == 3){
    cout << "its 3 divisors number\n";
    return divisors;
  }
  else{
    cout << "its not 3 divisors number\n";
    return 0;
  }
}

int main()
{
  int N;
  cout << "Enter N: ";
  cin >> N;

  cout << "Count = " << count3Divisors(N) << endl;
  return 0;
}