#include <algorithm>
#include <bits/stdc++.h>
#include <iostream>
#include <vector>

using namespace std;
int findMaxConsecutiveOnes(vector<int> &nums) {
  int maxi = 0, i = 0, current = 0;
  while (i < nums.size()) {
    if (nums[i] == 0) {
      maxi = std::max(maxi, current);
      current = 0;
    } else {
      current++;
    }
    i++;
  }
  return std::max(maxi, current);
}

int main() {
  vector<int> nums = {1, 1, 0, 1, 1, 1};

  cout << findMaxConsecutiveOnes(nums);
}
