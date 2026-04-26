// that is 90(degree) clock wise

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void rotateImage(vector<vector<int>> &mat)
{
  int rowSize = mat.size();
  int colSize = mat[0].size();

  for(int i = 0; i < rowSize; i++)
  {
    for(int j = i+1; j < colSize; j++)
    {
      swap( mat[i][j] , mat[j][i]);
    }
  }

  for(int i = 0; i < rowSize; i++)
  {
    reverse( mat[i].begin() , mat[i].end());
  }
}

int main()
{
  vector<vector<int>> matrix = {{1,2,3}, {4,5,6}, {7,8,9}};

  rotateImage(matrix);

  // Print rotated matrix
  for(auto row : matrix)
  {
    for(auto val : row)
      cout << val << " ";
    cout << endl;
  }
}