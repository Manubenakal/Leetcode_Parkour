class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        vector<int> result(n, 1);
        
        int leftProduct = 1;
        for (int i = 1; i < n; ++i) {
            leftProduct *= nums[i - 1];
            result[i] *= leftProduct;
        }

        // Calculate products of elements to the right of each element and multiply with the left product
        int rightProduct = 1;
        for (int i = n - 2; i >= 0; --i) {
            rightProduct *= nums[i + 1];
            result[i] *= rightProduct;
        }

        return result;
        
    }
};