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
    ListNode* mergeNodes(ListNode* head) {
        auto tail=head;
        for(auto cur=tail->next;cur->next;cur=cur->next){
            if(cur->val){
                tail->val+=cur->val;
            }else{
                tail=tail->next;
                tail->val=0;
            }
        }
        tail->next=nullptr;
        return head;
    }
};