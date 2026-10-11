class Solution{
public:
    int call(int nums){
        int sum = 0;
        if(nums<10)
            return nums;   
        while(nums>0){
            sum += nums%10;
            nums = nums/10;
        }        
        nums = sum;
        return call( nums);


    }
	int addDigits(int nums){
        return call(nums);
        }
	
};