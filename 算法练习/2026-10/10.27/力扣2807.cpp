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
    ListNode* insertGreatestCommonDivisors(ListNode* head) {
        ListNode* ans=head;
        while(ans->next!=nullptr){
            int g=0;
            int x=ans->val;
            int y=ans->next->val;
            g=gcd(x,y);
            ListNode* tmp=ans->next; 
            ans->next=new ListNode(g);
            ans->next->next=tmp;
            ans=tmp;
        }
return head;
    }
};