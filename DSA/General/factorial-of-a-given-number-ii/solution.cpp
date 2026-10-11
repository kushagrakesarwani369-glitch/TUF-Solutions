class Solution{	
	public:
    long long  call(int P){
        if(P == 0)
            return 1;
        
        return P * call(P - 1 );



    }
		long long int factorial(int n){
            return call(n);
			
		}
};