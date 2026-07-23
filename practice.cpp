class Solution {
public:
    vector<int> unionArray(vector<int>& nums1, vector<int>& nums2) {

        vector<int> ans;
        int i = 0, j = 0;

        while (i < nums1.size() && j < nums2.size()) {

            if (nums1[i] <= nums2[j]) {
                if (ans.empty() || ans.back() != nums1[i])
                    ans.push_back(nums1[i]);
                i++;
            }
            else {
                if (ans.empty() || ans.back() != nums2[j])
                    ans.push_back(nums2[j]);
                j++;
            }
        }

        while (i < nums1.size()) {
            if (ans.empty() || ans.back() != nums1[i])
                ans.push_back(nums1[i]);
            i++;
        }

        while (j < nums2.size()) {
            if (ans.empty() || ans.back() != nums2[j])
                ans.push_back(nums2[j]);
            j++;
        }

        return ans;
    }
};


class Solution {
public:
    int missingNumber(vector<int>& nums) {

        int n = nums.size();

        int total = n * (n + 1) / 2;
        int sum = 0;

        for (int i = 0; i < n; i++)
            sum += nums[i];

        return total - sum;
    }
};


class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {

        int count = 0, maxCount = 0;

        for (int i = 0; i < nums.size(); i++) {

            if (nums[i] == 1)
                count++;
            else
                count = 0;

            maxCount = max(maxCount, count);
        }

        return maxCount;
    }
};



class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int ans = 0;

        for (int i = 0; i < nums.size(); i++) {
            ans = ans ^ nums[i];
        }

        return ans;
    }
};


class Solution {
public:
    int longestSubarray(vector<int>& nums, int k) {

        unordered_map<int, int> mp;
        int sum = 0, maxLen = 0;

        for (int i = 0; i < nums.size(); i++) {

            sum += nums[i];

            if (sum == k)
                maxLen = i + 1;

            if (mp.find(sum - k) != mp.end())
                maxLen = max(maxLen, i - mp[sum - k]);

            if (mp.find(sum) == mp.end())
                mp[sum] = i;
        }

        return maxLen;
    }
};