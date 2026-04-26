#include <iostream>
#include <vector>
using namespace std;

class solution{
  public:

  int solve(vector<int> &nums, int target, bool flag){

    int ans = -1;
    int start = 0;
    int end = nums.size()-1;

    while(start <= end){
      int mid = start + (end - start) / 2;
      
      if(nums[mid] == target && flag == true){
        ans = mid;
        end = mid - 1;
      }
      else if(nums[mid] == target && flag == false){
        ans = mid;
        start = mid + 1;
      }
      else if(nums[mid] < target){
        start = mid + 1;
      }
      else{
        end = mid - 1;
      }
    }
    return ans;
  }
  vector<int> searchRenge(vector<int> &nums, int target){
    vector<int> ans(2, -1);

    ans[0] = solve(nums, target, true);
    ans[1] = solve(nums, target, false);

    return ans;
  }
};

int main(){
  vector<int> nums = {2,3,4,5,5,5,5,7,8,9};

  int target = 5;

  solution s;                // because we are use class 
  vector<int> vec = s.searchRenge(nums, target);

  for(int x : vec){
    cout << x  << " ";
  }
}