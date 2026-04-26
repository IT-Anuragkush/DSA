#include <iostream>
#include <vector>
using namespace std;
//first to last
void rotatebyone(vector<int> &arr){
  int n = arr.size();
  int first = arr[0];

  for(int i = 0; i < n-1; i++){
    arr[i] = arr[i+1];
  }
  arr[n-1] = first;
}
int main(){
  vector<int> arr = {1,2,3,4,5,6};

  rotatebyone(arr);

  for(int i = 0; i<arr.size(); i++){
    cout << arr[i] << " ";
  }
}