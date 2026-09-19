/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    void addNode(ListNode*& head, ListNode*& tail, int val){
        if(head == nullptr){
            head = new ListNode(val);
            tail = head;
        }
        else {
            tail->next = new ListNode(val);
            tail = tail->next;
        }
    }
    
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* head = nullptr;
        ListNode* tail = head;
        int sum = 0, carry = 0, digit = 0;

        while(l1 && l2){
            sum = l1->val + l2->val + carry;
            digit = sum % 10;
            carry = sum / 10;

            addNode(head, tail, digit);

            l1 = l1->next; l2 = l2->next;
        }

        while(l1){
            sum = l1->val + carry;
            digit = sum % 10;
            carry = sum / 10;

            addNode(head, tail, digit);

            l1 = l1->next;
        }

        while(l2){
            sum = l2->val + carry;
            digit = sum % 10;
            carry = sum / 10;

            addNode(head, tail, digit);

            l2 = l2->next;
        }

        if(carry) addNode(head, tail, carry);

        return head;
    }
};