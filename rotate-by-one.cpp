// #include <iostream>
// #include <vector>
// using namespace std;

// void rotateByOne(vector<int> &arr){
//   int last = arr[arr.size()-1];              // store last element
//   for(int i = arr.size()-1; i > 0; i--){
//     arr[i] = arr[i-1];         // arr[i] = arr[4-1], last = arr[3], last = arr[2],
//                                // //   last = arr[1], last = arr[0] then loop end.
//   }
//   arr[0] = last;

//   for(int i = 0; i<arr.size();i++){
//     cout << arr[i] << " ";
//   }
// }

// int main(){
//   vector<int> arr = {1,2,3,4,5};

//   rotateByOne(arr);
// }

#include <iostream>
#include <vector>
using namespace std;

void rotateByOne(vector<int> &arr)
{
  int n = arr.size();
  int last = arr[n - 1]; // store last element
  for (int i = n - 1; i > 0; i--)
  {
    arr[i] = arr[i - 1];
  }
  arr[0] = last;
}

int main()
{
  vector<int> arr = {1, 2, 3, 4, 5};

  rotateByOne(arr);

  for (int x : arr)
  {
    cout << x << " ";
  }
  return 0;
}
