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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        if(!list1 || !list2) {if (list1) return list1; else return list2;}
        ListNode* newHead; ListNode* slow; ListNode* fast; ListNode* temp;
        if(list1->val <= list2->val){
            newHead = list1;
            slow = list1;
            fast = list1->next;
            temp = list2;
        }
        else{
            newHead = list2;
            slow = list2;
            fast = list2->next;
            temp = list1;
        }

        while(fast){
            if(!temp) return newHead;
            if(temp->val <= fast->val){
                slow->next = temp;
                temp = temp->next;
                slow->next->next = fast;
                slow = slow->next;
            }
            else{
                slow = slow->next;
                fast = slow->next;
            }
        }
        slow->next = temp;

        return newHead;
    }
};