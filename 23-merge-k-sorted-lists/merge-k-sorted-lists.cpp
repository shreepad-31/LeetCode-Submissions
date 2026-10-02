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
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        priority_queue<pair<int, int> , vector<pair<int, int>>, greater<pair<int, int>>> pq;
        ListNode* dummy = new ListNode(-1);
        ListNode* temp = dummy;

        for(int i = 0; i < lists.size(); i++){
            if(lists[i]) pq.push({lists[i]->val, i});
        }

        while(!pq.empty()){
            pair<int, int> sam = pq.top(); pq.pop();

            temp->next = lists[sam.second];
            temp = temp->next;
            lists[sam.second] = lists[sam.second]->next;

            if(lists[sam.second]) pq.push({lists[sam.second]->val, sam.second});
        }

        ListNode* head = dummy->next;
        delete dummy;
        return head;
    }
};