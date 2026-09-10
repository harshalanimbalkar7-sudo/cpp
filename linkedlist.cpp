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