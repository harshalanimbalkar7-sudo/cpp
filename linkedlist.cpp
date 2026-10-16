// class Solution {
// public:
//     ListNode* insertAtHead(ListNode* head, int X) {
        
//         // Create a new node
//         ListNode* newNode = new ListNode(X);

//         // Connect new node to the current head
//         newNode->next = head;

//         // Make new node the new head
//         head = newNode;

//         return head;
//     }
// };

// class Solution {
// public:
//     int getCount(ListNode* head) {
//         int count = 0;

//         while (head != NULL) {
//             count++;
//             head = head->next;
//         }

//         return count;
//     }
// };

// class Solution {
// public:
//     bool searchKey(ListNode* head, int key) {
        
//         while (head != NULL) {
            
//             // If current node contains the key
//             if (head->val == key) {
//                 return true;
//             }
            
//             // Move to next node
//             head = head->next;
//         }
        
//         // Key was not found
//         return false;
//     }
// };

// //11-09-2026
// ```cpp
// class Solution {
// public:
//     Node* insertBeforeHead(Node* head, int X) {
//         // Create new node
//         Node* newNode = new Node(X);

//         // New node points forward to current head
//         newNode->next = head;

//         // If list is not empty, old head points back to new node
//         if (head != NULL) {
//             head->prev = newNode;
//         }

//         // New node becomes the new head
//         head = newNode;

//         return head;
//     }
// };


// class Solution {
// public:
//     Node* deleteHead(Node* head) {
//         // If list is empty
//         if (head == NULL) {
//             return NULL;
//         }

//         // Move head to the next node
//         head = head->next;

//         // If list is not empty, remove backward connection
//         if (head != NULL) {
//             head->prev = NULL;
//         }

//         return head;
//     }
// };

// class Solution {
// public:
//     Node* deleteHead(Node* head) {
//         // If list is empty
//         if (head == NULL) {
//             return NULL;
//         }

//         // Move head to the next node
//         head = head->next;

//         // If list is not empty, remove backward connection
//         if (head != NULL) {
//             head->prev = NULL;
//         }

//         return head;
//     }
// };


// //15-09-26
// class Solution {
// public:
//     int lengthOfLoop(Node* head) {
//         Node* slow = head;
//         Node* fast = head;

//         // Step 1: Detect the loop
//         while (fast != NULL && fast->next != NULL) {
//             slow = slow->next;
//             fast = fast->next->next;

//             // Loop found
//             if (slow == fast) {
                
//                 // Step 2: Count the nodes in the loop
//                 int count = 1;
//                 Node* temp = slow->next;

//                 while (temp != slow) {
//                     count++;
//                     temp = temp->next;
//                 }

//                 return count;
//             }
//         }

//         // No loop
//         return 0;
//     }
// };

// //17-09-26
// class Solution {
// public:
//     Node* sortList(Node* head) {
        
//         if (head == NULL || head->next == NULL)
//             return head;

//         // Dummy nodes for three lists
//         Node zeroDummy(0);
//         Node oneDummy(0);
//         Node twoDummy(0);

//         Node* zero = &zeroDummy;
//         Node* one = &oneDummy;
//         Node* two = &twoDummy;

//         Node* curr = head;

//         while (curr != NULL) {
            
//             if (curr->data == 0) {
//                 zero->next = curr;
//                 zero = zero->next;
//             }
//             else if (curr->data == 1) {
//                 one->next = curr;
//                 one = one->next;
//             }
//             else {
//                 two->next = curr;
//                 two = two->next;
//             }

//             curr = curr->next;
//         }

//         // Connect 0-list → 1-list → 2-list
//         zero->next = (oneDummy.next != NULL) 
//                      ? oneDummy.next 
//                      : twoDummy.next;

//         one->next = twoDummy.next;

//         two->next = NULL;

//         return zeroDummy.next;
//     }
// };

// class Solution {
// public:

//     Node* reverseList(Node* head) {
//         Node* prev = NULL;
//         Node* curr = head;

//         while (curr != NULL) {
//             Node* nextNode = curr->next;
//             curr->next = prev;
//             prev = curr;
//             curr = nextNode;
//         }

//         return prev;
//     }

//     Node* addOne(Node* head) {

//         // Step 1: Reverse the list
//         head = reverseList(head);

//         Node* curr = head;
//         int carry = 1;

//         // Step 2: Add 1
//         while (curr != NULL && carry) {

//             int sum = curr->data + carry;

//             curr->data = sum % 10;
//             carry = sum / 10;

//             if (curr->next == NULL)
//                 break;

//             curr = curr->next;
//         }

//         // If carry is still left, create a new node
//         if (carry) {
//             curr->next = new Node(carry);
//         }

//         // Step 3: Reverse back
//         head = reverseList(head);

//         return head;
//     }
// };

