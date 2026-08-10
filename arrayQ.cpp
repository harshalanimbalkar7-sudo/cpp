class Solution {
public:
    int largestElement(vector<int>& nums) {
int largest=nums[0];

for(int i=1;i<nums.size();i++){
    if(nums[i]>largest){
        largest=nums[i];
    }
}
return largest;
    }
};



class Solution {
public:
    int secondLargestElement(vector<int>& nums) {
        int largest = nums[0];
        int secondLargest = -1;

        for (int i = 1; i < nums.size(); i++) {

            if (nums[i] > largest) {
                secondLargest = largest;
                largest = nums[i];
            }
            else if (nums[i] < largest && nums[i] > secondLargest) {
                secondLargest = nums[i];
            }
        }

        return secondLargest;
    }
};


class Solution {
public:
    bool check(vector<int>& nums) {
        int count=0;
        int n=nums.size();
        for(int i=0; i<n;i++){
            if(nums[i]>nums[(i+1)%n]){
            count++;
        }
        if(count>1)
            return false;
        }
        return true;
    }
};

class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n = nums.size();

        k = k % n;

        reverse(nums.begin(), nums.end());

        reverse(nums.begin(), nums.begin() + k);

        reverse(nums.begin() + k, nums.end());
    }
};



class Solution {
public:
    int linearSearch(vector<int>& nums, int target) {
for (int i = 0; i < nums.size(); i++) {

            if (nums[i] == target) {
                return i;
            }
        }

        return -1;
    }
};


class Solution {
public:
    int maxLen(vector<int>& arr) {

        unordered_map<int, int> mp;

        int sum = 0;
        int maxi = 0;

        for (int i = 0; i < arr.size(); i++) {

            sum += arr[i];

            if (sum == 0)
                maxi = i + 1;

            if (mp.find(sum) != mp.end()) {
                maxi = max(maxi, i - mp[sum]);
            }
            else {
                mp[sum] = i;
            }
        }

        return maxi;
    }
};


class Solution {
public:
    int subarraysXor(vector<int> &nums, int k) {

        unordered_map<int, int> mp;
        int xr = 0;
        int cnt = 0;

        mp[0] = 1;

        for (int i = 0; i < nums.size(); i++) {

            xr = xr ^ nums[i];

            int x = xr ^ k;

            if (mp.find(x) != mp.end())
                cnt += mp[x];

            mp[xr]++;
        }

        return cnt;
    }
};


class Solution {
public:
    vector<int> findMissingRepeatingNumbers(vector<int>& nums) {

        long long n = nums.size();

        long long sum = 0;
        long long sqSum = 0;

        for (int x : nums) {
            sum += x;
            sqSum += 1LL * x * x;
        }

        long long expectedSum = n * (n + 1) / 2;
        long long expectedSqSum = n * (n + 1) * (2 * n + 1) / 6;

        // A - B
        long long diff = sum - expectedSum;

        // A² - B²
        long long sqDiff = sqSum - expectedSqSum;

        // (A-B)(A+B)
        long long sumAB = sqDiff / diff;

        long long A = (diff + sumAB) / 2;
        long long B = sumAB - A;

        return {(int)A, (int)B};
    }
};


class Solution {
public:

    long long merge(vector<int>& nums, int low, int mid, int high) {

        vector<int> temp;
        int i = low;
        int j = mid + 1;
        long long cnt = 0;

        while (i <= mid && j <= high) {

            if (nums[i] <= nums[j]) {
                temp.push_back(nums[i]);
                i++;
            }
            else {
                temp.push_back(nums[j]);
                cnt += mid - i + 1;
                j++;
            }
        }

        while (i <= mid) {
            temp.push_back(nums[i]);
            i++;
        }

        while (j <= high) {
            temp.push_back(nums[j]);
            j++;
        }

        for (int k = low; k <= high; k++)
            nums[k] = temp[k - low];

        return cnt;
    }

    long long mergeSort(vector<int>& nums, int low, int high) {

        if (low >= high)
            return 0;

        int mid = low + (high - low) / 2;

        long long cnt = 0;

        cnt += mergeSort(nums, low, mid);
        cnt += mergeSort(nums, mid + 1, high);

        cnt += merge(nums, low, mid, high);

        return cnt;
    }

    long long numberOfInversions(vector<int>& nums) {

        return mergeSort(nums, 0, nums.size() - 1);
    }
};