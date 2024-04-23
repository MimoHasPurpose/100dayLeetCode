// 238. Product of Array Except SelfGiven an integer array nums, return an array answer such that answer[i] is equal to the product of all the elements of nums except nums[i].

// The product of any prefix or suffix of nums is guaranteed to fit in a 32-bit integer.

// You must write an algorithm that runs in O(n) time and without using the division operation.

class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int prefixSum = 1, n = nums.size();
        vector<int> result(n, 1);
        for (int i = 0; i < n - 1; i++) {
            result[i + 1] = prefixSum * nums[i];
            prefixSum *= nums[i];
        }
        prefixSum = 1;
        for (int i = n - 1; i > 0; i--) {
            result[i - 1] *= prefixSum * nums[i];
            prefixSum *= nums[i];
        }
        return result;
    }
};