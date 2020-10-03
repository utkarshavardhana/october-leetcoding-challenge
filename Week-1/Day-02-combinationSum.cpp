class Solution {
public:
    void traverse(vector<int> candidates, int pos, int sum, int target, vector<int> temp, set<vector<int>>& res) {
        if(sum >= target) {
            if(sum == target)   res.insert(temp);
            return;
        }
        for(int i=pos; i<candidates.size(); i++) {
            temp.push_back(candidates[i]);
            traverse(candidates, i, sum+candidates[i], target, temp, res);
            temp.pop_back();
        }
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        set<vector<int>> res;
        vector<int> temp;
        traverse(candidates, 0, 0, target, temp, res);
        vector<vector<int>> ret;
        for(auto i : res) {
            ret.push_back(i);
        }
        return ret;
    }
};
