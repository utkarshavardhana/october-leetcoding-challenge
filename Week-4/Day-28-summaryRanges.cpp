class Solution {
public:
    vector<string> summaryRanges(vector<int>& nums) {
        int st = 0;
        vector<string> res;
        if(nums.size() == 1)    res.push_back(to_string(nums[0]));
        for(int i=1; i<nums.size(); i++) {
            if(nums[i] > nums[i-1]+1) {
                string t = to_string(nums[st]);
                if(st != i-1)   t += "->" + to_string(nums[i-1]);
                res.push_back(t);
                st = i;
                if(i == nums.size()-1) {
                    string t = to_string(nums[st]);
                    res.push_back(t);
                }
            } else if(i == nums.size()-1){
                string t = to_string(nums[st]);
                if(st != i)   t += "->" + to_string(nums[i]);
                res.push_back(t);
            }
        }
        return res;
    }
};
