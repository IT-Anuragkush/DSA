#include <iostream>
#include <vector>
using namespace std;

void rotateByOne(vector<int> &arr)
{
  int n = arr.size();
  int last = arr[n - 1]; // store last element
  for (int i = n - 1; i > 0; i--)
  {
    arr[i] = arr[i - 1];
  }
  arr[0] = last;
}

void rotatecloackwise(vector<int> &arr, int k){ 
  k = k % arr.size();
  for(int i = 0 ; i<k ; i++){ 
    rotateByOne(arr);             //from this logic time complexity high
  }
}

int main()
{
  vector<int> arr = {1, 2, 3, 4, 5};

  int tar = 3;
  rotatecloackwise(arr,tar);

  for (int x : arr)
  {
    cout << x << " ";
  }
  return 0;
}
