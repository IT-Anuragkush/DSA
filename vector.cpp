// #include <bits/stdc++.h>
//       - includes all standard libraries (shortcut for competitive programming)

#include <iostream>
#include <vector>
using namespace std;

int main(){
  vector<int> arr = {10,50,30,40,60};
  // vector<int> arr1;
  // vector<int> arr(5, 0);       // 5 size of vector and 0 in all index of array

  cout << "copy other array : ";
  vector<int> arr1(arr);          // copy arr into arr1
    for (int i : arr1) {          // for-each loop
        cout << i << " ";
    }

  cout << endl;

  cout << "size of vector : " << arr.size() << endl;    //.size()
  
  cout << "capacity of vector : " << arr.capacity() << endl;    //.capacity()

  arr.push_back(30);                       //.push_back(value)
  arr.push_back(40);                       //.push_back(value)
  cout << "after push back : ";;
  for(int i= 0; i<arr.size(); i++){
    cout << arr[i] << " ";
  }

  cout << endl;

  arr.pop_back();                       //.pop_back()
  arr.pop_back();                       //.pop_back()
  cout << "after pop back : ";
  for(int i= 0; i<arr.size(); i++){
    cout << arr[i] << " ";
  }

  cout << endl;

  cout << "front value using .front method : " << arr.front() << endl;               //.front()
  cout << "back value using .back method : " << arr.back() << endl;               //.back()


  cout << "using .at method : " << arr.at(2);               //.at()

  return 0;
}