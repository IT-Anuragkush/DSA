#include <iostream>
#include <vector>
using namespace std;

int main()
{
  // Create a 2D vector named vec1
  vector<vector<int>> vec1 = {{1, 2, 6}, {5, 7, 8},{9, 8, 11}};
  
  // Create a jagged 2D vector named vec2
  vector<vector<int>> vec2 = {{1, 2}, {5, 6, 7, 8}, {9},  {9, 8, 11}}; // also like that

  // empty 2D vector
  vector<vector<int>> vec3;

  // Adding rows dynamically
  vec3.push_back({1, 2, 3});
  vec3.push_back({4, 5, 6});

  // 3 rows, 4 columns, all elements initialized to 0
  vector<vector<int>> vec4(3, vector<int>(4, 0));

  // Modifying elements
  vec4[0][0] = 5;
  vec4[2][3] = 10;

  // Access 3rd element in 2nd row
  cout << "3rd element in 2nd row: " << vec2[1][2] << endl;

  // Access 2nd element in 1st row
  cout << "2nd element in 1st row: " << vec2[0][1] << endl;

  // Updating the 2nd element in 1st row
  vec2[0][1] = 9;
  cout << "2nd element in 1st row after updating: " << vec2[0][1] << endl;

  // Delete the second row
  vec1.erase(vec1.begin() + 1);

  // Delete second element in first row
  vec1[0].erase(vec1[0].begin() + 1);

  // Finding the number of rows (size of the outer vector)
  int rows = vec2.size();
  cout << "Number of rows: " << rows << endl;

  // Finding the number of columns (size of any inner vector first row)
  int cols = vec2[0].size();
  cout << "Number of columns: " << cols << endl;

  cout << "print vec2 : " << endl;
  for (int i = 0; i < vec2.size(); i++)
  {
    for (int j = 0; j < vec2[i].size(); j++)
    {
      cout << vec2[i][j] << " ";
    }
    cout << endl;
  }
  
}