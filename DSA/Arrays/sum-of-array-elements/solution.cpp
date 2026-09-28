class Solution{
public:
	int sum(int arr[], int n) {
        int k = 0;
        for(int i = 0 ; i<= n-1;i++){
            k += arr[i]; 
        }return k;
	}
};