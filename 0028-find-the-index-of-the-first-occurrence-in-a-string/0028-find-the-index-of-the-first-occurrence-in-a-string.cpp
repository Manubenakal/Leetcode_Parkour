class Solution {
public:
    int strStr(string haystack, string needle) {
     
        int m = needle.size();
        int n = haystack.size();

        if(m > n){
            return -1;
        }


        for(int i=0;i<=n-m;i++){
            if(needle == haystack.substr(i,m)){
                return i;
            }
        }

        return -1;

    }
};