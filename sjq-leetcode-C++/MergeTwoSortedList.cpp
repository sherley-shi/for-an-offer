/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        ListNode* list = new ListNode(0);
        ListNode* p = list;
        while(l1 && l2){
            if(l1->val < l2->val){
                p->next = l1;
                p = p->next;
                l1 = l1->next;
            }
            else{
                p->next = l2;
                p = p->next;
                l2 = l2->next;
            }
        }
        if(l1)
            p->next = l1;
        else
            p->next = l2;
        return list->next;
    }
};