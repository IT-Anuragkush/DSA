
// replace element with greter element on right side

#include <iostream>
#include <vector>
using namespace std;

void replaceelement(vector<int> &arr){
  int mx = -1;
  for(int i = arr.size()-1; i>=0; i--){
    int temp = arr[i];
    arr[i] = mx;
    mx = max(temp, mx);
  }
}
int main(){
  vector<int> arr = {17,15,5,4,6,1};

  replaceelement(arr);

  for(int i = 0; i<arr.size(); i++){
    cout << arr[i] << " ";
  }
}


// for(int i = 0; i<arr.size()-1; i++){
//   int mx = arr[i+1];
//   for(int j = i+1 ; j<arr.size(); j++){
//     if(arr[j] > mx){
//       mx = arr[j];
//     }
//   }
//   arr[i] = mx;