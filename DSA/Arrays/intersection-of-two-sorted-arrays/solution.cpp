class Solution {
public:
    vector<int> intersectionArray(vector<int>& nums1, vector<int>& nums2) {
        vector<int> v;
        int l = min(nums1.size() , nums2.size());
        for(int i = 0 ; i <  min(nums1.size() , nums2.size()) ; i++){
            if(  min(nums1.size() , nums2.size()) == nums1.size() ){
                for(int y = 0 ; y < nums2.size() ; y++ ){
                    if(nums1[i] == nums2[y]){
                        v.push_back(nums1[i]);
                        nums1.erase(nums1.begin() + i);
                        nums2.erase(nums2.begin() + y);
                        y--;
                        i--;
                        break;
                    }
                }
            }
            else{
                for(int y = 0 ; y < nums1.size() ; y++ ){
                    if(nums2[i] == nums1[y]){
                        v.push_back(nums2[i]);
                        nums1.erase(nums1.begin() + y);
                        nums2.erase(nums2.begin() + i);
                        y--;
                        i--;
                        break;
                    }

                }
            }
        }return v;    
    }
};