// //18-09-26
// class Solution {
// public:
//     Node* addTwoNumbers(Node* linkedList1, Node* linkedList2) {

//         Node dummy(0);
//         Node* tail = &dummy;

//         Node* curr1 = linkedList1;
//         Node* curr2 = linkedList2;

//         int carry = 0;

//         while (curr1 != NULL || curr2 != NULL || carry != 0) {

//             int sum = carry;

//             // Add digit from first list
//             if (curr1 != NULL) {
//                 sum += curr1->data;
//                 curr1 = curr1->next;
//             }

//             // Add digit from second list
//             if (curr2 != NULL) {
//                 sum += curr2->data;
//                 curr2 = curr2->next;
//             }

//             // Store current digit
//             tail->next = new Node(sum % 10);
//             tail = tail->next;

//             // Calculate carry
//             carry = sum / 10;
//         }

//         return dummy.next;
//     }
// };

// class Solution {
// public:
//     ListNode* deleteAllOccurrences(ListNode* head, int target) {
        
//         ListNode* current = head;

//         while (current != NULL) {
            
//             if (current->val == target) {
                
//                 ListNode* nextNode = current->next;

//                 // If current node is the head
//                 if (current == head) {
//                     head = current->next;
//                 }

//                 // Connect previous node to next node
//                 if (current->prev != NULL) {
//                     current->prev->next = current->next;
//                 }

//                 // Connect next node to previous node
//                 if (current->next != NULL) {
//                     current->next->prev = current->prev;
//                 }

//                 current = nextNode;
//             }
//             else {
//                 current = current->next;
//             }
//         }

//         return head;
//     }
// };

// //19-09-26
// class Solution {
// public:
//     vector<vector<int>> findPairsWithGivenSum(ListNode* head, int target) {
//         vector<vector<int>> ans;

//         if (head == NULL)
//             return ans;

//         // Find the last node
//         ListNode* right = head;
//         while (right->next != NULL) {
//             right = right->next;
//         }

//         ListNode* left = head;

//         while (left != NULL && right != NULL && left != right && left->prev != right) {
            
//             int sum = left->val + right->val;

//             if (sum == target) {
//                 ans.push_back({left->val, right->val});

//                 left = left->next;
//                 right = right->prev;
//             }
//             else if (sum < target) {
//                 left = left->next;
//             }
//             else {
//                 right = right->prev;
//             }
//         }

//         return ans;
//     }
// };

// class Solution {
// public:
//     ListNode* removeDuplicates(ListNode* head) {
        
//         if (head == NULL)
//             return NULL;

//         ListNode* current = head;

//         while (current != NULL && current->next != NULL) {
            
//             if (current->val == current->next->val) {
                
//                 ListNode* duplicate = current->next;

//                 current->next = duplicate->next;

//                 if (duplicate->next != NULL) {
//                     duplicate->next->prev = current;
//                 }
//             }
//             else {
//                 current = current->next;
//             }
//         }

//         return head;
//     }
// };

14/10/26


class Solution {
public:
    vector<int> LLTraversal(ListNode* head) {
        vector<int> ans;

        ListNode* temp = head;

        while (temp != nullptr) {
            ans.push_back(temp->val);
            temp = temp->next;
        }

        return ans;
    }
};


class Solution {
    public:
        ListNode* deleteTail(ListNode* &head) {
            if (head == nullptr || head->next == nullptr) {
            delete head;
            return nullptr;
        }

        ListNode* temp = head;

        // Move to the second-last node
        while (temp->next->next != nullptr) {
            temp = temp->next;
        }

        // Delete the last node
        delete temp->next;
        temp->next = nullptr;

        return head;
        }
};


class Solution {
public:
    ListNode* insertAtTail(ListNode* head, int X) {
        ListNode* newNode = new ListNode(X);

        // If the list is empty
        if (head == nullptr) {
            return newNode;
        }

        ListNode* temp = head;

        // Traverse to the last node
        while (temp->next != nullptr) {
            temp = temp->next;
        }

        // Attach the new node at the end
        temp->next = newNode;

        return head;
    }
};

class Solution {
public:
    ListNode* insertAtKthPosition(ListNode* head, int X, int K) {
        // Invalid position
        if (K <= 0) {
            return head;
        }

        ListNode* newNode = new ListNode(X);

        // Insert at the first position
        if (K == 1) {
            newNode->next = head;
            return newNode;
        }

        ListNode* temp = head;

        // Move to the (K-1)th node
        for (int i = 1; i < K - 1 && temp != nullptr; i++) {
            temp = temp->next;
        }

        // Position is beyond the list length
        if (temp == nullptr) {
            delete newNode;
            return head;
        }

        // Insert the new node
        newNode->next = temp->next;
        temp->next = newNode;

        return head;
    }
};