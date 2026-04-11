class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        map<string, vector<string>> grouped;
        for(auto i: strs){
            cout<<i<<" ";
            string sorted = i;
            sort(sorted.begin(), sorted.end());
            grouped[sorted].push_back(i);
        }

        vector<vector<string>> answers;

        for(auto it: grouped) {
            answers.push_back(grouped[it.first]);
        }

        return answers;
    }
};
