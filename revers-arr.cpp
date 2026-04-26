#include <iostream>
#include <vector>
using namespace std;

void reverse(vector<int> &arr)
{
  int s = 0;
  int e = arr.size() - 1;

  while (s < e){
    int temp = arr[s];
    arr[s] = arr[e];
    arr[e] = temp;

    // swap(arr[s], arr[e]);
    s++;
    e--;
  }
}
int main()
{
  vector<int> arr = {10, 50, 80, 90, 80};

  cout << "before revers array"<< endl ;
  for(int i = 0; i < arr.size(); i++){
    cout << arr[i] << " ";
  }

  cout << endl;

  reverse(arr);

  cout << "after revers :" << endl ;
  for(int i = 0; i<arr.size() ;i++){
    cout << arr[i] << " ";
  }
}