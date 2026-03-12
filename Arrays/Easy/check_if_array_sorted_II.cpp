#include <bits/stdc++.h>
#include <iostream>
#include <vector>

using namespace std;

bool check(vector<int> &nums) {
  int violations = 0;
  for (int i = 0; i < nums.size(); i++) {
    if (nums[i] > nums[(i + 1) % nums.size()]) {
      violations++;
    }
  }
  return violations <= 1;
}
int main() {
  vector<int> nums = {1, 2, 3, 4, 5};
  bool ans = check(nums);
  cout << ans;
}
