class Solution {
public:
    vector<int> selectionSort(vector<int>& nums) {
int n = nums.size();

        for (int i = 0; i < n - 1; i++) {
            int minIndex = i;

            // Find the smallest element
            for (int j = i + 1; j < n; j++) {
                if (nums[j] < nums[minIndex]) {
                    minIndex = j;
                }
            }

            // Swap with current position
            swap(nums[i], nums[minIndex]);
        }

        return nums;
    }
};
