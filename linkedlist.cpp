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

//11-09-2026
```cpp
class Solution {
public:
    Node* insertBeforeHead(Node* head, int X) {
        // Create new node
        Node* newNode = new Node(X);

        // New node points forward to current head
        newNode->next = head;

        // If list is not empty, old head points back to new node
        if (head != NULL) {
            head->prev = newNode;
        }

        // New node becomes the new head
        head = newNode;

        return head;
    }
};


class Solution {
public:
    Node* deleteHead(Node* head) {
        // If list is empty
        if (head == NULL) {
            return NULL;
        }

        // Move head to the next node
        head = head->next;

        // If list is not empty, remove backward connection
        if (head != NULL) {
            head->prev = NULL;
        }

        return head;
    }
};

class Solution {
public:
    Node* deleteHead(Node* head) {
        // If list is empty
        if (head == NULL) {
            return NULL;
        }

        // Move head to the next node
        head = head->next;

        // If list is not empty, remove backward connection
        if (head != NULL) {
            head->prev = NULL;
        }

        return head;
    }
};
