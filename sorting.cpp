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


class Solution {
public:
    void merge(vector<int>& nums, int low, int mid, int high) {
        vector<int> temp;
        int left = low;
        int right = mid + 1;

        while (left <= mid && right <= high) {
            if (nums[left] <= nums[right]) {
                temp.push_back(nums[left]);
                left++;
            } else {
                temp.push_back(nums[right]);
                right++;
            }
        }

        while (left <= mid) {
            temp.push_back(nums[left]);
            left++;
        }

        while (right <= high) {
            temp.push_back(nums[right]);
            right++;
        }

        for (int i = low; i <= high; i++) {
            nums[i] = temp[i - low];
        }
    }

    void mergeSortHelper(vector<int>& nums, int low, int high) {
        if (low >= high)
            return;

        int mid = (low + high) / 2;

        mergeSortHelper(nums, low, mid);
        mergeSortHelper(nums, mid + 1, high);
        merge(nums, low, mid, high);
    }

    vector<int> mergeSort(vector<int>& nums) {
        mergeSortHelper(nums, 0, nums.size() - 1);
        return nums;
    }
};

class Solution {
public:
    void bubbleSortHelper(vector<int>& nums, int n) {
        // Base case
        if (n == 1)
            return;

        // One pass of Bubble Sort
        for (int i = 0; i < n - 1; i++) {
            if (nums[i] > nums[i + 1]) {
                swap(nums[i], nums[i + 1]);
            }
        }

        // Recursively sort the remaining array
        bubbleSortHelper(nums, n - 1);
    }

    vector<int> bubbleSort(vector<int>& nums) {
        bubbleSortHelper(nums, nums.size());
        return nums;
    }
};