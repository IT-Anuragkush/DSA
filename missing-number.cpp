#include <iostream>
#include <vector>
using namespace std;

int missingNumber(vector<int> &arr){
  int  n = arr.size()+1;           // because one number is missing

  int total = n*(n+1)/2;
  int sum = 0;
  for(int i = 0; i < arr.size(); i++){
     sum = sum + arr[i];
  }
  return total - sum ;
}

int main(){
  vector<int> arr = {1,2,4,5,6};   //3 is missing number

  cout << missingNumber(arr);
}

//   int n = arr.size() + 1;
//     int x1 = 0, x2 = 0;

//     for (int i = 1; i <= n; i++)
//         x1 ^= i;

//     for (int i = 0; i < arr.size(); i++)
//         x2 ^= arr[i];

//     return x1 ^ x2;
// }