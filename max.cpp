#include <iostream>
#include <vector>
using namespace std;
int maxNumber(vector<int> &arr){
  int max = arr[0];
  for(int i = 0; i<arr.size(); i++){
    if(arr[i] > max){
      max = arr[i];
    }
  }
  return max;
}
int main(){
  vector<int> arr = {2,5,6,9,5,8,1};

  cout << maxNumber(arr);

}