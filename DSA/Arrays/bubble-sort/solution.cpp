class Solution {
public:
    vector<int> bubbleSort(vector<int>& nums) {
        int n = false;
        while(!n){  
            int p = 0;
            for(int i =0,j=1; i<nums.size()-1,j<nums.size();i++,j++){
                
                if(nums[i]>nums[j]){
                    swap(nums[i],nums[j]);
                    p++;
                } 
            }
            if(p ==0)
                    break;



        }
        return nums;
    }
};
