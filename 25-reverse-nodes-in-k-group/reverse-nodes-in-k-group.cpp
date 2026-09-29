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

    ListNode* reverseLL(ListNode* head){
        ListNode* temp = head;
        ListNode* front = head->next;
        ListNode* prev = nullptr;

        while(front){
            temp->next = prev; 
            prev = temp;
            temp = front;
            front = front->next;
        }
        temp->next = prev;

        return temp;
    }
    ListNode* reverseKGroup(ListNode* head, int k) {
        if(k == 1) return head;
        ListNode* fast = head;
        ListNode* temp = head;
        ListNode* newHead = head;
        ListNode* prevNode = nullptr;

        while(fast){
            int c = k;
            for(c; c > 1; c--) {if(!fast) break; fast = fast->next;}
            if(!fast) break;

            ListNode* nextNode = fast->next;
            fast->next = nullptr;
            newHead = reverseLL(temp);
            if(temp == head) head = newHead;
            if(prevNode) prevNode->next = newHead;
            temp->next = nextNode;
            prevNode = temp;
            fast = nextNode;
            temp = fast;
        }

        return head;
    }
};