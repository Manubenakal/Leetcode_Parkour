class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        vector<int> res(nums1.size(),-1);
        stack<int> stk;
        unordered_map<int,int> pp;
        for(int i=0;i<nums2.size();i++){
               
               while( !stk.empty() && nums2[i] > stk.top()){
                pp[stk.top()] = nums2[i];
                stk.pop();
               }

               stk.push(nums2[i]);
        }

        for(int i=0;i<nums1.size();i++){
if( pp.find(nums1[i]) != pp.end()){
    res[i] = pp[nums1[i]];
}
        }

        return res;
    }
};