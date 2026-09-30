class Solution {
public:

    // Insert an element at the bottom of the stack
    void insertAtBottom(stack<int>& st, int x) {

        // If stack is empty, x becomes the bottom
        if (st.empty()) {
            st.push(x);
            return;
        }

        // Remove top element
        int topElement = st.top();
        st.pop();

        // Recursively reach the bottom
        insertAtBottom(st, x);

        // Put the removed element back
        st.push(topElement);
    }

    // Reverse the stack
    void reverseStack(stack<int>& st) {

        // Base case
        if (st.empty()) {
            return;
        }

        // Remove top
        int x = st.top();
        st.pop();

        // Reverse remaining stack
        reverseStack(st);

        // Put x at the bottom
        insertAtBottom(st, x);
    }
};


//30/09/26
class Solution {
public:
    vector<string> generateBinaryStrings(int n) {
        vector<string> ans;
        string s = "";

        function<void(int)> solve = [&](int index) {

            // String is complete
            if (index == n) {
                ans.push_back(s);
                return;
            }

            // Always allowed to add 0
            s.push_back('0');
            solve(index + 1);
            s.pop_back();

            // Add 1 only if previous character is not 1
            if (s.empty() || s.back() != '1') {
                s.push_back('1');
                solve(index + 1);
                s.pop_back();
            }
        };

        solve(0);
        return ans;
    }
};


class Solution {
public:
    int countSubsequenceWithTargetSum(vector<int>& nums, int k) {
        
        int n = nums.size();

        // Recursive function
        function<int(int, int)> solve = [&](int index, int sum) {
            
            // Reached the end
            if (index == n) {
                return (sum == k) ? 1 : 0;
            }

            // Take current element
            int take = solve(index + 1, sum + nums[index]);

            // Don't take current element
            int notTake = solve(index + 1, sum);

            return take + notTake;
        };

        return solve(0, 0);
    }
};