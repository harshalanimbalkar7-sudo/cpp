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


class Solution {
public:
    vector<int> bubbleSort(vector<int>& nums) {
int n = nums.size();

        for (int i = 0; i < n - 1; i++) {
            bool swapped = false;

            for (int j = 0; j < n - i - 1; j++) {
                if (nums[j] > nums[j + 1]) {
                    swap(nums[j], nums[j + 1]);
                    swapped = true;
                }
            }

            // If no swapping occurred, array is already sorted
            if (!swapped)
                break;
        }

        return nums;
    }
};


class Solution {
public:
    vector<int> insertionSort(vector<int>& nums) {
int n = nums.size();

        for (int i = 1; i < n; i++) {
            int key = nums[i];
            int j = i - 1;

            // Shift elements greater than key to the right
            while (j >= 0 && nums[j] > key) {
                nums[j + 1] = nums[j];
                j--;
            }

            // Insert key at the correct position
            nums[j + 1] = key;
        }

        return nums;
    }
};
