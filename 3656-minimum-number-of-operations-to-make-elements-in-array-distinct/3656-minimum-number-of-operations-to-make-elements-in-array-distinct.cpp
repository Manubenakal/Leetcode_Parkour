class Solution {
public:
    int minimumOperations(vector<int>& nums) {
        int count = 0;

 

while(!checkDistinct(nums)){
        int mn = nums.size();
 int mm  = min(3,mn);
 nums.erase(nums.begin(),nums.begin()+mm);
 count++;

       
}



return count;
    }

    bool checkDistinct(vector<int>& nums){
        unordered_map<int,int> mp;

        

        for(auto it: nums){

            if(mp.find(it) != mp.end() ){
                return false;
            }
            mp[it]++;
        }
        return true;
    }
};