class Solution {
public:
    vector<int> selectionSort(vector<int>& nums) {
        int  k = 0;
        int i = 0;
        
        int index = 0;
        int n = nums.size();
        while(n !=0){
            int d = INT_MAX;
            n--;
            for(;i<nums.size();i++){ 
                if(nums[i]<d){
                    d = nums[i];
                    index = i;
                }
            }
            i = k+1;
            swap(nums[k] , nums[index]);
            k++;
        //for(int i=0,j=1; i<nums.size()-1,j<nums.size();i++,j++){
            //if(nums[i]>nums[j]){
                //swap(nums[i],nums[j]);
                //i = -1;
                //j = 0;
        }
        return nums;
        }

};
