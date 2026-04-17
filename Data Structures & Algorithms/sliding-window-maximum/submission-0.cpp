class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        multiset<int> pq;
        vector<int> ans;
        int n = nums.size();
        for(int i=0;i<n;i++) {
            pq.insert(nums[i]);
            if(pq.size()>k) {
                pq.erase(pq.find(nums[i-k]));
            }
            if(pq.size()==k) {
                cout<<"full"<<"\n";
                cout<<"top element: "<<*pq.rbegin()<<"\n";
                ans.push_back(*pq.rbegin());
            }
        }

        return ans;
    }
};
