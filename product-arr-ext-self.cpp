//product of an array except self

#include <iostream>
#include <vector>
using namespace std;

void productofarray(vector<int> &arr){
  int product = 1;

  for(int i = 0; i<arr.size(); i++){
    product = product * arr[i];
  }

  for(int j = 0; j<arr.size(); j++){
      arr[j] = product / arr[j] ;
  }
}
int main(){
  vector<int> arr = {1,2,3,4};

  productofarray(arr);

   for(int x : arr){
    cout << x << " ";
   }
}