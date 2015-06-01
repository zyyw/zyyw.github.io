// Reverse a single lined list
class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        // iteratively reverse a single linked list
        if(head == NULL) 
            return head;
        ListNode* ptr = head;
        ListNode* trace = head->next;
        while (trace != NULL) { // case included: head->next == NULL
            ptr -> next = trace->next;
            trace->next = head;
            head = trace; // reset the head point
            trace = ptr->next; // reset trace
        }
        return head;
    }
};
