// vector<int> ans; - yah 0 size ka vector banega jisme push back kar sakte hain , aur ye yaha work nhi karega kyoki positive negative value rakhana hai

// vector<int> ans(n); - yaha per size pahle se define kar di gai hai ab ham yaha per positve and negative number apne hisab se assign kar sakte hain
// ans[positive] = nums[i];
// ans[negative] = nums[i];

// #include <iostream>
// #include <vector>
// using namespace std;

// vector<int> rearrangeArray(vector<int> &nums)
// {
//   int n = nums.size();

//   vector<int> ans(n);

//   int positive = 0; // positive value insert at add position
//   int negative = 1; // positive value insert at even position

//   for (int i = 0; i < n; i++)
//   {
//     if (nums[i] >= 0)
//     {
//       ans[positive] = nums[i];
//       positive += 2;
//     }
//     else
//     {
//       ans[negative] = nums[i];
//       negative += 2;
//     }
//   }
//   return ans;
// }

// int main()
// {
//   vector<int> arr = {3, 1, -2, -5, 2, -4};

//   vector<int> result = rearrangeArray(arr);

//   for (int i = 0; i < result.size(); i++)
//   {
//     cout << result[i] << " ";
//   }
// }

#include <iostream>
#include <vector>
using namespace std;

vector<int> rearrangeArray(vector<int> &nums)
{
  vector<int> positive;
  vector<int> negative;

  // Separate positive and negative numbers
  for (int i = 0; i < nums.size(); i++)
  {
    if (nums[i] >= 0)
    {
      positive.push_back(nums[i]);
    }
    else
    {
      negative.push_back(nums[i]);
    }
  }

  // Final answer vector
  vector<int> ans;

  for (int i = 0; i < positive.size(); i++)
  {
    ans.push_back(positive[i]);
    ans.push_back(negative[i]);
  }

  return ans;
}

int main()
{
  vector<int> arr = {3, 1, -2, -5, 2, -4};

  vector<int> result = rearrangeArray(arr);

  for (int i = 0; i < result.size(); i++)
  {
    cout << result[i] << " ";
  }
}
