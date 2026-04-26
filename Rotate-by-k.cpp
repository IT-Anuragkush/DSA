#include <iostream>
#include <vector>
using namespace std;
class solution
{
public:
  void rotatebyK(vector<int> &arr, int s, int e)
  {
    while (s < e)
    {
      swap(arr[s], arr[e]);
      s++;
      e--;
    }
  }
  void rotateclockwise(vector<int> &arr, int k)
  {
    int n = arr.size();
    k = k % n;                // handle k > n

    rotatebyK(arr, 0, n - 1); //revers all elements -output- 7,6,5,4,3,2,1
    rotatebyK(arr, 0, k - 1); //revers k to k-1(index 0 to 2) -output- 5,6,7,4,3,2,1
    rotatebyK(arr, k, n - 1); //revers k to n-1(index 3 to n-1)-output-5,6,7,1,2,3,4
  }
};

int main()
{
  vector<int> arr = {1, 2, 3, 4, 5, 6, 7};

  solution obj;
  obj.rotateclockwise(arr, 3); // k = 3

  for (int x : arr)              //for each loop
  {
    cout << x << " ";
  }
}