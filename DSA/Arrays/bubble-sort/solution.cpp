class Solution {
public:
    vector<int> bubbleSort(vector<int>& nums) {
        int n = nums.size();
        while(n>1){  
            int p = 0;
            for(int i =0; i<n-1;i++){
                
                if(nums[i]>nums[i+1]){
                    swap(nums[i],nums[i+1]);
                    p++;
                } 
            }
            if(p ==0)
                    break;
            n--;



        }
        return nums;
    }
};
