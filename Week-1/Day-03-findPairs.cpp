class Solution {
public:
    int findPairs(vector<int>& nums, int k) {
        unordered_map<int, vector<int>> m;
        for(int i=0; i<nums.size(); i++)    m[nums[i]].push_back(i);
        set<vector<int>> s;
        for(int i=0; i<nums.size()-1; i++) {
            for(int x : m[nums[i]-k]) {
                if(x != i)  s.insert({nums[i], nums[x]});
            }
            for(int x : m[nums[i]+k]) {
                if(x != i)  s.insert({nums[x], nums[i]});
            }
        }
        return s.size();
    }
};
