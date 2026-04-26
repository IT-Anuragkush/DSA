#include <iostream>
#include <vector>
#include <set>
using namespace std;

void unionArray(vector<int> &a, vector<int> &b)
{
  set<int> s;
  for (int i = 0; i < a.size(); i++)
  {
    s.insert(a[i]);
  }
  for (int j = 0; j < b.size(); j++)
  {
    s.insert(b[j]);
  }

  for (int x : s)
  {
    cout << x << " ";
  }
}
int main()
{
  vector<int> arr1 = {1, 2, 3, 4, 5};
  vector<int> arr2 = {1, 2, 3, 6, 7};

  unionArray(arr1, arr2);
}



// vector<int> findUnion(vector<int> &a, vector<int> &b)
// {
//   // code here
//   vector<int> temp;

//   int i = 0;
//   int j = 0;

//   while (i < a.size() && j < b.size())
//   {
//     // remove duplicate number from a array
//     if (i > 0 && a[i] == a[i - 1])
//     {
//       i++;
//       continue;
//     }
//     // remove duplicate number from b array
//     if (j > 0 && b[j] == b[j - 1])
//     {
//       j++;
//       continue;
//     }

//     if (a[i] == b[j])
//     {
//       temp.push_back(a[i]); // temp.push_back(b[j]);
//       i++;
//       j++;
//     }

//     else if (a[i] < b[j])
//     {
//       temp.push_back(a[i]);
//       i++;
//     }
//     else
//     {
//       temp.push_back(b[j]);
//       j++;
//     }
//   }
//   if (i < a.size())
//   {
//     while (i < a.size())
//     {
//       if (i > 0 && a[i] == a[i - 1])
//       {
//         i++;
//         continue;
//       }
//       temp.push_back(a[i]);
//       i++;
//     }
//   }
//   if (j < b.size())
//   {
//     while (j < b.size())
//     {
//       if (j > 0 && b[j] == b[j - 1])
//       {
//         j++;
//         continue;
//       }
//       temp.push_back(b[j]);
//       j++;
//     }
//   }
//   return temp;
// }