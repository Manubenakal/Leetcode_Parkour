class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int maxi = 0, start = -1;
        vector<int> man(256,-1);
        for(int i=0;i<s.size();i++){
            if(man[s[i]] > start){
                start = man[s[i]];
            }
            man[s[i]] = i;
            
            maxi = max(maxi,i-start);
        }
        
        return maxi;
        
        
        
    }
};