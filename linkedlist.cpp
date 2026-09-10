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