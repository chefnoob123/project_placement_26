#include <bits/stdc++.h>
#include <iostream>
#include <utility>
#include <vector>

using namespace std;

void moveZeroes(vector<int> &nums) {
  int ptr = 0;
  for (int i = 0; i < nums.size(); i++) {
    if (nums[i] != 0) {
      swap(nums[i], nums[ptr]);
      ptr++; // HACK: PTR WILL ALWAYS POINT TO A ZERO BECAUSE IT IS LEFT AT A
             // ZERO beacuse of nums[i]!=0 condition, the non zero swap
             // themeselves and update ptr in that case, otherwise it STAYS ON
             // THAT ZERO
    }
  }
}

int main() {
  vector<int> nums = {0, 0, 1};
  moveZeroes(nums);
  for (int x : nums) {
    cout << x << "\t";
  }
}
