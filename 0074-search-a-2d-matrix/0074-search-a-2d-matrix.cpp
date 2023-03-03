class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int low = 0;
        int high = matrix[0].size()-1;

       while(low < matrix.size() && high > -1){
               if(target == matrix[low][high]){
                   return true;
               }
               if(target < matrix[low][high]){
                   high--;
               }
               else {
                   low++;
               }
            
        }
        return false;
        
    }
};