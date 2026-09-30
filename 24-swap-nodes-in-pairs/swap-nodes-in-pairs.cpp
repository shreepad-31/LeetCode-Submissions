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
    ListNode* swapPairs(ListNode* head) {
        if(!head || !head->next) return head;

        ListNode* front = head;
        ListNode* temp = head;
        ListNode* prevNode = nullptr;

        while(front){
            front = front->next;
            if(!front) break;
            ListNode* nextNode = front->next;

            front->next = temp;
            temp->next = nullptr;

            if (head == temp) head = front;
            if(prevNode) prevNode->next = front;
            prevNode = temp;
            front = nextNode;
            temp = front;
        }
        prevNode->next = temp;
        return head;
    }
};