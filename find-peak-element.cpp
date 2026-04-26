#include <iostream>
#include <vector>
using namespace std;

int findPeakElement(vector<int> &arr){
  int start = 0;
  int end = arr.size()-1;
  if(start == end){
    return 0;
  }
  while (start <= end){
    int mid = start + (end - start) / 2;

    if(arr[mid-1] < arr[mid] && arr[mid] > arr[mid+1]){
      return mid;
    }
    else if(arr[mid-1] < arr[mid]){
      start = mid + 1;
    }
    else{
      end = mid - 1;
    }
  }
  return -1;
}

int main(){
  vector<int> arr = {1,2,1,3,5,6,4};

  cout << findPeakElement(arr);
}