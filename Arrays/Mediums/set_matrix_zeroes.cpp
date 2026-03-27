#include <bits/stdc++.h>
#include <iostream>
#include <vector>

using namespace std;

void setZeroes(vector<vector<int>> &matrix) {
  int n = matrix.size(), m = matrix[0].size();
  vector<int> rows_to_convert, cols_to_convert;

  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      if (matrix[i][j] == 0) {
        rows_to_convert.push_back(i);
        cols_to_convert.push_back(j);
      }
    }
  }
  // cout << "Rows: \n";
  // for (int x : rows_to_convert) {
  //   cout << x << " ";
  // }
  // cout << "Cols: \n";
  // for (int x : cols_to_convert) {
  //   cout << x << " ";
  // }

  for (int x : rows_to_convert) {
    for (int j = 0; j < m; j++) {
      matrix[x][j] = 0;
    }
  }
  for (int x : cols_to_convert) {
    for (int j = 0; j < n; j++) {
      matrix[j][x] = 0;
    }
  }
}

int main() {
  vector<vector<int>> matrix = {{1, 1, 1}, {1, 0, 1}, {1, 1, 1}};
  setZeroes(matrix);
  for (vector<int> x : matrix) {
    for (int y : x) {
      cout << y << "\t";
    }
  }
}
