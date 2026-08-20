class Solution {
public:
    int lowerBound(vector<int>& nums, int x) {

        int low = 0;
        int high = nums.size() - 1;
        int ans = nums.size();

        while (low <= high) {

            int mid = low + (high - low) / 2;

            if (nums[mid] >= x) {
                ans = mid;
                high = mid - 1;
            }
            else {
                low = mid + 1;
            }
        }

        return ans;
    }
};


//12-8-26
class Solution {
public:
    int upperBound(vector<int>& nums, int x) {

        int low = 0;
        int high = nums.size() - 1;
        int ans = nums.size();

        while (low <= high) {

            int mid = low + (high - low) / 2;

            if (nums[mid] > x) {
                ans = mid;
                high = mid - 1;
            }
            else {
                low = mid + 1;
            }
        }

        return ans;
    }
};



class Solution {
public:
    vector<int> getFloorAndCeil(vector<int>& nums, int x) {

        int low = 0;
        int high = nums.size() - 1;

        int floor = -1;
        int ceil = -1;

        while (low <= high) {

            int mid = low + (high - low) / 2;

            if (nums[mid] == x) {
                floor = nums[mid];
                ceil = nums[mid];
                break;
            }

            else if (nums[mid] < x) {
                floor = nums[mid];
                low = mid + 1;
            }

            else {
                ceil = nums[mid];
                high = mid - 1;
            }
        }

        return {floor, ceil};
    }
};

//13-08-26

class Solution {
public:
    int countOccurrences(vector<int>& arr, int target) {

        int low = 0, high = arr.size() - 1;
        int first = -1, last = -1;

        // Find first occurrence
        while (low <= high) {
            int mid = low + (high - low) / 2;

            if (arr[mid] == target) {
                first = mid;
                high = mid - 1;
            }
            else if (arr[mid] < target) {
                low = mid + 1;
            }
            else {
                high = mid - 1;
            }
        }

        // Target not found
        if (first == -1)
            return 0;

        low = 0;
        high = arr.size() - 1;

        // Find last occurrence
        while (low <= high) {
            int mid = low + (high - low) / 2;

            if (arr[mid] == target) {
                last = mid;
                low = mid + 1;
            }
            else if (arr[mid] < target) {
                low = mid + 1;
            }
            else {
                high = mid - 1;
            }
        }

        return last - first + 1;
    }
};

class Solution {
public:
    int findKRotation(vector<int>& nums) {

        int low = 0;
        int high = nums.size() - 1;
        int ans = 0;

        while (low <= high) {

            int mid = low + (high - low) / 2;

            // Array is already sorted
            if (nums[low] <= nums[high]) {
                if (nums[low] < nums[ans])
                    ans = low;
                break;
            }

            // Left half is sorted
            if (nums[low] <= nums[mid]) {
                if (nums[low] < nums[ans])
                    ans = low;

                low = mid + 1;
            }

            // Right half is sorted
            else {
                if (nums[mid] < nums[ans])
                    ans = mid;

                high = mid - 1;
            }
        }

        return ans;
    }
};

//16-08-26
class Solution {
public:
    int floorSqrt(int n) {
        int low = 1;
        int high = n;
        int ans = 0;

        while (low <= high) {
            int mid = low + (high - low) / 2;

            if (mid <= n / mid) {
                // mid * mid <= n
                ans = mid;
                low = mid + 1;
            }
            else {
                // mid * mid > n
                high = mid - 1;
            }
        }

        return ans;
    }
};


class Solution {
public:

    int power(int x, int n, int m) {
        long long result = 1;

        for (int i = 1; i <= n; i++) {
            result *= x;

            if (result > m)
                return 2;
        }

        if (result == m)
            return 1;

        return 0;
    }

    int NthRoot(int N, int M) {
        int low = 1;
        int high = M;

        while (low <= high) {
            int mid = low + (high - low) / 2;

            int value = power(mid, N, M);

            if (value == 1)
                return mid;

            else if (value == 2)
                high = mid - 1;

            else
                low = mid + 1;
        }

        return -1;
    }
};

//20-8-26
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:

    bool canPlace(vector<int>& stalls, int k, int distance)
    {
        int cows = 1;
        int lastPosition = stalls[0];

        for(int i = 1; i < stalls.size(); i++)
        {
            if(stalls[i] - lastPosition >= distance)
            {
                cows++;
                lastPosition = stalls[i];
            }

            if(cows >= k)
                return true;
        }

        return false;
    }

    int aggressiveCows(vector<int>& stalls, int k)
    {
        sort(stalls.begin(), stalls.end());

        int low = 0;
        int high = stalls.back() - stalls.front();
        int answer = 0;

        while(low <= high)
        {
            int mid = low + (high - low) / 2;

            if(canPlace(stalls, k, mid))
            {
                answer = mid;
                low = mid + 1;
            }
            else
            {
                high = mid - 1;
            }
        }

        return answer;
    }
};