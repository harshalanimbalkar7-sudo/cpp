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


class Solution {
public:

    bool isPossible(vector<int>& nums, int m, int maxPages)
    {
        int students = 1;
        int pages = 0;

        for(int i = 0; i < nums.size(); i++)
        {
            if(pages + nums[i] <= maxPages)
            {
                pages += nums[i];
            }
            else
            {
                students++;
                pages = nums[i];
            }

            if(students > m)
                return false;
        }

        return true;
    }

    int findPages(vector<int>& nums, int m)
    {
        int n = nums.size();

        // More students than books -> impossible
        if(m > n)
            return -1;

        int low = *max_element(nums.begin(), nums.end());

        int high = 0;
        for(int pages : nums)
        {
            high += pages;
        }

        int answer = -1;

        while(low <= high)
        {
            int mid = low + (high - low) / 2;

            if(isPossible(nums, m, mid))
            {
                answer = mid;
                high = mid - 1;
            }
            else
            {
                low = mid + 1;
            }
        }

        return answer;
    }
};

//21-08-26

class Solution {
public:

    bool canPaint(vector<int>& C, int A, long long maxLength) {
        int painters = 1;
        long long currentLength = 0;

        for (int board : C) {

            // Current painter cannot take this board
            if (currentLength + board > maxLength) {
                painters++;
                currentLength = board;

                // Need more painters than available
                if (painters > A)
                    return false;
            }
            else {
                currentLength += board;
            }
        }

        return true;
    }

    int paint(int A, int B, vector<int>& C) {

        const int MOD = 10000003;

        long long left = 0;
        long long right = 0;

        // Minimum possible maximum workload
        // = largest board
        for (int board : C) {
            left = max(left, (long long)board);
            right += board;
        }

        // Binary search
        while (left < right) {

            long long mid = left + (right - left) / 2;

            if (canPaint(C, A, mid)) {
                // mid is possible
                // Try a smaller workload
                right = mid;
            }
            else {
                // mid is impossible
                // Need a larger workload
                left = mid + 1;
            }
        }

        // left = minimum maximum board length
        // Multiply by B to get time
        return (left % MOD) * B % MOD;
    }
};

//22-08-26
class Solution {
public:

    // Returns true if we can make every gap <= dist
    // using at most k new stations.
    bool canPlace(vector<int>& arr, int k, double dist) {

        int required = 0;

        for (int i = 1; i < arr.size(); i++) {

            double gap = arr[i] - arr[i - 1];

            // Number of stations required inside this gap
            required += (int)ceil(gap / dist) - 1;

            // We already need too many stations
            if (required > k)
                return false;
        }

        return true;
    }

    double minMaxDist(vector<int>& arr, int k) {

        double low = 0.0;
        double high = 0.0;

        // Find the largest existing gap
        for (int i = 1; i < arr.size(); i++) {
            high = max(high, (double)(arr[i] - arr[i - 1]));
        }

        // Binary search with precision
        while (high - low > 1e-6) {

            double mid = low + (high - low) / 2.0;

            if (canPlace(arr, k, mid)) {
                // mid is possible
                // Try smaller distance
                high = mid;
            }
            else {
                // mid is impossible
                // Need larger distance
                low = mid;
            }
        }

        return high;
    }
};

//23-08-26

class Solution {
public:
    int kthElement(vector<int>& a, vector<int>& b, int k) {

        // Always binary search on the smaller array
        if (a.size() > b.size()) {
            swap(a, b);
        }

        int m = a.size();
        int n = b.size();

        // i = number of elements taken from a
        // j = number of elements taken from b

        int low = max(0, k - n);
        int high = min(k, m);

        while (low <= high) {

            int i = low + (high - low) / 2;

            int j = k - i;

            // Boundary values of a
            int l1 = (i == 0) ? INT_MIN : a[i - 1];
            int r1 = (i == m) ? INT_MAX : a[i];

            // Boundary values of b
            int l2 = (j == 0) ? INT_MIN : b[j - 1];
            int r2 = (j == n) ? INT_MAX : b[j];

            // Correct partition
            if (l1 <= r2 && l2 <= r1) {
                return max(l1, l2);
            }

            // Took too many elements from a
            if (l1 > r2) {
                high = i - 1;
            }

            // Took too few elements from a
            else {
                low = i + 1;
            }
        }

        return -1;
    }
};


class Solution {
public:

    int firstOne(vector<int>& row) {

        int low = 0;
        int high = row.size() - 1;

        while (low <= high) {

            int mid = low + (high - low) / 2;

            if (row[mid] == 1) {
                // We found a 1.
                // But maybe there is another 1 before it.
                high = mid - 1;
            }
            else {
                // row[mid] == 0
                // So first 1 must be on the right.
                low = mid + 1;
            }
        }

        return low;
    }


    int rowWithMax1s(vector<vector<int>>& mat) {

        int n = mat.size();
        int m = mat[0].size();

        int maxOnes = 0;
        int answer = -1;

        for (int i = 0; i < n; i++) {

            int first = firstOne(mat[i]);

            int ones = m - first;

            if (ones > maxOnes) {
                maxOnes = ones;
                answer = i;
            }
        }

        return answer;
    }
};