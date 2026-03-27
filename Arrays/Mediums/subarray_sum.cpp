#include <algorithm>
#include <bits/stdc++.h>
#include <cstdlib>
#include <iostream>
#include <utility>
#include <vector>

using namespace std;

int calculateWindowSum(vector<int> &nums, int a, int b) {
  int sum = 0;
  for (int i = a; i < b; i++) {
    sum += nums[i];
  }
  // std::cout << sum << "\n";
  return sum;
}

int subarraySum(vector<int> &nums, int k) {
  int l = 0, r = 1, curr_sum, count = 0;

  while (l < r) {
    if (r == nums.size()) {
      break;
    }
    curr_sum = calculateWindowSum(nums, l, r);
    if (curr_sum == k) {
      count++;
      r++;
    } else if (abs(curr_sum) > k) {
      l++;
    } else {
      r++;
    }
  }
  while (l++ != r) {
    curr_sum = calculateWindowSum(nums, l, r);
    if (curr_sum == k) {
      count++;
    }
  }
  return count;
}

int main() {
  vector<int> nums = {-1, -1, 1};
  int k = 0;

  cout << subarraySum(nums, k);
}
