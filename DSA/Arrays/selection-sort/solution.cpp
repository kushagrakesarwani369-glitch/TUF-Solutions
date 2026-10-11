class Solution {
public:
    vector<int> selectionSort(vector<int>& nums) {
        for(int i=0,j=1; i<nums.size()-1,j<nums.size();i++,j++){
            if(nums[i]>nums[j]){
                swap(nums[i],nums[j]);
                i = -1;
                j = 0;
            }



        }return nums;

    }
};
