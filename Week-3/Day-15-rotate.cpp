class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n = nums.size();
        if(n == 0)  return;
        k%=n;
        if(k == 0)  return;
        vector<int> temp(nums.begin(), nums.begin()+(n-k));
        int j = 0;
        for(int i=n-k; i<n; i++) {
            nums[j] = nums[i];
            j++;
        }
        for(int i=0; i<n-k; i++) {
            nums[j] = temp[i];
            j++;
        }
    }
};
