// sqrt(x)

#include <iostream>
#include <vector>
using namespace std;

int sqrt(int x)
{
  int start = 0;
  int end = x; // x / 2 + 1
  // int ans = -1;

  while (start <= end)
  {
    int mid = start + (end - start) / 2;

    if (mid * mid == x)
    {
      return mid;
    }
    else if (mid * mid < x)
    {
      // ans = end;
      start = mid + 1;
    }
    else
    {
      end = mid - 1;
    }
  }
  return end;       // retrun ans
}
int main()
{
  int n;
  cout << "Enter number: ";
  cin >> n;

  cout << sqrt(n);

  return 0;
}

// using linear search

// int ans = 0;

// for(int i = 0; i <= x; i++){
//   if(i*i <= x){
//     ans = i;
//   }
//   else{
//     break;
//   }
// }
// cout << ans;

//   Example x = 8 ka full dry run

// start = 0, end = 8

// mid = 4

// 4*4 = 16 > 8
// end = 3

// mid = 1

// 1*1 = 1 < 8
// start = 2

// mid = 2

// 2*2 = 4 < 8
// start = 3

// mid = 3

// 3*3 = 9 > 8
// end = 2

// Loop ends because start=3 and end=2
// Now return end = 2 ✅


// {
//   return end;
// }

// Ye return karta hai floor sqrt.

// Why end?

// Binary search jab stop hota hai tab:

// start ek step aage nikal chuka hota hai

// end last valid value hoti hai jiska square <= x

// Isliye end = correct answer.

// Example (x = 10)

// Binary search ke end me:

// start = 4

// end = 3

// Loop stop: start > end

// Return end = 3
// ✅ √10 ka floor = 3
