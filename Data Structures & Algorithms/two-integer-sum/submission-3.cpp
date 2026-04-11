class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        map<int, int> lookup;
        vector<int> ans;
        for(int i=0;i<nums.size();i++) {
            int rem = target - nums[i];
            if(lookup.find(rem)!=lookup.end()) {
                ans.push_back(i);
                ans.push_back(lookup[rem]);
                sort(ans.begin(), ans.end());
                return ans;
            } else {
                lookup[nums[i]] = i;
            }
        }
    }
};
