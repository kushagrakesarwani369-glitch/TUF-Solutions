class Solution{	
	public:
        int call(vector<int>& v , int P ){
            if(P == v.size())
                return 0;
            return v[P] + call(v,++P);
        }
		int arraySum(vector<int>& nums){
            int N = 0;
            return call(nums,N);
			
		}
};