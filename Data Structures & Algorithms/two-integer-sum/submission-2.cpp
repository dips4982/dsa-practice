#include <bits/stdc++.h>

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int size = nums.size();
        vector<int> ans;
        for(int i=0;i<size;i++) {
            int rem = target-nums[i];
            auto find2 = find(nums.begin()+i+1, nums.end(), rem);
            if(find2!=nums.end()){
                int found = distance(nums.begin(), find2);
                ans.push_back(i);
                ans.push_back(found);
                return ans;
            }
        }
    }
};
