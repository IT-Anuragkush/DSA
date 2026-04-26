// find index number 
// if we assume any matrix in linear
// r * colSize + c

#include <iostream>
#include <vector>
using namespace std;

bool searchMtrix(vector<vector<int>> &matrix, int target)
{
  int rowSize = matrix.size();
  int colSize = matrix[0].size();

  int start = 0;
  int end = rowSize * colSize - 1;

  while(start <= end)
  {
    int mid = start + ( end - start) / 2;

    int r = mid / colSize;    // 5 / 4 = 1
    int c = mid % colSize;    // 5 % 4 = 1(rem)

    if( matrix[r][c] == target)
    {
      return true;
    }
    else if( matrix[r][c] < target)
    {
      start = mid + 1;
    }
    else{
      end = mid - 1;
    }
  }
  return false;

}
int main()
{
  vector<vector<int>> matrix = {{1,3,5,7}, {10,11,16,20}, {23,30,34,60}};

  int target = 3;

  int result = searchMtrix(matrix, target);

  if(result)
  {
    cout << "target found ";
  }
  else
  {
    cout << "target not found ";
  }
}
