class Solution {
public:
    ListNode* insertAtHead(ListNode* head, int X) {
        
        // Create a new node
        ListNode* newNode = new ListNode(X);

        // Connect new node to the current head
        newNode->next = head;

        // Make new node the new head
        head = newNode;

        return head;
    }
};

class Solution {
public:
    int getCount(ListNode* head) {
        int count = 0;

        while (head != NULL) {
            count++;
            head = head->next;
        }

        return count;
    }
};

class Solution {
public:
    bool searchKey(ListNode* head, int key) {
        
        while (head != NULL) {
            
            // If current node contains the key
            if (head->val == key) {
                return true;
            }
            
            // Move to next node
            head = head->next;
        }
        
        // Key was not found
        return false;
    }
};