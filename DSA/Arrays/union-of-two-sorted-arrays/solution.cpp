class Solution {
public:
    vector<int> unionArray(vector<int>& nums1, vector<int>& nums2) {
        vector<int> v;
        int i = 0;
        for( ; i < nums1.size();i++){
            v.push_back(nums1[i]);
        }
        for(int y = 0 ; y < nums2.size() ; y++,i++){
            v.push_back(nums2[y]);
        }
        sort(v.begin() , v.end());
        int left = 0 ; 
        for(int l = 1 ;  l < v.size() ; l++){
            if (v[left] == v[l]) {
                v.erase(v.begin() + l);
                l--;
            }
            else {
                left++;
                v[left] = v[l];
                }
        }
        return v;
    }
};