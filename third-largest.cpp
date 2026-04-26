#include <iostream>
#include <vector>
#include <bits/stdc++.h>
using namespace std;

int thirdlargest(vector<int> &arr){
  int first = arr[0];
  int second = arr[1];
  int third = arr[2];

  for(int i = 0; i<arr.size(); i++){
    if(arr[i] > first){
      third = second;
      second = first;
      first = arr[i];
    }
    else if(arr[i] > second){
      third = second; 
      second = arr[i];
    }
    else if(arr[i] > third){
      third = arr[i];
    }
  }
  return third;
}

int main(){
  vector<int> arr = {20,50,90,70,60,30,40,80}; //third largest 70

  cout << thirdlargest(arr);
}


// int n = arr.size();

//   sort(arr.begin(), arr.end());
  
//   return arr[n-3];