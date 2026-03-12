#include <algorithm>
#include <bits/stdc++.h>
#include <iostream>
#include <utility>
#include <vector>

using namespace std;

void reverse(vector<int> &nums, int start, int end) {
  int s = start, e = end;
  while (s < e) {
    swap(nums[s], nums[e]);
    s++, e--;
  }
}
void rotate(vector<int> &nums, int k) {
  k = k % nums.size();
  reverse(nums, 0, nums.size() - 1);
  reverse(nums, 0, k - 1);
  reverse(nums, k, nums.size() - 1);
}
int main() {
  vector<int> nums = {1, 2, 3, 4, 5, 6, 7};
  rotate(nums, 3);
  for (int x : nums) {
    cout << x << "\t";
  }
}
