class Solution {
public:
    void sortColors(vector<int>& nums) {
        for (int i = 0; i < nums.size() - 1; i++) {

        // Assume the current element is the minimum
        int minIndex = i;

        // Find the minimum element in the unsorted part
        for (int j = i + 1; j < nums.size(); j++) {
            if (nums[j] < nums[minIndex]) {
                minIndex = j;
            }
        }

        // Swap the minimum element with the current element
        swap(nums[i], nums[minIndex]);
    }
    }
};