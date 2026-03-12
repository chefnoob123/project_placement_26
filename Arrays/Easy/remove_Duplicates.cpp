// NOTE: NOT COMPLETED
#include <bits/stdc++.h>
#include <iostream>
#include <vector>

using namespace std;

int removeDuplicates(vector<int> &nums) {
  set<int> seen;
  int count = 0, i = 0;
  while (i < nums.size()) {
    if (!seen.contains(nums[i])) {
      seen.insert(nums[i]);
      count++;
    }
  }
  return count;
}
int main() {
  vector<int> nums = {0, 0, 1, 1, 1, 2, 2, 3, 3, 4};
  cout << removeDuplicates(nums);

  for (int x : nums) {
    cout << x << "\t" << endl;
  }
  cout << "\n\n\n";
  cout << nums.size();
}
