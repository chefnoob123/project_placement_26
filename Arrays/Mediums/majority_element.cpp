#include <bits/stdc++.h>
#include <iostream>
#include <vector>

using namespace std;

int majorityElement(vector<int> &nums) {
  int candidate = nums[0], count_next = 0, count_curr = 1;
  for (int i = 1; i < nums.size(); i++) {
    if (nums[i] == candidate) {
      count_curr++;
    } else {
      count_next++;
    }
    if (count_next > count_curr) {
      count_curr = count_next;
      candidate = nums[i];
    }
  }
  return candidate;
}
int main() {
  vector<int> nums = {1, 3, 1, 1, 4, 1, 1, 5, 1, 1, 6, 2, 2};

  cout << majorityElement(nums);
}
