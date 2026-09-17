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


//15-09-26
class Solution {
public:
    int lengthOfLoop(Node* head) {
        Node* slow = head;
        Node* fast = head;

        // Step 1: Detect the loop
        while (fast != NULL && fast->next != NULL) {
            slow = slow->next;
            fast = fast->next->next;

            // Loop found
            if (slow == fast) {
                
                // Step 2: Count the nodes in the loop
                int count = 1;
                Node* temp = slow->next;

                while (temp != slow) {
                    count++;
                    temp = temp->next;
                }

                return count;
            }
        }

        // No loop
        return 0;
    }
};

//17-09-26
class Solution {
public:
    Node* sortList(Node* head) {
        
        if (head == NULL || head->next == NULL)
            return head;

        // Dummy nodes for three lists
        Node zeroDummy(0);
        Node oneDummy(0);
        Node twoDummy(0);

        Node* zero = &zeroDummy;
        Node* one = &oneDummy;
        Node* two = &twoDummy;

        Node* curr = head;

        while (curr != NULL) {
            
            if (curr->data == 0) {
                zero->next = curr;
                zero = zero->next;
            }
            else if (curr->data == 1) {
                one->next = curr;
                one = one->next;
            }
            else {
                two->next = curr;
                two = two->next;
            }

            curr = curr->next;
        }

        // Connect 0-list → 1-list → 2-list
        zero->next = (oneDummy.next != NULL) 
                     ? oneDummy.next 
                     : twoDummy.next;

        one->next = twoDummy.next;

        two->next = NULL;

        return zeroDummy.next;
    }
};