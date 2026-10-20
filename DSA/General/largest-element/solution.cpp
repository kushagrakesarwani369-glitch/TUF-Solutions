class Solution {
public:
    int largestElement(vector<int>& nums) {
        int d = INT_MIN;
        for (int i = 0 ; i < nums.size();i++){
            if(d<nums[i])
                d  = nums[i];
        }
        return d;

    }
};