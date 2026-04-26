#include <iostream>
#include <vector>
using namespace std;

int findIndex(vector <int> arr, int value){
  for(int i = 0; i<arr.size(); i++){
    if(arr[i]==value){
      return i;
    }
  }
  return -1;
}
int main(){
  vector <int> arr = {10,50,90,80,60,50};

  int index = findIndex(arr , 80);

  // cout << findIndex(arr , 80) << endl;

  if(index != -1){
    cout << "target is index : " << index;
  }
  else 
    cout << "target not found :";
}