// search in rotated sorted array 2
#include <iostream>
#include <vector>
using namespace std;

int searchRotetedarr(vector<int> &arr, int target){
  int start = 0;
  int end = arr.size()-1;
  while(start <= end){
    int mid = start + (end-start)/2;   // colculate mid

    if(arr[mid] == target){
      return mid;
    }
    if(arr[start] == arr[mid] && arr[mid] == arr[end]){
      start++;
      end--;
      continue;
    }
    else if(target < arr[mid]){     //it means left half is sorted

      if(arr[start] <= target && target < arr[mid]){
        end = mid - 1;
      }
      else{
        start = mid + 1;
      }
    }
    else{
      if(arr[mid] < target && target <= arr[end]){   //it means right half sorted
        start = mid + 1;
      }
      else{
        end = mid - 1;
      }
    }
  }
  return -1;
}

int main(){
  vector<int> arr = {4,5,6,7,0,1,2,3};
  
  int tar = 0;

  cout << searchRotetedarr(arr, tar);
}