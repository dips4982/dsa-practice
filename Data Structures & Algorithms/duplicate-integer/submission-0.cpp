#include<bits/stdc++.h>

class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        set<int> store;
        for(auto i: nums){
            if(store.count(i)) {
                // cout<<i<<"\n";
                return true;
            } else {
                store.insert(i);
            }
        }
        return false;
    }
};
