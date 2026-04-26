#include <iostream>
#include <vector>
using namespace std;
//last to first
void rotatebyone(vector<int> &arr){
  int n = arr.size();
  int last = arr[n-1];

  for(int i = n ; i > 0; i--){
    arr[i] = arr[i-1];
  }
  arr[0] = last;
}
int main(){
  vector<int> arr = {1,2,3,4,5,6};

  rotatebyone(arr);

  for(int i = 0; i<arr.size(); i++){
    cout << arr[i] << " ";
  }
}