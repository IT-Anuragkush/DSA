#include <iostream>
#include <vector>
using namespace std;

void TwoSum(vector<int> nums, int target){
  for(int i = 0; i<nums.size();i++){
    for(int j = i + 1; j<nums.size();j++){
      if(nums[i]+nums[j] == target){
        cout << i << " " << j;
      }
    }
  }
}
int main(){
  vector<int> nums = {2,3,5,6,8};
  int target = 10;

  TwoSum(nums, target);
}

// vector<int> TwoSum(vector<int> nums, int target){
//   for(int i = 0; i<nums.size();i++){
//     for(int j = 0; j<nums.size();j++){
//       if(nums[i]+nums[j] ==target){
//         return {i, j};
//       }
//     }
//   }
// }