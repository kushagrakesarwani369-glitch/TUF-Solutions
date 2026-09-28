class Solution{
public:
    int countOdd(int arr[], int n){
        int k = 0;
        for(int i = 0 ; i<= n-1;i++){
            if(arr[i]%2 !=0 || arr[i] == 1)
                k += 1;
            else
                continue;
        }return k;    
    }
};
