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
        if(!lists.size()) return nullptr;
        if(lists.size() == 1) return lists[0];

        ListNode* dummy = new ListNode(-1);
        ListNode* temp = dummy;
        ListNode* pointer = nullptr;

        while(lists.size() > 1){
            int mini = INT_MAX, ind = -1;
            for(int i = 0; i < lists.size(); i++){
                if(lists[i] == nullptr) {lists.erase(lists.begin() + i); i--; continue;}
                if(lists[i]->val < mini){
                    pointer = lists[i];
                    mini = lists[i]->val;
                    ind = i;
                }
                
            }
            if(ind != -1){
                lists[ind] = lists[ind]->next;
                pointer->next = nullptr;
                temp->next = pointer;
                temp = temp->next;
            }

        }

        if(lists.size() == 1) temp->next = lists[0];
        temp = dummy->next;
        delete dummy;

        return temp;
    }
};