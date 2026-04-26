#include <iostream>
#include <vector>
using namespace std;

int binarySearch(vector<int> &arr , int target){
  int start = 0;
  int end = arr.size()-1;
  while(start <= end){
    int mid = start + (end-start)/2;
    if(arr[mid] == target){
      return mid;
    }
    else if(target < arr[mid]){
      end = mid - 1;
    }
    else 
      start = mid + 1;
  }
  return -1;
}
int main(){
  vector<int> arr = {0,1,3,4,6,7,9};

  cout << binarySearch(arr, 6);   //target is 6
}