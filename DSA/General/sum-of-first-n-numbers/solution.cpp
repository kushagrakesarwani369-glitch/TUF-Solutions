class Solution{	
	public:
        int call(int p ){
            if(p == 0)
                return 0;
            else
                return p + call(p-1);


        }
		int NnumbersSum(int N){
            return call(N);
		}
        
};