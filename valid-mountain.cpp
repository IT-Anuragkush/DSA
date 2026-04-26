#include <iostream>
#include <vector>
using namespace std;

bool validmountain(vector<int> &arr){
  if(arr.size() < 3){
    return false;
  }
  int i = 0;
  while(i+1 < arr.size() && arr[i] < arr[i+1]){
    i++;
  }
  int j = arr.size() -1 ;
  while (j-1 >= 0 && arr[j] < arr[j-1]){
    j--;
  }

  if(i == 0 || i == arr.size() - 1){
    return false;
  }
  
  if(i==j){
    return true;
  }
   
}

int main(){
  vector<int> arr = {0,2,3,4};

  bool result = validmountain(arr);

  if(result){
    cout << "valid mountain :";
  }
  else
    cout << " not valid mountain :";
}