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