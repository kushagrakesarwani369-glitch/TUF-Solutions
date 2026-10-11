class Solution{	
public:	
    vector<char> call(vector<char>& s, int p){
        if(p >= s.size()/2)
            return s;
        swap(s[p] , s[s.size()-1-p]);
        call(s,++p);
        return s;


    }
	vector<char> reverseString(vector<char>& s){
        return call(s,0);
	}
};