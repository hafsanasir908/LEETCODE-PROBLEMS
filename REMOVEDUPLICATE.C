/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */

struct ListNode* deleteDuplicates(struct ListNode* head){
    struct ListNode* current = head;

    while(current != NULL && current->next != NULL){
        if(current->val == current->next->val){
            // Skip the duplicate
            struct ListNode* temp = current->next;
            current->next = current->next->next;
            free(temp); // optional in LeetCode
        } else {
            current = current->next;
        }
    }

    return head;
}

